// src/main.c (del proyecto OSI-monitor)

#include "config.h"
#include "constants.h"
#include "metric_exposer.h"
#include <signal.h> // For signal handling
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Global config and a flag to signal a reload
static monitor_config_t config;
static volatile bool reload_config_flag = true; // Start with an initial load
static const char* config_path = "config.json"; // Default config path

/**
 * @brief Signal handler for SIGHUP (reload) and SIGTERM (terminate).
 *
 * @param signum The signal number received.
 */
void signal_handler_monitor(int signum)
{
    if (signum == SIGHUP)
    {
        // Set flag to reload config in the main loop
        reload_config_flag = true;
    }
    else if (signum == SIGTERM || signum == SIGINT)
    {
        // Perform cleanup and exit gracefully
        printf("\nMonitor shutting down...\n");
        destroy_mutex();
        // The server daemon might not be cleaned up, but for this project's scope,
        // exiting the process is sufficient.
        exit(EXIT_SUCCESS);
    }
}

/**
 * @brief Main entry point for the system monitor.
 *
 * Initializes metrics, starts the HTTP server, and enters a loop to
 * collect and update metrics based on a configuration file. The configuration
 * can be reloaded by sending a SIGHUP signal.
 *
 * @param argc Number of command-line arguments.
 * @param argv Array of command-line arguments. Expects an optional path to config file.
 * @return Returns EXIT_SUCCESS on normal termination, or EXIT_FAILURE on error.
 */
int main(int argc, char* argv[])
{
    // If a config file path is provided as an argument, use it.
    if (argc > 1)
    {
        config_path = argv[1];
    }
    printf("Monitor using configuration file: %s\n", config_path);


    // Setup signal handlers for graceful shutdown and config reload.
    struct sigaction sa;
    sa.sa_handler = signal_handler_monitor;
    sigemptyset(&sa.sa_mask);
    sa.sa_flags = SA_RESTART; // Restart syscalls if possible
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

    while (true)
    {
        if (reload_config_flag)
        {
            printf("Monitor: Reloading configuration...\n");
            if (load_config(&config, config_path) == 0)
            {
                printf("Monitor: Config loaded successfully. Update interval: %ds\n", config.update_interval_seconds);
            }
            else
            {
                fprintf(stderr, "Monitor: Failed to load config, using default values.\n");
                // Set safe defaults on failure
                config.update_interval_seconds = 2;
                config.enable_cpu = true;
                config.enable_memory = true;
                config.enable_disk_io = true;
            }
            reload_config_flag = false;
        }

        // Update gauges based on the loaded configuration
        if (config.enable_cpu)
            update_cpu_gauge();
        if (config.enable_memory)
            update_memory_gauge();
        if (config.enable_disk_io)
            update_disk_io_gauges();
        
        // You can add the other metrics here, guarded by their config flags
        // update_context_switches_gauge();
        // update_network_gauges();
        // update_process_count_gauge();

        sleep(config.update_interval_seconds > 0 ? config.update_interval_seconds : 1);
    }

    // This part is technically unreachable, but good practice
    pthread_join(server_thread_id, NULL);
    destroy_mutex();

    return EXIT_SUCCESS;
}