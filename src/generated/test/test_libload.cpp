#include "pkcs11/pkcs11unix.h"
#include <dlfcn.h>
#include "settings.h"
#include <assert.h>
#include <stdio.h>


int main() {

    const CK_C_GetFunctionList handle( (CK_C_GetFunctionList)dlsym(
            dlopen(KEEHIVE_TEST_LIBRARY, RTLD_LAZY),
            "C_GetFunctionList"
    ) );
    if (!handle) {
        fprintf(stderr, "%s\n", dlerror());
        exit(EXIT_FAILURE);
    }





}