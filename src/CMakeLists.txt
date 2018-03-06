
set(LIB_H
        generated/types.h
        generated/pack.h
        generated/unpack.h
        generated/call.h
        generated/server.h
        generated/packer.h
        static/RemotePKCS11.h
        static/cryptoki.h
        static/pkcs11.h
        static/pkcs11t.h
        static/pkcs11f.h
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
        static/entrypoint.c)


include_directories (
        "generated"
        "."
        "static"
)


set(KEEHIVE_LINK_LIRARIES
    ${Quick-DER_LIBRARIES}
)

add_library(keehive
        SHARED
        ${LIB_H}
        ${LIB_SRC}
)


target_link_libraries(keehive ${KEEHIVE_LINK_LIRARIES})
set_target_properties(keehive PROPERTIES VERSION ${PROJECT_VERSION})
set_target_properties(keehive PROPERTIES SOVERSION 0)

# make sure the file is .so, also on OSX. Yes, that is right, since this should be dlopened, not linked against
set_target_properties(keehive PROPERTIES SUFFIX ".so")

install(TARGETS keehive LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
