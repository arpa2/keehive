#ifndef KEEHIVE_CONVERT_H
#define KEEHIVE_CONVERT_H

#include "cryptoki.h"
#include <stdlib.h>
#include <quick-der/api.h>
#include "nedtrie.h"


struct func_s {
    NEDTRIE_ENTRY(func_s) link;
    size_t key;
    dercursor (*put)(const CK_ATTRIBUTE, uint8_t*);
    int (*get)(dercursor, CK_ATTRIBUTE*);
};

typedef struct func_s func_t;

typedef struct func_tree_s func_tree_t;

void init_func_tree();

func_t* find_func(size_t key);

#endif //KEEHIVE_CONVERT_H