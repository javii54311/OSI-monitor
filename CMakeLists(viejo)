# ====================================================================
# Project Definition: SystemMonitor (Component)
# ====================================================================
cmake_minimum_required(VERSION 3.14)
project(SystemMonitor C)

# ====================================================================
# Global Configuration
# ====================================================================
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# ====================================================================
# Dependencies (Internal to this component)
# ====================================================================
set(TEST OFF CACHE BOOL "Disable tests for prometheus-client-c")

add_subdirectory(external/prometheus-client-c/prom)

execute_process(
    COMMAND sed -i "s/int promhttp_handler/enum MHD_Result promhttp_handler/" src/promhttp.c
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/external/prometheus-client-c/promhttp
    RESULT_VARIABLE sed_result
)
if(sed_result)
    message(FATAL_ERROR "Failed to patch promhttp.c: ${sed_result}")
endif()

add_subdirectory(external/prometheus-client-c/promhttp)

# ====================================================================
# Main Executable Target: The Monitor
# ====================================================================

include_directories(include)

add_executable(monitor
    src/main.c
    src/metric_exposer.c
    src/metrics.c
)

target_compile_options(monitor PRIVATE -Wall -Wextra -Wpedantic -Werror)

# ====================================================================
# External Dependencies
# ====================================================================
find_package(Threads REQUIRED)

# Link our 'monitor' executable against the required libraries
target_link_libraries(monitor PRIVATE
    prom
    promhttp
    Threads::Threads  # Ahora este target será encontrado
    microhttpd
)

install(TARGETS monitor DESTINATION bin)