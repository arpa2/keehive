set(LIB_H
        generated/types.h
        generated/pack.h
        generated/unpack.h
        generated/wrap.h
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
        generated/wrap.c
        generated/client.c
        generated/server.c
        convert.c
        util.c
)


include_directories ("${PROJECT_BINARY_DIR}", generated, ".")

add_library(keehive
        ${LIB_H}
        ${LIB_SRC}
)