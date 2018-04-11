#include "cryptoki.h"
#include <dlfcn.h>
#include "settings.h"
#include <cassert>
#include <cstdio>
#include <cstdlib>


int main() {

    const auto handle( (CK_C_GetFunctionList)dlsym(
            dlopen(KEEHIVE_TEST_LIBRARY, RTLD_LAZY),
            "C_GetFunctionList"
    ) );
    if (!handle) {
        fprintf(stderr, "%s\n", dlerror());
        exit(EXIT_FAILURE);
    }





}