// external/monitor/src/main.c

#include "config.h"
#include "constants.h"
#include "metric_exposer.h"
#include <fcntl.h> // For open()
#include <signal.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>   // For strlen()
#include <sys/stat.h> // For S_IRUSR, etc.
#include <unistd.h>

#define PID_FILE "/tmp/refuge_monitor.pid"

static monitor_config_t config;
static volatile bool reload_config_flag = true;
static const char* config_path = "config.json";

/**
 * @brief Creates a PID file to store the process ID of the monitor.
 * This allows other processes to find and signal the monitor.
 */
static void create_pid_file()
{
    int fd = open(PID_FILE, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
    if (fd == -1)
    {
        perror("monitor: could not create pid file");
        exit(EXIT_FAILURE); // Critical error
    }
    char pid_str[16];
    snprintf(pid_str, sizeof(pid_str), "%d", getpid());
    if (write(fd, pid_str, strlen(pid_str)) == -1)
    {
        perror("monitor: could not write to pid file");
        close(fd);
        exit(EXIT_FAILURE); // Critical error
    }
    close(fd);
}

/**
 * @brief Removes the PID file upon clean shutdown.
 */
static void remove_pid_file()
{
    remove(PID_FILE);
}

/**
 * @brief Signal handler for the monitor process.
 * Handles graceful shutdown (SIGTERM, SIGINT) and config reload (SIGHUP).
 *
 * @param signum The signal number received.
 */
void signal_handler_monitor(int signum)
{
    if (signum == SIGHUP)
    {
        reload_config_flag = true;
    }
    else if (signum == SIGTERM || signum == SIGINT)
    {
        printf("\nMonitor shutting down...\n");
        remove_pid_file(); // Clean up the PID file on exit
        destroy_mutex();
        exit(EXIT_SUCCESS);
    }
}

/**
 * @brief Main entry point for the system monitor.
 */
int main(int argc, char* argv[])
{
    if (argc > 1)
    {
        config_path = argv[1];
    }
    printf("Monitor using configuration file: %s\n", config_path);

    // Setup signal handlers
    struct sigaction sa;
    sa.sa_handler = signal_handler_monitor;
    sigemptyset(&sa.sa_mask);
    sa.sa_flags = SA_RESTART;
    sigaction(SIGHUP, &sa, NULL);
    sigaction(SIGTERM, &sa, NULL);
    sigaction(SIGINT, &sa, NULL);

    if (initialize_metrics() != EXIT_SUCCESS)
    {
        fprintf(stderr, "Monitor: Failed to initialize metrics. Aborting.\n");
        return EXIT_FAILURE;
    }

    pthread_t server_thread_id;
    if (pthread_create(&server_thread_id, NULL, expose_metrics_thread, NULL) != 0)
    {
        fprintf(stderr, "Monitor: Error: Could not create HTTP server thread.\n");
        destroy_mutex();
        return EXIT_FAILURE;
    }

    // Give the server thread a moment to start and potentially fail if port is in use.
    usleep(100000); // 100ms

    // If we are still running, it means the port was free. Create the PID file.
    create_pid_file();
    atexit(remove_pid_file); // Register cleanup function for other exit paths.

    while (true)
    {
        if (reload_config_flag)
        {
            printf("Monitor: Reloading configuration...\n");
            if (load_config(&config, config_path) != 0)
            {
                fprintf(stderr, "Monitor: Failed to load config, using default values.\n");
                config.update_interval_seconds = 2;
                config.enable_cpu = true;
                config.enable_memory = true;
                config.enable_disk_io = true;
            }
            reload_config_flag = false;
        }

        if (config.enable_cpu) update_cpu_gauge();
        if (config.enable_memory) update_memory_gauge();
        if (config.enable_disk_io) update_disk_io_gauges();

        sleep(config.update_interval_seconds > 0 ? config.update_interval_seconds : 1);
    }

    // Unreachable code, but good practice
    pthread_join(server_thread_id, NULL);
    destroy_mutex();

    return EXIT_SUCCESS;
}