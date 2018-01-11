cmake_minimum_required (VERSION 3.5)
project (keehive C)
set (keehive_VERSION_MAJOR 0)
set (keehive_VERSION_MINOR 1)

set (CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_SOURCE_DIR}/cmake)

find_package (Quick-DER REQUIRED)
find_package (cmocka REQUIRED)



configure_file (
        "automatic/version.h.in"
        "${PROJECT_BINARY_DIR}/version.h"
)

include_directories ("${PROJECT_BINARY_DIR}")
include_directories ("${Quick-DER_INCLUDE_DIRS}")
include_directories ("${LIBCMOCKA_INCLUDE_DIRS}")

add_subdirectory (automatic)

enable_testing()

add_subdirectory (test)


