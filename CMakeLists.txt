cmake_minimum_required (VERSION 3.5)
project(keehive VERSION 0.1 LANGUAGES C CXX DESCRIPTION "Remote PKCS#11 Client Library and Hosting Daemon")

set (keehive_VERSION_MAJOR 0)
set (keehive_VERSION_MINOR 1)

set (CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_SOURCE_DIR}/cmake)

find_package (Quick-DER REQUIRED)
find_package (cmocka REQUIRED)
find_package (softhsm2 REQUIRED)

include(GNUInstallDirs)

configure_file (
        "src/static/settings.h.in"
        "${PROJECT_BINARY_DIR}/settings.h"
)

include_directories ("${PROJECT_BINARY_DIR}")
include_directories ("${Quick-DER_INCLUDE_DIRS}")
include_directories ("${LIBCMOCKA_INCLUDE_DIRS}")

add_subdirectory (src)

