#include "loader.h"
#include <stdlib.h>
#include <stdio.h>
#include <dlfcn.h>
#include "static/returncodes.h"
#include "cryptoki.h"

CK_RV
cryptoki_loader(const char *path, CK_FUNCTION_LIST_PTR_PTR function_list) {
    /* this function is different from the other calls since it is the only one
     * accessing the shared library by name */
    CK_RV (*C_GetFunctionList)(CK_FUNCTION_LIST_PTR_PTR);
    char *error;


    void *handle = dlopen(path, RTLD_LAZY);
    if (!handle) {
        fputs(dlerror(), stderr);
        return CKR_KEEHIVE_SO_INVALID;
    }

    C_GetFunctionList = dlsym(handle, "C_GetFunctionList");

    if ((error = dlerror()) != NULL) {
        fputs(error, stderr);
        return CKR_KEEHIVE_SO_ERROR;
    }

    CK_RV status = (*C_GetFunctionList)(function_list);
    if (status != CKR_OK)
        return CKR_KEEHIVE_SO_ERROR;

    return CKR_OK;
};
