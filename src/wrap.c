#include "wrap.h"

#include <stdlib.h>
#include <stdio.h>
#include <dlfcn.h>
#include <string.h>




CK_RV
call_C_Initialize(CK_FUNCTION_LIST_PTR_PTR function_list) {
    CK_RV status = ((*function_list)->C_Initialize)(NULL_PTR);
    if (status != CKR_OK)
        return CKR_KEEHIVE_SO_INIT_ERROR;
    return CKR_OK;
}

CK_RV
call_C_GetSlotList(
        CK_FUNCTION_LIST_PTR_PTR function_list,
        CK_SLOT_ID_PTR *pSlotList,
        CK_ULONG_PTR pCount
) {

    CK_RV status;
    CK_BBOOL tokenPresent = CK_FALSE;

    status = ((*function_list)->C_GetSlotList)(CK_FALSE, NULL_PTR, pCount);

    if (status != CKR_OK)
        return CKR_KEEHIVE_SO_ERROR;


    *pSlotList = (CK_SLOT_ID_PTR)malloc((*pCount)*sizeof(CK_SLOT_ID));
    memset( *pSlotList, 0, *pCount * sizeof(CK_SLOT_ID) );

    status = ((*function_list)->C_GetSlotList)(tokenPresent, *pSlotList, pCount);
    if (status != CKR_OK)
        return CKR_KEEHIVE_SO_ERROR;

    return CKR_OK;

}

CK_RV
call_C_Finalize(CK_FUNCTION_LIST_PTR_PTR function_list) {
    CK_RV status = ((*function_list)->C_Finalize)(NULL_PTR);
    if (status != CKR_OK)
        return CKR_KEEHIVE_SO_ERROR;

    return CKR_OK;
}


CK_RV
call_C_GetInfo(CK_FUNCTION_LIST_PTR_PTR function_list, CK_INFO *info) {
    CK_RV status = ((*function_list)->C_GetInfo)(info);
    if (status != CKR_OK)
        return CKR_KEEHIVE_SO_ERROR;

    return CKR_OK;
}


CK_RV
call_C_GetSlotInfo(
        CK_FUNCTION_LIST_PTR_PTR function_list,
        CK_SLOT_ID slotID,
        CK_SLOT_INFO_PTR pInfo
) {
    CK_RV status = ((*function_list)->C_GetSlotInfo)(slotID, pInfo);
    if (status != CKR_OK)
        return CKR_KEEHIVE_SO_ERROR;

    return CKR_OK;
}


CK_RV
call_C_GetTokenInfo(
        CK_FUNCTION_LIST_PTR_PTR function_list,
        CK_SLOT_ID slotID,
        CK_TOKEN_INFO_PTR pInfo
) {
    CK_RV status = ((*function_list)->C_GetTokenInfo)(slotID, pInfo);
    if (status != CKR_OK)
        return CKR_KEEHIVE_SO_ERROR;

    return CKR_OK;
}



CK_RV
call_C_GetFunctionList(const char *path, CK_FUNCTION_LIST_PTR_PTR function_list) {
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


CK_RV
close(void **handle) {
        char *error;
        dlclose(*handle);

        if ((error = dlerror()) != NULL) {
            fputs(error, stderr);
            return CKR_KEEHIVE_SO_ERROR;
        }
    return CKR_OK;
}
