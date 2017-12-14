#ifndef KEEHIVE_WRAP_C_H
#define KEEHIVE_WRAP_C_H

#include "types.h"
#include "pkcs11/pkcs11unix.h"

CK_RV call_C_Initialize(CK_FUNCTION_LIST_PTR_PTR function_list);
CK_RV call_C_Finalize(CK_FUNCTION_LIST_PTR_PTR function_list);
CK_RV call_C_GetInfo(CK_FUNCTION_LIST_PTR_PTR function_list, CK_INFO *info);
CK_RV call_C_GetFunctionList(const char *path, CK_FUNCTION_LIST_PTR_PTR function_list);


CK_RV
call_C_GetSlotInfo(
        CK_FUNCTION_LIST_PTR_PTR function_list,
        CK_SLOT_ID slotID,
        CK_SLOT_INFO_PTR pInfo
);

CK_RV
get_token_info(
        CK_FUNCTION_LIST_PTR_PTR function_list,
        CK_SLOT_ID slotID,
        CK_TOKEN_INFO_PTR pInfo
);


CK_RV
call_C_GetSlotList(
        CK_BBOOL tokenPresent,
        CK_FUNCTION_LIST_PTR_PTR function_list,
        CK_SLOT_ID_PTR *pSlotList,
        CK_ULONG_PTR pCount
);

#endif //KEEHIVE_WRAP_C_H
