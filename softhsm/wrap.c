#include "wrap.h"

#include "pkcs11/pkcs11unix.h"


#include <stdlib.h>
#include <stdio.h>
#include <dlfcn.h>
#include <assert.h>


void * init() {
    void *handle;
    CK_RV (*C_GetSlotList)(CK_BBOOL, CK_SLOT_ID_PTR, CK_ULONG_PTR);
    CK_RV (*C_Initialize)(CK_VOID_PTR pInitArgs);


    char *error;

    handle = dlopen ("/usr/local/lib/softhsm/libsofthsm2.so", RTLD_LAZY);
    if (!handle) {
        fputs (dlerror(), stderr);
        exit(1);
    }

    C_GetSlotList = dlsym(handle, "C_GetSlotList");

    if ((error = dlerror()) != NULL)  {
        fputs(error, stderr);
        exit(1);
    }

    C_Initialize = dlsym(handle, "C_Initialize");

    if ((error = dlerror()) != NULL)  {
        fputs(error, stderr);
        exit(1);
    }

    CK_RV status = (*C_Initialize)(NULL_PTR);
    assert(status == CKR_OK);

    CK_ULONG number = 0;

    status = (*C_GetSlotList)(FALSE, NULL_PTR, &number);
    assert(status == CKR_OK);

    CK_BBOOL tokenPresent = CK_FALSE;
    CK_SLOT_ID pSlotList[number];
    CK_ULONG pulCount = 0;

    (*C_GetSlotList)(tokenPresent, pSlotList, &pulCount);

    dlclose(handle);
}


void * get_slot_list() {
    /* https://docs.oracle.com/cd/E19120-01/open.solaris/819-2145/chapter2-9/index.html */
    CK_BBOOL       tokenPresent;
    CK_SLOT_ID_PTR pSlotList;
    CK_ULONG_PTR   pulCount;
    //C_GetSlotList(tokenPresent, pSlotList, pulCount);
    return 0;
}
