#include "metric_exposer.h"
#include "constants.h"
#include <stdbool.h>

/** Mutex for thread synchronization */
static pthread_mutex_t metrics_mutex;

/** Prometheus gauge for CPU usage percentage */
static prom_gauge_t* cpu_usage_gauge;
/** Prometheus gauge for memory usage percentage */
static prom_gauge_t* memory_usage_gauge;
/** Prometheus gauge for total disk sectors read */
static prom_gauge_t* disk_reads_gauge;
/** Prometheus gauge for total disk sectors written */
static prom_gauge_t* disk_writes_gauge;
/** Prometheus gauge for total received network bytes */
static prom_gauge_t* network_rx_bytes_gauge;
/** Prometheus gauge for total transmitted network bytes */
static prom_gauge_t* network_tx_bytes_gauge;
/** Prometheus gauge for network receive errors */
static prom_gauge_t* network_rx_errors_gauge;
/** Prometheus gauge for network transmit errors */
static prom_gauge_t* network_tx_errors_gauge;
/** Prometheus gauge for network collisions */
static prom_gauge_t* network_collisions_gauge;
/** Prometheus gauge for the number of running processes */
static prom_gauge_t* process_count_gauge;
/** Prometheus gauge for the total number of context switches */
static prom_gauge_t* context_switches_gauge;

void update_cpu_gauge(void)
{
    double usage = get_cpu_usage();
    if (usage >= 0.0)
    {
        pthread_mutex_lock(&metrics_mutex);
        prom_gauge_set(cpu_usage_gauge, usage, NULL);
        pthread_mutex_unlock(&metrics_mutex);
    }
    else
    {
        fprintf(stderr, "Failed to get CPU usage\n");
    }
}

void update_memory_gauge(void)
{
    double usage = get_memory_usage();
    if (usage >= 0.0)
    {
        pthread_mutex_lock(&metrics_mutex);
        prom_gauge_set(memory_usage_gauge, usage, NULL);
        pthread_mutex_unlock(&metrics_mutex);
    }
    else
    {
        fprintf(stderr, "Failed to get memory usage\n");
    }
}

void update_context_switches_gauge(void)
{
    unsigned long long ctxt = get_context_switches();
    if (ctxt != METRICS_ERROR_ULL)
    {
        pthread_mutex_lock(&metrics_mutex);
        prom_gauge_set(context_switches_gauge, (double)ctxt, NULL);
        pthread_mutex_unlock(&metrics_mutex);
    }
    else
    {
        fprintf(stderr, "Failed to get context switch count\n");
    }
}

void update_disk_io_gauges(void)
{
    unsigned long long reads = 0, writes = 0;
    get_disk_io(&reads, &writes);

    pthread_mutex_lock(&metrics_mutex);
    prom_gauge_set(disk_reads_gauge, (double)reads, NULL);
    prom_gauge_set(disk_writes_gauge, (double)writes, NULL);
    pthread_mutex_unlock(&metrics_mutex);
}

void update_network_gauges(void)
{
    unsigned long long rx_bytes = 0, tx_bytes = 0, rx_errors = 0, tx_errors = 0, collisions = 0;
    get_network_stats(&rx_bytes, &tx_bytes, &rx_errors, &tx_errors, &collisions);

    pthread_mutex_lock(&metrics_mutex);
    prom_gauge_set(network_rx_bytes_gauge, (double)rx_bytes, NULL);
    prom_gauge_set(network_tx_bytes_gauge, (double)tx_bytes, NULL);
    prom_gauge_set(network_rx_errors_gauge, (double)rx_errors, NULL);
    prom_gauge_set(network_tx_errors_gauge, (double)tx_errors, NULL);
    prom_gauge_set(network_collisions_gauge, (double)collisions, NULL);
    pthread_mutex_unlock(&metrics_mutex);
}

