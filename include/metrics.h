/**
 * @file metrics.h
 * @brief Functions to retrieve system statistics from the /proc filesystem.
 */

#ifndef METRICS_H
#define METRICS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * @brief Default buffer size for reading files.
 */
#define BUFFER_SIZE 256

/**
 * @brief Number of fields expected when parsing CPU data from /proc/stat.
 */
#define CPU_STAT_FIELDS 8

/**
 * @brief Error return value for functions returning a double.
 */
#define METRICS_ERROR_VALUE -1.0

/**
 * @brief Error return value for functions returning an unsigned long long.
 */
#define METRICS_ERROR_ULL -1ULL

/**
 * @brief Error return value for functions returning an int.
 */
#define METRICS_ERROR_INT -1

/**
 * @brief Retrieves the current memory usage percentage from /proc/meminfo.
 *
 * This function reads the total and available memory from /proc/meminfo
 * and calculates the usage percentage.
 *
 * @return Memory usage as a percentage (0.0 to 100.0), or METRICS_ERROR_VALUE on error.
 */
double get_memory_usage(void);

/**
 * @brief Retrieves the current CPU usage percentage from /proc/stat.
 *
 * This function reads CPU time counters from /proc/stat over an interval
 * to calculate the CPU usage percentage.
 *
 * @return CPU usage as a percentage (0.0 to 100.0), or METRICS_ERROR_VALUE on error.
 */
double get_cpu_usage(void);

/**
 * @brief Retrieves the total number of context switches from /proc/stat.
 *
 * This function reads the 'ctxt' value, which indicates how many times the
 * system has switched from one running process to another.
 *
 * @return The total number of context switches, or METRICS_ERROR_ULL on error.
 */
unsigned long long get_context_switches(void);

/**
 * @brief Retrieves disk I/O statistics from /proc/diskstats.
 *
 * This function sums the total sectors read and written across all block devices.
 *
 * @param[out] reads Pointer to store the total sectors read.
 * @param[out] writes Pointer to store the total sectors written.
 */
void get_disk_io(unsigned long long* reads, unsigned long long* writes);

/**
 * @brief Retrieves network statistics from /proc/net/dev.
 *
 * This function accumulates bytes received/transmitted and errors/collisions
 * across all network interfaces.
 *
 * @param[out] rx_bytes Pointer to store total received bytes.
 * @param[out] tx_bytes Pointer to store total transmitted bytes.
 * @param[out] rx_errors Pointer to store total receive errors.
 * @param[out] tx_errors Pointer to store total transmit errors.
 * @param[out] collisions Pointer to store total collisions.
 */
void get_network_stats(unsigned long long* rx_bytes, unsigned long long* tx_bytes, unsigned long long* rx_errors,
                       unsigned long long* tx_errors, unsigned long long* collisions);

/**
 * @brief Retrieves the number of running processes from /proc/stat.
 *
 * This function reads the 'procs_running' value from /proc/stat.
 *
 * @return The number of running processes, or METRICS_ERROR_INT on error.
 */
int get_running_processes(void);

#endif // METRICS_H
