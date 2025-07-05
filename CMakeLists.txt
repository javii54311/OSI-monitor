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
# This monitor depends on the prometheus-client-c submodule. To find it
# correctly, we use ${CMAKE_SOURCE_DIR} which points to the top-level project root.
set(TEST OFF CACHE BOOL "Disable tests for prometheus-client-c")
add_subdirectory(${CMAKE_SOURCE_DIR}/external/prometheus-client-c/prom ${CMAKE_BINARY_DIR}/prom-build)

# Patch the promhttp source file to ensure handler signature compatibility.
execute_process(
    COMMAND sed -i "s/int promhttp_handler/enum MHD_Result promhttp_handler/" src/promhttp.c
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/external/prometheus-client-c/promhttp
    RESULT_VARIABLE sed_result
)
if(sed_result)
    message(FATAL_ERROR "Failed to patch promhttp.c: ${sed_result}")
endif()
add_subdirectory(${CMAKE_SOURCE_DIR}/external/prometheus-client-c/promhttp ${CMAKE_BINARY_DIR}/promhttp-build)


# ====================================================================
# Main Application Target: The Monitor
# ====================================================================
add_executable(monitor
    src/main.c
    src/metric_exposer.c
    src/metrics.c
    src/config.c
)

# Explicitly tell the 'monitor' target where to find the cJSON headers.
# We use ${CMAKE_SOURCE_DIR} to get the path from the top-level project root,
# which makes this path valid no matter where this CMakeLists.txt is included from.
target_include_directories(monitor PRIVATE ${CMAKE_SOURCE_DIR}/external)

# The monitor executable links against its direct dependencies.
target_link_libraries(monitor PRIVATE prom promhttp cjson)

# Link against the real-time library, which is necessary on some systems.
find_library(RT_LIBRARY rt)
if(RT_LIBRARY)
    target_link_libraries(monitor PRIVATE ${RT_LIBRARY})
endif()

# Link against the Threads library.
find_package(Threads REQUIRED)
target_link_libraries(monitor PRIVATE Threads::Threads)