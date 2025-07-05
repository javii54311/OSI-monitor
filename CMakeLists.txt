# ====================================================================
# Project Definition: Refuge Monitor
# ====================================================================
cmake_minimum_required(VERSION 3.14)
project(monitor C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

include_directories(include)

# ====================================================================
# Dependencies
# ====================================================================
# This monitor depends on the prometheus-client-c submodule, which is
# located as a sibling directory in the main project's 'external' folder.
# We use an absolute path from the top-level project source directory
# (${PROJECT_SOURCE_DIR}) to ensure it can be found correctly when this
# CMakeLists.txt is included by the parent project.

set(TEST OFF CACHE BOOL "Disable tests for prometheus-client-c")
add_subdirectory(${PROJECT_SOURCE_DIR}/external/prometheus-client-c/prom)

# Patch the promhttp source file to ensure handler signature compatibility.
# The working directory is set to an absolute path to reliably locate the file.
execute_process(
    COMMAND sed -i "s/int promhttp_handler/enum MHD_Result promhttp_handler/" src/promhttp.c
    WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}/external/prometheus-client-c/promhttp
    RESULT_VARIABLE sed_result
)
if(sed_result)
    message(FATAL_ERROR "Failed to patch promhttp.c: ${sed_result}")
endif()
add_subdirectory(${PROJECT_SOURCE_DIR}/external/prometheus-client-c/promhttp)


# ====================================================================
# Main Application Target: The Monitor
# ====================================================================
add_executable(monitor
    src/main.c
    src/metric_exposer.c
    src/metrics.c
    src/config.c
)

# The monitor executable links against its direct dependencies.
# The cJSON dependency is expected to be handled by the parent project.
target_link_libraries(monitor PRIVATE prom promhttp cjson)

# Link against the real-time library, which is necessary on some systems.
find_library(RT_LIBRARY rt)
if(RT_LIBRARY)
    target_link_libraries(monitor PRIVATE ${RT_LIBRARY})
endif()

# Link against the Threads library.
find_package(Threads REQUIRED)
target_link_libraries(monitor PRIVATE Threads::Threads)