void update_process_count_gauge(void)
{
    int process_count = get_running_processes();
    if (process_count != METRICS_ERROR_INT)
    {
        pthread_mutex_lock(&metrics_mutex);
        prom_gauge_set(process_count_gauge, (double)process_count, NULL);
        pthread_mutex_unlock(&metrics_mutex);
    }
    else
    {
        fprintf(stderr, "Failed to get process count\n");
    }
}

void* expose_metrics_thread(void* arg)
{
    (void)arg; // Unused argument

    promhttp_set_active_collector_registry(NULL);

    struct MHD_Daemon* daemon = promhttp_start_daemon(MHD_USE_SELECT_INTERNALLY, METRICS_PORT, NULL, NULL);
    if (daemon == NULL)
    {
        fprintf(stderr, "Error: Could not start HTTP server on port %d\n", METRICS_PORT);
        return NULL;
    }

    printf("Metrics server started on http://localhost:%d/metrics\n", METRICS_PORT);

    // This thread's only job is to keep the server alive.
    // The main thread will handle metric updates.
    while (true)
    {
        sleep(UPDATE_INTERVAL_SECONDS);
    }

    // This part is unreachable in the current design
    MHD_stop_daemon(daemon);
    return NULL;
}

int initialize_metrics(void)
{
    if (pthread_mutex_init(&metrics_mutex, NULL) != 0)
    {
        fprintf(stderr, "Error: Mutex initialization failed\n");
        return EXIT_FAILURE;
    }

    if (prom_collector_registry_default_init() != 0)
    {
        fprintf(stderr, "Error: Could not initialize Prometheus registry\n");
        return EXIT_FAILURE;
    }

    // Create all gauge metrics
    cpu_usage_gauge = prom_gauge_new("cpu_usage_percentage", "Current CPU usage percentage.", NO_LABELS, NULL);
    memory_usage_gauge = prom_gauge_new("memory_usage_percentage", "Current memory usage percentage.", NO_LABELS, NULL);
    disk_reads_gauge = prom_gauge_new("disk_io_reads_total", "Total number of sectors read.", NO_LABELS, NULL);
    disk_writes_gauge = prom_gauge_new("disk_io_writes_total", "Total number of sectors written.", NO_LABELS, NULL);
    network_rx_bytes_gauge =
        prom_gauge_new("network_receive_bytes_total", "Total bytes received over the network.", NO_LABELS, NULL);
    network_tx_bytes_gauge =
        prom_gauge_new("network_transmit_bytes_total", "Total bytes transmitted over the network.", NO_LABELS, NULL);
    network_rx_errors_gauge =
        prom_gauge_new("network_receive_errors_total", "Total network receive errors.", NO_LABELS, NULL);
    network_tx_errors_gauge =
        prom_gauge_new("network_transmit_errors_total", "Total network transmit errors.", NO_LABELS, NULL);
    network_collisions_gauge = prom_gauge_new("network_collisions_total", "Total network collisions.", NO_LABELS, NULL);
    process_count_gauge =
        prom_gauge_new("running_processes", "Number of currently running processes.", NO_LABELS, NULL);
    context_switches_gauge =
        prom_gauge_new("context_switches_total", "Total number of context switches.", NO_LABELS, NULL);

    // Register all metrics
    prom_collector_registry_must_register_metric(cpu_usage_gauge);
    prom_collector_registry_must_register_metric(memory_usage_gauge);
    prom_collector_registry_must_register_metric(disk_reads_gauge);
    prom_collector_registry_must_register_metric(disk_writes_gauge);
    prom_collector_registry_must_register_metric(network_rx_bytes_gauge);
    prom_collector_registry_must_register_metric(network_tx_bytes_gauge);
    prom_collector_registry_must_register_metric(network_rx_errors_gauge);
    prom_collector_registry_must_register_metric(network_tx_errors_gauge);
    prom_collector_registry_must_register_metric(network_collisions_gauge);
    prom_collector_registry_must_register_metric(process_count_gauge);
    prom_collector_registry_must_register_metric(context_switches_gauge);

    return EXIT_SUCCESS;
}

void destroy_mutex(void)
{
    pthread_mutex_destroy(&metrics_mutex);
}
