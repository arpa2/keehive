set(LIB_H
    RemotePKCS11.h
)

set(LIB_SRC
    RemotePKCS11.c
)



add_library(keehive
    ${LIB_H}
    ${LIB_SRC}
)