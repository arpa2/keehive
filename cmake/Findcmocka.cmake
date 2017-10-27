# - Try to find Libcmocka
# Once done this will define
#  LIBCMOCKA_FOUND - System has Libcmocka
#  LIBCMOCKA_INCLUDE_DIRS - The Libcmocka include directories
#  LIBCMOCKA_LIBRARIES - The libraries needed to use Libcmocka
#  LIBCMOCKA_DEFINITIONS - Compiler switches required for using Libcmocka

find_package(PkgConfig)
pkg_check_modules(PC_LIBCMOCKA QUIET cmocka)
set(LIBCMOCKA_DEFINITIONS ${PC_LIBCMOCKA_CFLAGS_OTHER})

find_path(LIBCMOCKA_INCLUDE_DIR cmocka.h
        HINTS ${PC_LIBCMOCKA_INCLUDEDIR} ${PC_LIBCMOCKA_INCLUDE_DIRS}
        PATH_SUFFIXES libcmocka )

find_library(LIBCMOCKA_LIBRARY NAMES cmocka libcmocka
        HINTS ${PC_LIBCMOCKA_LIBDIR} ${PC_LIBCMOCKA_LIBRARY_DIRS} )

include(FindPackageHandleStandardArgs)
# handle the QUIETLY and REQUIRED arguments and set LIBCMOCKA_FOUND to TRUE
# if all listed variables are TRUE
find_package_handle_standard_args(Libcmocka  DEFAULT_MSG
        LIBCMOCKA_LIBRARY LIBCMOCKA_INCLUDE_DIR)

mark_as_advanced(LIBCMOCKA_INCLUDE_DIR LIBCMOCKA_LIBRARY )

set(LIBCMOCKA_LIBRARIES ${LIBCMOCKA_LIBRARY} )
set(LIBCMOCKA_INCLUDE_DIRS ${LIBCMOCKA_INCLUDE_DIR} )