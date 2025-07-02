#ifndef CONFIG_H
#define CONFIG_H

#include <stdbool.h>

// Structure to hold the monitor's configuration
typedef struct {
    int update_interval_seconds;
    bool enable_cpu;
    bool enable_memory;
    bool enable_disk_io;
} monitor_config_t;

/**
 * @brief Loads the configuration from the specified JSON file.
 * 
 * @param config Pointer to the config structure to be filled.
 * @param filepath Path to the config.json file.
 * @return int 0 on success, -1 on failure.
 */
int load_config(monitor_config_t *config, const char *filepath);

#endif // CONFIG_H