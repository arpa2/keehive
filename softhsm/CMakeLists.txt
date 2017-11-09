set(LIB_H
    wrap.h
)

set(LIB_SRC
    wrap.c
)

set(WRAP_LINK_LIRARIES
        ${LIBCMOCKA_LIBRARIES}
        ${Quick-DER_LIBRARIES}
        ${LIBSOFTHSM2_LIBRARIES}
        ${OPENSSL_LIBRARIES}
        ${SQLITE3_LIBRARIES}
        )


include_directories ("${PROJECT_BINARY_DIR}")
include_directories (../lib)

add_executable(wrap
        ${LIB_H}
        ${LIB_SRC}
)

target_link_libraries(wrap ${WRAP_LINK_LIRARIES})