set(LIB_H
        RemotePKCS11.h
        pkcs11/pkcs11unix.h
        pkcs11/pkcs11.h
        pkcs11/pkcs11t.h
        pkcs11/pkcs11f.h
        types.h
        pack.h
        unpack.h
        wrap.h
        convert.h
        client.h
        server.h
        util.h
)

set(LIB_SRC
        pack.c
        unpack.c
        wrap.c
        convert.c
        client.c
        server.c
        util.c
)


include_directories ("${PROJECT_BINARY_DIR}")

add_library(keehive
        ${LIB_H}
        ${LIB_SRC}
)