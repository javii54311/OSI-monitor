# CMakeLists.txt del proyecto OSI-monitor

cmake_minimum_required(VERSION 3.14)
project(SystemMonitor C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# --- CORRECTION: Find dependencies within this component's scope ---
# A component should be responsible for finding its own dependencies.
find_package(Threads REQUIRED)

# The parent project (RefugeShell) is expected to provide include paths
# for dependencies it manages, like cJSON.
# Our own include path is local.
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
# for finding and providing the library targets for prom, promhttp, and cjson.
# Threads::Threads is now found within this scope.
target_link_libraries(monitor PRIVATE
    prom
    promhttp
    Threads::Threads # This will now be found
    microhttpd
    cjson         
)

# Optional: Define where to install the executable.
install(TARGETS monitor DESTINATION bin)