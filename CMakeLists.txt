# CMake minimum version requirement
cmake_minimum_required(VERSION 3.14)

# Project name and language
project(SystemMonitor C)

# Set the C standard to C11
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# --- Submodule Dependencies ---
set(TEST OFF CACHE BOOL "Disable tests for prometheus-client-c")

# Add libprom
add_subdirectory(external/prometheus-client-c/prom)

# Apply a patch to promhttp.c to fix a function signature incompatibility
# with modern libmicrohttpd versions. This replaces "int promhttp_handler"
# with "enum MHD_Result promhttp_handler".
execute_process(
    COMMAND sed -i "s/int promhttp_handler/enum MHD_Result promhttp_handler/" src/promhttp.c
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/external/prometheus-client-c/promhttp
    RESULT_VARIABLE sed_result
)

if(sed_result)
    message(FATAL_ERROR "Failed to patch promhttp.c: ${sed_result}")
endif()

# Add libpromhttp after patching it
add_subdirectory(external/prometheus-client-c/promhttp)


# --- Our Program ---

# Add our project's include directory so the compiler can find our headers.
include_directories(include)

# Define our main executable, named `monitor`.
add_executable(monitor
    src/main.c
    src/metric_exposer.c
    src/metrics.c
)

# Apply strict compiler flags ONLY to our own executable target.
target_compile_options(monitor PRIVATE -Wall -Wextra -Wpedantic -Werror)

# Link our `monitor` executable against the libraries it needs.
target_link_libraries(monitor PRIVATE
    prom
    promhttp
    pthread
    microhttpd
)

# Optional: Define where to install the executable.
install(TARGETS monitor DESTINATION bin)