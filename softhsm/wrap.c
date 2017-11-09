#include "wrap.h"

/* these defines are required by pkcs11.h */
#define CK_PTR *
#define CK_DECLARE_FUNCTION(returnType, name) returnType name
#define CK_DECLARE_FUNCTION_POINTER(returnType, name) returnType (* name)
#define CK_CALLBACK_FUNCTION(returnType, name) returnType (* name)
#ifndef NULL_PTR
#define NULL_PTR 0
#endif

#include "pkcs11/pkcs11.h"


void * get_slot_list() {
    CK_BBOOL       tokenPresent;
    CK_SLOT_ID_PTR pSlotList;
    CK_ULONG_PTR   pulCount;
    C_GetSlotList(tokenPresent, pSlotList, pulCount);
    return 0;
}