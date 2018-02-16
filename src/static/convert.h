#ifndef KEEHIVE_CONVERT_H
#define KEEHIVE_CONVERT_H

#include "pkcs11/pkcs11unix.h"
#include <stdlib.h>
#include <quick-der/api.h>
#include "nedtrie.h"

dercursor not_implemented(uint8_t *der_buf_uint32, uint32_t value);

struct func_s {
    NEDTRIE_ENTRY(func_s) link;
    size_t key;
    dercursor (*func)(uint8_t*, uint32_t);
};

typedef struct func_s func_t;

typedef struct func_tree_s func_tree_t;

void init_func_tree();

func_t* find_func(size_t key);

#endif //KEEHIVE_CONVERT_H