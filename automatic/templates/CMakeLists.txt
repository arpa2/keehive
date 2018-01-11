set(LIB_H
        types.h
        pack.h
        unpack.h
        wrap.h
        convert.h
        client.h
        server.h
)

set(LIB_SRC
        pack.c
        unpack.c
        wrap.c
        convert.c
        client.c
        server.c
)


include_directories ("${PROJECT_BINARY_DIR}")

add_library(keehive
        ${LIB_H}
        ${LIB_SRC}
)