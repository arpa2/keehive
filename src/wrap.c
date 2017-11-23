#include "wrap.h"

#include <stdlib.h>
#include <stdio.h>
#include <dlfcn.h>
#include <string.h>


KeehiveError
initialize(CK_FUNCTION_LIST_PTR_PTR function_list) {
    CK_RV status = ((*function_list)->C_Initialize)(NULL_PTR);
    if (status != CKR_OK)
        return KEEHIVE_E_SO_INIT_ERROR;
    return KEEHIVE_E_SUCCESS;
}

KeehiveError
get_slot_list(CK_FUNCTION_LIST_PTR_PTR function_list) {

    CK_ULONG number = 0;

    CK_RV status = ((*function_list)->C_GetSlotList)(CK_FALSE, NULL_PTR, &number);

    if (status != CKR_OK)
        return KEEHIVE_E_SO_ERROR;

    CK_BBOOL tokenPresent = CK_FALSE;
    CK_SLOT_ID pSlotList[number];
    memset( pSlotList, 0, number * sizeof(CK_SLOT_ID) );

    status = ((*function_list)->C_GetSlotList)(tokenPresent, pSlotList, &number);
    if (status != CKR_OK)
        return KEEHIVE_E_SO_ERROR;

    return KEEHIVE_E_SUCCESS;

}

KeehiveError
finalize(CK_FUNCTION_LIST_PTR_PTR function_list) {
    CK_RV status = ((*function_list)->C_Finalize)(NULL_PTR);
    if (status != CKR_OK)
        return KEEHIVE_E_SO_ERROR;

    return KEEHIVE_E_SUCCESS;
}


KeehiveError
get_info(CK_FUNCTION_LIST_PTR_PTR function_list, CK_INFO *info) {
    CK_RV status = ((*function_list)->C_GetInfo)(info);
    if (status != CKR_OK)
        return KEEHIVE_E_SO_ERROR;

    return KEEHIVE_E_SUCCESS;
}


KeehiveError
get_function_list(const char *path, CK_FUNCTION_LIST_PTR_PTR function_list) {
    CK_RV (*C_GetFunctionList)(CK_FUNCTION_LIST_PTR_PTR);
    char *error;


    void *handle = dlopen(path, RTLD_LAZY);
    if (!handle) {
        fputs(dlerror(), stderr);
        return KEEHIVE_E_SO_INVALID;
    }

    C_GetFunctionList = dlsym(handle, "C_GetFunctionList");

    if ((error = dlerror()) != NULL) {
        fputs(error, stderr);
        return KEEHIVE_E_SO_ERROR;
    }

    CK_RV status = (*C_GetFunctionList)(function_list);
    if (status != CKR_OK)
        return KEEHIVE_E_SO_ERROR;

    return KEEHIVE_E_SUCCESS;
};


KeehiveError
close(void **handle) {
        char *error;
        dlclose(*handle);

        if ((error = dlerror()) != NULL) {
            fputs(error, stderr);
            return KEEHIVE_E_SO_ERROR;
        }
    return KEEHIVE_E_SUCCESS;
}