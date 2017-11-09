
include_directories (../lib)
add_executable(keehive.test test_keehive.c)
add_dependencies(keehive.test keehive.test)

set(KEEHIVE_LINK_LIRARIES
        ${LIBCMOCKA_LIBRARIES}
        ${Quick-DER_LIBRARIES}
        ${LIBSOFTHSM2_LIBRARIES}
        ${OPENSSL_LIBRARIES}
        ${SQLITE3_LIBRARIES}
)

target_link_libraries(keehive.test keehive ${KEEHIVE_LINK_LIRARIES})

add_test(keehive.test keehive.test)

add_test(keehive.test_valgrind valgrind
        --error-exitcode=1 --read-var-info=yes
        --leak-check=full --show-leak-kinds=all
        ./keehive.test)
