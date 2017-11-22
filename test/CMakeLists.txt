
include_directories (../lib)
include_directories (../softhsm)
add_executable(keehive.test test_keehive.c)
add_executable(wrap.test test_softhsm.c)
add_dependencies(keehive.test keehive.test)
add_dependencies(wrap.test wrap.test)

set(KEEHIVE_LINK_LIRARIES
        ${LIBCMOCKA_LIBRARIES}
        ${Quick-DER_LIBRARIES}
)

target_link_libraries(keehive.test keehive ${KEEHIVE_LINK_LIRARIES})
target_link_libraries(wrap.test wrap ${KEEHIVE_LINK_LIRARIES})

add_test(keehive.test keehive.test)

add_test(wrap.test wrap.test)
