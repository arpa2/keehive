set(LIB_H
        generated/types.h
        generated/pack.h
        generated/unpack.h
        generated/call.h
        generated/client.h
        generated/server.h
        static/RemotePKCS11.h
        static/pkcs11/pkcs11unix.h
        static/pkcs11/pkcs11.h
        static/pkcs11/pkcs11t.h
        static/pkcs11/pkcs11f.h
        static/convert.h
        static/util.h
        static/returncodes.h
        static/derput.h
        )

set(LIB_SRC
        generated/pack.c
        generated/unpack.c
        generated/call.c
        generated/client.c
        generated/server.c
        static/convert.c
        static/util.c
        static/derput.c
)


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
add_executable(call.test generated/test/test_call.c)

add_dependencies(client.test client.test)
add_dependencies(pack.test pack.test)
add_dependencies(server.test server.test)
add_dependencies(unpack.test unpack.test)
add_dependencies(call.test call.test)

set(KEEHIVE_TEST_LINK_LIRARIES
        ${LIBCMOCKA_LIBRARIES}
        ${Quick-DER_LIBRARIES}
        )

target_link_libraries(client.test keehive ${KEEHIVE_TEST_LINK_LIRARIES})
target_link_libraries(pack.test keehive ${KEEHIVE_TEST_LINK_LIRARIES})
target_link_libraries(server.test keehive ${KEEHIVE_TEST_LINK_LIRARIES})
target_link_libraries(unpack.test keehive ${KEEHIVE_TEST_LINK_LIRARIES})
target_link_libraries(call.test keehive ${KEEHIVE_TEST_LINK_LIRARIES})

add_test(client.test client.test)
add_test(pack.test pack.test)
add_test(server.test server.test)
add_test(unpack.test unpack.test)
add_test(call.test call.test)
