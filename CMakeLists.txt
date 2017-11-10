cmake_minimum_required (VERSION 3.5)
project (keehive C)
set (keehive_VERSION_MAJOR 0)
set (keehive_VERSION_MINOR 1)

set (CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_SOURCE_DIR}/cmake)

find_package (Quick-DER REQUIRED)
find_package (cmocka REQUIRED)



configure_file (
        "lib/version.h.in"
        "${PROJECT_BINARY_DIR}/version.h"
)

include_directories ("${PROJECT_BINARY_DIR}")
include_directories ("${Quick-DER_INCLUDE_DIRS}")
include_directories ("${LIBCMOCKA_INCLUDE_DIRS}")

add_subdirectory (lib)

option (BUILD_WRAP "Build sfothsm2 wrap" ON)

if (BUILD_WRAP)
    find_package (softhsm2 REQUIRED)
    find_package (OpenSSL REQUIRED)
    find_package (SQLite3 REQUIRED)
    add_subdirectory (softhsm)
endif()

enable_testing()

add_subdirectory (test)


