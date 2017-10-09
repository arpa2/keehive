cmake_minimum_required (VERSION 3.7)
project (keehive C)

# The version number.
set (keehive_VERSION_MAJOR 0)
set (keehive_VERSION_MINOR 1)

include (${CMAKE_ROOT}/modules/Quick-DERConfig.cmake)

configure_file (
        "${PROJECT_SOURCE_DIR}/version.h.in"
        "${PROJECT_BINARY_DIR}/version.h"
)

include_directories("${PROJECT_BINARY_DIR}")
include_directories("${Quick-DER_INCLUDE_DIRS}")

add_library(keehive RemotePKCS11.h version.h)

add_executable (test1 test.c)
target_link_libraries (test1  ${EXTRA_LIBS} ${Quick-DER_LIBRARIES})
