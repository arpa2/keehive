# - Try to find Libsofthsm2
# Once done this will define
#  LIBSOFTHSM2_FOUND - System has Libsofthsm2
#  LIBSOFTHSM2_INCLUDE_DIRS - The Libsofthsm2 include directories
#  LIBSOFTHSM2_LIBRARIES - The libraries needed to use Libsofthsm2
#  LIBSOFTHSM2_DEFINITIONS - Compiler switches required for using Libsofthsm2

find_package(PkgConfig)
pkg_check_modules(PC_LIBSOFTHSM2 QUIET softhsm2)
set(LIBSOFTHSM2_DEFINITIONS ${PC_LIBSOFTHSM2_CFLAGS_OTHER})

find_path(LIBSOFTHSM2_INCLUDE_DIR softhsm2.h
        HINTS ${PC_LIBSOFTHSM2_INCLUDEDIR} ${PC_LIBSOFTHSM2_INCLUDE_DIRS}
        PATH_SUFFIXES libsofthsm2 )

find_library(LIBSOFTHSM2_LIBRARY NAMES softhsm2 libsofthsm2
        HINTS ${PC_LIBSOFTHSM2_LIBDIR} ${PC_LIBSOFTHSM2_LIBRARY_DIRS} )

include(FindPackageHandleStandardArgs)
# handle the QUIETLY and REQUIRED arguments and set LIBSOFTHSM2_FOUND to TRUE
# if all listed variables are TRUE
find_package_handle_standard_args(Libsofthsm2  DEFAULT_MSG
        LIBSOFTHSM2_LIBRARY LIBSOFTHSM2_INCLUDE_DIR)

mark_as_advanced(LIBSOFTHSM2_INCLUDE_DIR LIBSOFTHSM2_LIBRARY )

set(LIBSOFTHSM2_LIBRARIES ${LIBSOFTHSM2_LIBRARY} )
set(LIBSOFTHSM2_INCLUDE_DIRS ${LIBSOFTHSM2_INCLUDE_DIR} )