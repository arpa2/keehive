set(LIB_H
        RemotePKCS11.h
        pkcs11/pkcs11.h
        pkcs11/pkcs11t.h
        pkcs11/pkcs11f.h
        constants.h
        keehive.h pkcs11/pkcs11unix.h)

set(LIB_SRC
        keehive.c
)

include_directories ("${PROJECT_BINARY_DIR}")

add_library(keehive
        ${LIB_H}
        ${LIB_SRC}
)