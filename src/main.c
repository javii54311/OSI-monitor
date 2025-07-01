/**
 * @file main.c
 * @brief Entry point for the system monitor.
 *
 * Initializes and manages threads for metric collection and exposure.
 */

#include "constants.h"
#include "metric_exposer.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * @brief Main function of the application.
 *
 * This function initializes the metrics and the HTTP server in a separate thread.
 * It then enters an infinite loop to periodically update system metrics.
 *
 * @param argc Number of command-line arguments (unused).
 * @param argv Array of command-line arguments (unused).
 * @return Returns EXIT_SUCCESS on normal termination, or EXIT_FAILURE on error.
 */
int main(int argc, char* argv[])
{
    // Ignore unused arguments to prevent compiler warnings.
    (void)argc;
    (void)argv;

    if (initialize_metrics() != EXIT_SUCCESS)
    {
        fprintf(stderr, "Failed to initialize metrics. Aborting.\n");
        return EXIT_FAILURE;
    }

    pthread_t server_thread_id;
    if (pthread_create(&server_thread_id, NULL, expose_metrics_thread, NULL) != 0)
    {
        fprintf(stderr, "Error: Could not create HTTP server thread.\n");
        destroy_mutex();
        return EXIT_FAILURE;
    }

    // Main loop to update metrics periodically.
    while (true)
    {
        update_cpu_gauge();
        update_memory_gauge();
        update_context_switches_gauge();
        update_disk_io_gauges();
        update_network_gauges();
        update_process_count_gauge();
        sleep(UPDATE_INTERVAL_SECONDS);
    }

    // This section is unreachable in the current design, but it's good practice.
    pthread_join(server_thread_id, NULL);
    destroy_mutex();

    return EXIT_SUCCESS;
}
