# - Try to find Libsofthsm2
# Once done this will define
#  LIBSOFTHSM2_FOUND - System has Libsofthsm2
#  LIBSOFTHSM2_LIBRARIES - The libraries needed to use Libsofthsm2
#  LIBSOFTHSM2_DEFINITIONS - Compiler switches required for using Libsofthsm2

find_package(PkgConfig)
pkg_check_modules(PC_LIBSOFTHSM2 QUIET softhsm2)
set(LIBSOFTHSM2_DEFINITIONS ${PC_LIBSOFTHSM2_CFLAGS_OTHER})

find_library(LIBSOFTHSM2_LIBRARY NAMES softhsm2 libsofthsm2
        HINTS ${PC_LIBSOFTHSM2_LIBDIR} ${PC_LIBSOFTHSM2_LIBRARY_DIRS}
        PATH_SUFFIXES softhsm)

include(FindPackageHandleStandardArgs)
# handle the QUIETLY and REQUIRED arguments and set LIBSOFTHSM2_FOUND to TRUE
# if all listed variables are TRUE
find_package_handle_standard_args(Libsofthsm2 DEFAULT_MSG LIBSOFTHSM2_LIBRARY )

mark_as_advanced( LIBSOFTHSM2_LIBRARY )

set(LIBSOFTHSM2_LIBRARIES ${LIBSOFTHSM2_LIBRARY} )
