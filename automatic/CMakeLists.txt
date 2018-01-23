set(LIB_H
        generated/types.h
        generated/pack.h
        generated/unpack.h
        generated/call.h
        generated/client.h
        generated/server.h
        RemotePKCS11.h
        pkcs11/pkcs11unix.h
        pkcs11/pkcs11.h
        pkcs11/pkcs11t.h
        pkcs11/pkcs11f.h
        convert.h
        util.h
)

set(LIB_SRC
        generated/pack.c
        generated/unpack.c
        generated/call.c
        generated/client.c
        generated/server.c
        convert.c
        util.c
        returncodes.h manualpack.c manualpack.h)


include_directories ("${PROJECT_BINARY_DIR}" "generated" ".")

add_library(keehive
        ${LIB_H}
        ${LIB_SRC}
)

enable_testing()

add_executable(client.test generated/test/test_client.c)
add_executable(pack.test generated/test/test_pack.c)
add_executable(server.test generated/test/test_server.c)
add_executable(unpack.test generated/test/test_unpack.c)
add_executable(wrap.test generated/test/test_wrap.c)

add_dependencies(client.test client.test)
add_dependencies(pack.test pack.test)
add_dependencies(server.test server.test)
add_dependencies(unpack.test unpack.test)
add_dependencies(wrap.test wrap.test)

set(KEEHIVE_TEST_LINK_LIRARIES
        ${LIBCMOCKA_LIBRARIES}
        ${Quick-DER_LIBRARIES}
        )

target_link_libraries(client.test keehive ${KEEHIVE_TEST_LINK_LIRARIES})
target_link_libraries(pack.test keehive ${KEEHIVE_TEST_LINK_LIRARIES})
target_link_libraries(server.test keehive ${KEEHIVE_TEST_LINK_LIRARIES})
target_link_libraries(unpack.test keehive ${KEEHIVE_TEST_LINK_LIRARIES})
target_link_libraries(wrap.test keehive ${KEEHIVE_TEST_LINK_LIRARIES})

add_test(client.test client.test)
add_test(pack.test pack.test)
add_test(server.test server.test)
add_test(unpack.test unpack.test)
add_test(wrap.test wrap.test)
