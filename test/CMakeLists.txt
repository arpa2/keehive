
include_directories (../src)

add_executable(keehive.test test_keehive.c)
add_executable(wrap.test test_wrap.c)

add_dependencies(keehive.test keehive.test)
add_dependencies(wrap.test keehive.test)

set(KEEHIVE_LINK_LIRARIES
        ${LIBCMOCKA_LIBRARIES}
        ${Quick-DER_LIBRARIES}
)

target_link_libraries(keehive.test keehive ${KEEHIVE_LINK_LIRARIES})
target_link_libraries(wrap.test keehive ${KEEHIVE_LINK_LIRARIES})

add_test(keehive.test keehive.test)

add_test(wrap.test wrap.test)
