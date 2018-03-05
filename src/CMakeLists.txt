
set(LIB_H
        generated/types.h
        generated/pack.h
        generated/unpack.h
        generated/call.h
        #generated/api.h
        generated/server.h
        generated/packer.h
        static/RemotePKCS11.h
        static/pkcs11/pkcs11unix.h
        static/pkcs11/pkcs11.h
        static/pkcs11/pkcs11t.h
        static/pkcs11/pkcs11f.h
        static/convert.h
        static/util.h
        static/returncodes.h
        static/derput.h
        static/derget.h
        static/nedtrie.h
    )

set(LIB_SRC
        generated/pack.c
        generated/unpack.c
        generated/call.c
        generated/api.c
        generated/server.c
        static/convert.c
        generated/packer.c
        static/util.c
        static/derput.c
        static/derget.c
)


include_directories (
        "${PROJECT_BINARY_DIR}"
        "generated" "."
        "static"
)

add_library(keehive
        SHARED
        ${LIB_H}
        ${LIB_SRC}

)

set(KEEHIVE_TEST_LINK_LIRARIES
    ${LIBCMOCKA_LIBRARIES}
)

set(KEEHIVE_LINK_LIRARIES
    ${Quick-DER_LIBRARIES}
)


target_link_libraries(keehive ${KEEHIVE_LINK_LIRARIES})

set_target_properties(keehive PROPERTIES VERSION ${PROJECT_VERSION})
set_target_properties(keehive PROPERTIES SOVERSION 0)

enable_testing()

add_executable(api.test generated/test/test_api.c)
add_executable(pack.test generated/test/test_pack.c)
#add_executable(server.test generated/test/test_server.c)

add_dependencies(api.test api.test)
add_dependencies(pack.test pack.test)
#add_dependencies(server.test server.test)

target_link_libraries(api.test keehive ${KEEHIVE_TEST_LINK_LIRARIES})
target_link_libraries(pack.test keehive ${KEEHIVE_TEST_LINK_LIRARIES})
#target_link_libraries(server.test keehive ${KEEHIVE_TEST_LINK_LIRARIES})

add_test(api.test api.test)
add_test(pack.test pack.test)
#add_test(server.test server.test)




install(TARGETS keehive LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})