/**
 * @file metric_exposer.h
 * @brief Functions to initialize, update, and expose system metrics via Prometheus.
 */

#ifndef METRIC_EXPOSER_H
#define METRIC_EXPOSER_H

#include "metrics.h"
#include <prom.h>
#include <promhttp.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * @brief Updates the CPU usage gauge metric.
 * @note This function is not thread-safe by itself; call within a mutex lock.
 */
void update_cpu_gauge(void);

/**
 * @brief Updates the memory usage gauge metric.
 * @note This function is not thread-safe by itself; call within a mutex lock.
 */
void update_memory_gauge(void);

/**
 * @brief Updates the context switches gauge metric.
 * @note This function is not thread-safe by itself; call within a mutex lock.
 */
void update_context_switches_gauge(void);

/**
 * @brief Updates the disk I/O gauge metrics (reads and writes).
 * @note This function is not thread-safe by itself; call within a mutex lock.
 */
void update_disk_io_gauges(void);

/**
 * @brief Updates all network-related gauge metrics.
 * @note This function is not thread-safe by itself; call within a mutex lock.
 */
void update_network_gauges(void);

/**
 * @brief Updates the running processes count gauge metric.
 * @note This function is not thread-safe by itself; call within a mutex lock.
 */
void update_process_count_gauge(void);

/**
 * @brief Updates the custom heap fragmentation gauge.
 * @note This function is not thread-safe by itself; call within a mutex lock.
 */
void update_fragmentation_gauge(void); // <--- NUEVO PROTOTIPO AÑADIDO

/**
 * @brief Thread function to expose metrics via an HTTP server.
 *
 * This function starts an HTTP daemon to serve the collected Prometheus metrics.
 *
 * @param arg Thread argument (unused).
 * @return NULL.
 */
void* expose_metrics_thread(void* arg);

/**
 * @brief Initializes all Prometheus metrics and the synchronization mutex.
 *
 * @return EXIT_SUCCESS on success, or EXIT_FAILURE on error.
 */
int initialize_metrics(void);

/**
 * @brief Locks the metrics mutex to ensure thread-safe access.
 */
void lock_metrics_mutex(void);

/**
 * @brief Unlocks the metrics mutex.
 */
void unlock_metrics_mutex(void);

/**
 * @brief Destroys the synchronization mutex.
 */
void destroy_mutex(void);

#endif // METRIC_EXPOSER_H