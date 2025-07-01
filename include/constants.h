#ifndef CONSTANTS_H
#define CONSTANTS_H

/**
 * @file constants.h
 * @brief Defines global constants for the system monitor.
 */

/**
 * @brief The port on which the Prometheus metrics server will be exposed.
 */
#define METRICS_PORT 8000

/**
 * @brief The interval in seconds between each metric collection and update.
 */
#define UPDATE_INTERVAL_SECONDS 1

/**
 * @brief Constant to indicate that no labels are being used for a metric.
 */
#define NO_LABELS 0

#endif // CONSTANTS_H
