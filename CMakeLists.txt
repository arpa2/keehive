cmake_minimum_required (VERSION 3.7)
project (keehive C)
set (keehive_VERSION_MAJOR 0)
set (keehive_VERSION_MINOR 1)

set (CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_SOURCE_DIR}/cmake)

find_package (Quick-DER 1.2 REQUIRED)
find_package (cmocka REQUIRED)
find_package (softhsm2 REQUIRED)

configure_file (
        "lib/version.h.in"
        "${PROJECT_BINARY_DIR}/version.h"
)

include_directories ("${PROJECT_BINARY_DIR}")
include_directories ("${Quick-DER_INCLUDE_DIRS}")
include_directories ("${LIBCMOCKA_INCLUDE_DIRS}")

add_subdirectory (lib)

enable_testing()

add_subdirectory (test)


