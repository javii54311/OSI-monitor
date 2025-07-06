#include "config.h"
#include "constants.h"
#include "metric_exposer.h"
#include <fcntl.h>
#include <signal.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

#define PID_FILE "/tmp/refuge_monitor.pid"

static monitor_config_t config;
static volatile bool reload_config_flag = true;
static const char* config_path = "config.json";

/**
 * @brief Creates a PID file to store the process ID of the monitor.
 * This allows other processes to find and signal the monitor.
 */
static void create_pid_file(void)
{
    int fd = open(PID_FILE, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
    if (fd == -1)
    {
        perror("monitor: could not create pid file");
        exit(EXIT_FAILURE);
    }
    char pid_str[16];
    snprintf(pid_str, sizeof(pid_str), "%d", getpid());
    if (write(fd, pid_str, strlen(pid_str)) == -1)
    {
        perror("monitor: could not write to pid file");
        close(fd);
        exit(EXIT_FAILURE);
    }
    close(fd);
}

/**
 * @brief Removes the PID file upon clean shutdown.
 */
static void remove_pid_file(void)
{
    remove(PID_FILE);
}

/**
 * @brief Signal handler for the monitor process.
 * Handles graceful shutdown (SIGTERM, SIGINT) and config reload (SIGHUP).
 *
 * @param signum The signal number received.
 */
static void signal_handler_monitor(int signum)
{
    if (signum == SIGHUP)
    {
        reload_config_flag = true;
    }
    else if (signum == SIGTERM || signum == SIGINT)
    {
        printf("\nMonitor shutting down...\n");
        remove_pid_file();
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

    usleep(100000); // 100ms pause for the server thread to start.

    create_pid_file();
    atexit(remove_pid_file);

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

        // Lock the mutex to ensure the entire update block is atomic.
        // This prevents Prometheus from scraping partially updated metrics.
        lock_metrics_mutex();

        if (config.enable_cpu)
            update_cpu_gauge();
        if (config.enable_memory)
            update_memory_gauge();
        if (config.enable_disk_io)
            update_disk_io_gauges();
        
        // Note: Other metrics are collected but not currently controlled by the config file.
        // They could be added to the config logic if needed.
        update_context_switches_gauge();
        update_network_gauges();
        update_process_count_gauge();

        // Unlock the mutex after all metrics have been updated.
        unlock_metrics_mutex();

        sleep(config.update_interval_seconds > 0 ? config.update_interval_seconds : 1);
    }

    // This section is unreachable in the current design, but it's good practice.
    pthread_join(server_thread_id, NULL);
    destroy_mutex();

    return EXIT_SUCCESS;
}