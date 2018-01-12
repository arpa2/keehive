
include_directories (../src)

add_executable(pack_unpack.test test_pack_unpack.c)
add_executable(client.test test_client.c)
add_executable(wrap.test test_wrap.c)

add_dependencies(client.test client.test)
add_dependencies(pack_unpack.test pack_unpack.test)
add_dependencies(wrap.test wrap.test)

set(KEEHIVE_LINK_LIRARIES
        ${LIBCMOCKA_LIBRARIES}
        ${Quick-DER_LIBRARIES}
)

target_link_libraries(client.test keehive ${KEEHIVE_LINK_LIRARIES})
target_link_libraries(pack_unpack.test keehive ${KEEHIVE_LINK_LIRARIES})
target_link_libraries(wrap.test keehive ${KEEHIVE_LINK_LIRARIES})

add_test(pack_unpack.test pack_unpack.test)
add_test(wrap.test wrap.test)
add_test(client.test client.test)
