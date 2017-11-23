#include "wrap.h"
#include "constants.h"
#include "pkcs11/pkcs11unix.h"


#include <stdlib.h>
#include <stdio.h>
#include <dlfcn.h>
#include <assert.h>
#include <string.h>


KeehiveError
initialize(const char *path, void **handle) {
    CK_RV (*C_Initialize)(CK_VOID_PTR pInitArgs);
    char *error;

    *handle = dlopen(path, RTLD_LAZY);
    if (!*handle) {
        fputs(dlerror(), stderr);
        return KEEHIVE_E_SO_INVALID;
    }

    C_Initialize = dlsym(*handle, "C_Initialize");

    if ((error = dlerror()) != NULL) {
        fputs(error, stderr);
        return KEEHIVE_E_SO_INVALID;
    }

    CK_RV status = (*C_Initialize)(NULL_PTR);
    if (status != CKR_OK)
        return KEEHIVE_E_SO_INIT_ERROR;

    return KEEHIVE_E_SUCCESS;

}

KeehiveError
get_slot_list(void **handle) {

    CK_RV (*C_GetSlotList)(CK_BBOOL, CK_SLOT_ID_PTR, CK_ULONG_PTR);
    char *error;

    C_GetSlotList = dlsym(*handle, "C_GetSlotList");

    if (!*handle) {
        return KEEHIVE_E_SO_INVALID;
    }

    if ((error = dlerror()) != NULL) {
        fputs(error, stderr);
        return KEEHIVE_E_SO_ERROR;
    }

    CK_ULONG number = 0;

    CK_RV status = (*C_GetSlotList)(FALSE, NULL_PTR, &number);

    if (status != CKR_OK)
        return KEEHIVE_E_SO_ERROR;

    CK_BBOOL tokenPresent = CK_FALSE;
    int size = (int)number;
    unsigned long int pSlotList[size];
    memset( pSlotList, 0, number * sizeof(CK_SLOT_ID) );

    status = (*C_GetSlotList)(tokenPresent, pSlotList, &number);
    if (status != CKR_OK)
        return KEEHIVE_E_SO_ERROR;

    return KEEHIVE_E_SUCCESS;

}

KeehiveError
finalize(void **handle) {
    CK_RV (*C_Finalize)(CK_VOID_PTR);
    char *error;

    C_Finalize = dlsym(*handle, "C_Finalize");

    if (!*handle) {
        return KEEHIVE_E_SO_INVALID;
    }

    if ((error = dlerror()) != NULL) {
        fputs(error, stderr);
        return KEEHIVE_E_SO_ERROR;
    }

    CK_RV status = (*C_Finalize)(NULL_PTR);
    if (status != CKR_OK)
        return KEEHIVE_E_SO_ERROR;

    dlclose(*handle);

    if ((error = dlerror()) != NULL) {
        fputs(error, stderr);
        return KEEHIVE_E_SO_ERROR;
    }

    return KEEHIVE_E_SUCCESS;
}


KeehiveError
get_info(void **handle) {
    CK_RV (*C_GetInfo)(CK_INFO_PTR);
    char *error;

    C_GetInfo = dlsym(*handle, "C_GetInfo");

    if (!*handle) {
        return KEEHIVE_E_SO_INVALID;
    }

    if ((error = dlerror()) != NULL) {
        fputs(error, stderr);
        return KEEHIVE_E_SO_ERROR;
    }

    CK_INFO info;
    CK_RV status = (*C_GetInfo)(&info);
    if (status != CKR_OK)
        return KEEHIVE_E_SO_ERROR;

    dlclose(*handle);

    if ((error = dlerror()) != NULL) {
        fputs(error, stderr);
        return KEEHIVE_E_SO_ERROR;
    }

    return KEEHIVE_E_SUCCESS;
}