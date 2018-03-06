
#ifndef KEEHIVE_LOADER_H
#define KEEHIVE_LOADER_H

#include "cryptoki.h"

CK_RV cryptoki_loader(const char *path, CK_FUNCTION_LIST_PTR_PTR function_list);

#endif //KEEHIVE_LOADER_H
