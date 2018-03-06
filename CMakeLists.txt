cmake_minimum_required (VERSION 3.5)
project(keehive VERSION 0.1 LANGUAGES C CXX DESCRIPTION "Remote PKCS#11 Client Library and Hosting Daemon")

set (keehive_VERSION_MAJOR 0)
set (keehive_VERSION_MINOR 1)

set (CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_SOURCE_DIR}/cmake)

set (CMAKE_CXX_STANDARD 11)

include(GNUInstallDirs)

find_package (Quick-DER REQUIRED)
find_package (softhsm2 REQUIRED)


configure_file (
        "src/static/settings.h.in"
        "${PROJECT_BINARY_DIR}/settings.h"
)

option(ENABLE_TESTING "build and run test suite" OFF)


if(${ENABLE_TESTING})
    find_package (cmocka REQUIRED)
    find_package (cppunit REQUIRED)

    enable_testing()

    add_subdirectory (src/generated/test)
    add_subdirectory (src/static/test)

endif()

include_directories ("${PROJECT_BINARY_DIR}")
include_directories ("${Quick-DER_INCLUDE_DIRS}")
include_directories ("${LIBCMOCKA_INCLUDE_DIRS}")

add_subdirectory (src)

