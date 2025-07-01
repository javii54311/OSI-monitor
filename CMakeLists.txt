cmake_minimum_required(VERSION 3.14)
project(SystemMonitor C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(monitor
    src/main.c
    src/metric_exposer.c
    src/metrics.c
)

target_compile_options(monitor PRIVATE -Wall -Wextra -Wpedantic -Werror)

# Solo declaramos las dependencias. El proyecto padre debe proveerlas.
target_link_libraries(monitor PRIVATE
    prom
    promhttp
    Threads::Threads
    microhttpd
)