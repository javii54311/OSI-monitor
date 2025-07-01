#include "metrics.h"
#include <stdbool.h>

double get_memory_usage(void)
{
    FILE* fp;
    char buffer[BUFFER_SIZE];
    unsigned long long total_mem = 0, free_mem = 0, available_mem = 0;
    bool available_found = false;

    fp = fopen("/proc/meminfo", "r");
    if (fp == NULL)
    {
        perror("Error opening /proc/meminfo");
        return METRICS_ERROR_VALUE;
    }

    while (fgets(buffer, sizeof(buffer), fp) != NULL)
    {
        if (sscanf(buffer, "MemTotal: %llu kB", &total_mem) == 1)
        {
            continue;
        }
        // Prefer MemAvailable for a more accurate representation of free memory
        if (sscanf(buffer, "MemAvailable: %llu kB", &available_mem) == 1)
        {
            available_found = true;
            break;
        }
        // Fallback to MemFree if MemAvailable is not present
        if (sscanf(buffer, "MemFree: %llu kB", &free_mem) == 1)
        {
            continue;
        }
    }
    fclose(fp);

    if (total_mem == 0)
    {
        fprintf(stderr, "Error: Could not read total memory from /proc/meminfo\n");
        return METRICS_ERROR_VALUE;
    }

    double used_mem;
    if (available_found)
    {
        used_mem = total_mem - available_mem;
    }
    else
    {
        // Fallback calculation if MemAvailable is not present
        used_mem = total_mem - free_mem;
    }

    return (used_mem / total_mem) * 100.0;
}

double get_cpu_usage(void)
{
    static unsigned long long prev_user = 0, prev_nice = 0, prev_system = 0, prev_idle = 0, prev_iowait = 0,
                              prev_irq = 0, prev_softirq = 0, prev_steal = 0;
    unsigned long long user, nice, system, idle, iowait, irq, softirq, steal;

    FILE* fp = fopen("/proc/stat", "r");
    if (fp == NULL)
    {
        perror("Error opening /proc/stat");
        return METRICS_ERROR_VALUE;
    }

    char buffer[BUFFER_SIZE];
    if (fgets(buffer, sizeof(buffer), fp) == NULL)
    {
        perror("Error reading /proc/stat");
        fclose(fp);
        return METRICS_ERROR_VALUE;
    }
    fclose(fp);

    int ret = sscanf(buffer, "cpu  %llu %llu %llu %llu %llu %llu %llu %llu", &user, &nice, &system, &idle, &iowait,
                     &irq, &softirq, &steal);
    if (ret < CPU_STAT_FIELDS)
    {
        fprintf(stderr, "Error parsing /proc/stat\n");
        return METRICS_ERROR_VALUE;
    }

    unsigned long long prev_idle_total = prev_idle + prev_iowait;
    unsigned long long idle_total = idle + iowait;

    unsigned long long prev_non_idle = prev_user + prev_nice + prev_system + prev_irq + prev_softirq + prev_steal;
    unsigned long long non_idle = user + nice + system + irq + softirq + steal;

    unsigned long long prev_total = prev_idle_total + prev_non_idle;
    unsigned long long total = idle_total + non_idle;

    unsigned long long total_delta = total - prev_total;
    unsigned long long idle_delta = idle_total - prev_idle_total;

    // Update static previous values for the next call
    prev_user = user;
    prev_nice = nice;
    prev_system = system;
    prev_idle = idle;
    prev_iowait = iowait;
    prev_irq = irq;
    prev_softirq = softirq;
    prev_steal = steal;

    if (total_delta == 0)
    {
        // Avoid division by zero, can happen on the first call or if no time has passed.
        return 0.0;
    }

    return ((double)(total_delta - idle_delta) / total_delta) * 100.0;
}

unsigned long long get_context_switches(void)
{
    FILE* fp;
    char buffer[BUFFER_SIZE];
    unsigned long long ctxt = 0;

    fp = fopen("/proc/stat", "r");
    if (fp == NULL)
    {
        perror("Error opening /proc/stat");
        return METRICS_ERROR_ULL; // Return error value
    }

    while (fgets(buffer, sizeof(buffer), fp) != NULL)
    {
        if (sscanf(buffer, "ctxt %llu", &ctxt) == 1)
        {
            fclose(fp);
            return ctxt;
        }
    }

    fclose(fp);
    fprintf(stderr, "Error: Could not find 'ctxt' in /proc/stat\n");
    return METRICS_ERROR_ULL;
}

void get_disk_io(unsigned long long* reads, unsigned long long* writes)
{
    FILE* fp;
    char buffer[BUFFER_SIZE];
    *reads = 0;
    *writes = 0;

    fp = fopen("/proc/diskstats", "r");
    if (fp == NULL)
    {
        perror("Error opening /proc/diskstats");
        return;
    }

    while (fgets(buffer, sizeof(buffer), fp) != NULL)
    {
        char device_name[BUFFER_SIZE];
        unsigned long long read_sectors, write_sectors;
        // Fields: 1-major, 2-minor, 3-dev, 4-reads, 5-merged, 6-sectors_read, ... 8-writes, ... 10-sectors_written
        sscanf(buffer, "%*d %*d %s %*u %*u %llu %*u %*u %*u %llu", device_name, &read_sectors, &write_sectors);

        *reads += read_sectors;
        *writes += write_sectors;
    }

    fclose(fp);
}

void get_network_stats(unsigned long long* rx_bytes, unsigned long long* tx_bytes, unsigned long long* rx_errors,
                       unsigned long long* tx_errors, unsigned long long* collisions)
{
    FILE* fp;
    char buffer[BUFFER_SIZE];
    *rx_bytes = 0;
    *tx_bytes = 0;
    *rx_errors = 0;
    *tx_errors = 0;
    *collisions = 0;

    fp = fopen("/proc/net/dev", "r");
    if (fp == NULL)
    {
        perror("Error opening /proc/net/dev");
        return;
    }

    // Skip the first two header lines
    fgets(buffer, sizeof(buffer), fp);
    fgets(buffer, sizeof(buffer), fp);

    while (fgets(buffer, sizeof(buffer), fp) != NULL)
    {
        char interface_name[BUFFER_SIZE];
        unsigned long long r_bytes, t_bytes, r_err, t_err, colls;

        // Simplified parsing for required fields
        sscanf(buffer, "%[^:]: %llu %*u %llu %*u %*u %*u %*u %*u %llu %*u %llu %*u %*u %llu", interface_name, &r_bytes,
               &r_err, &t_bytes, &t_err, &colls);

        *rx_bytes += r_bytes;
        *tx_bytes += t_bytes;
        *rx_errors += r_err;
        *tx_errors += t_err;
        *collisions += colls;
    }

    fclose(fp);
}

int get_running_processes(void)
{
    FILE* fp;
    char buffer[BUFFER_SIZE];
    int running_procs = METRICS_ERROR_INT;

    fp = fopen("/proc/stat", "r");
    if (fp == NULL)
    {
        perror("Error opening /proc/stat");
        return METRICS_ERROR_INT;
    }

    while (fgets(buffer, sizeof(buffer), fp) != NULL)
    {
        if (sscanf(buffer, "procs_running %d", &running_procs) == 1)
        {
            fclose(fp);
            return running_procs;
        }
    }

    fclose(fp);
    fprintf(stderr, "Error: Could not find 'procs_running' in /proc/stat\n");
    return METRICS_ERROR_INT;
}
