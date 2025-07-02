#include "config.h"
#include <stdio.h>
#include <stdlib.h>
#include <cjson/cJSON.h>

int load_config(monitor_config_t *config, const char *filepath) {
    FILE *fp = fopen(filepath, "r");
    if (!fp) {
        perror("config: Could not open config file");
        return -1;
    }

    char buffer[1024];
    fread(buffer, 1, sizeof(buffer), fp);
    fclose(fp);

    cJSON *json = cJSON_Parse(buffer);
    if (!json) {
        fprintf(stderr, "config: Error parsing JSON: %s\n", cJSON_GetErrorPtr());
        return -1;
    }

    const cJSON *interval = cJSON_GetObjectItemCaseSensitive(json, "update_interval_seconds");
    const cJSON *metrics = cJSON_GetObjectItemCaseSensitive(json, "metrics_enabled");

    if (cJSON_IsNumber(interval)) {
        config->update_interval_seconds = interval->valueint;
    } else {
        config->update_interval_seconds = 2; // Default
    }

    if (cJSON_IsObject(metrics)) {
        config->enable_cpu = cJSON_IsTrue(cJSON_GetObjectItemCaseSensitive(metrics, "cpu"));
        config->enable_memory = cJSON_IsTrue(cJSON_GetObjectItemCaseSensitive(metrics, "memory"));
        config->enable_disk_io = cJSON_IsTrue(cJSON_GetObjectItemCaseSensitive(metrics, "disk_io"));
    }

    cJSON_Delete(json);
    return 0;
}