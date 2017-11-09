set(LIB_H
    RemotePKCS11.h
    pkcs11/pkcs11.h
    pkcs11/pkcs11t.h
    pkcs11/pkcs11f.h
        constants.h)

set(LIB_SRC
    RemotePKCS11.c
)



add_library(keehive
    ${LIB_H}
    ${LIB_SRC}
)