# CMakeLists.txt del proyecto OSI-monitor

cmake_minimum_required(VERSION 3.14)
project(SystemMonitor C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Ensure the parent project provides the include directories.
# In our case, the parent RefugeShell's CMakeLists.txt already handles this.
include_directories(include)

# Add all necessary source files for the monitor executable.
add_executable(monitor
    src/main.c
    src/metric_exposer.c
    src/metrics.c
    src/config.c 
)

# Apply strict compiler flags.
target_compile_options(monitor PRIVATE -Wall -Wextra -Wpedantic -Werror)

# Declare the dependencies. The parent project (RefugeShell) is responsible
# for finding and providing these libraries (prom, promhttp, cjson, etc.).
target_link_libraries(monitor PRIVATE
    prom
    promhttp
    Threads::Threads
    microhttpd
    cjson         
)

# Optional: Define where to install the executable.
# This is generally good practice but not strictly required for this TP.
install(TARGETS monitor DESTINATION bin)