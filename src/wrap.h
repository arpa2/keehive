#ifndef KEEHIVE_WRAP_C_H
#define KEEHIVE_WRAP_C_H

#include "types.h"
#include "pkcs11/pkcs11unix.h"

KeehiveError call_C_Initialize(CK_FUNCTION_LIST_PTR_PTR function_list);
KeehiveError call_C_GetSlotList(CK_FUNCTION_LIST_PTR_PTR function_list);
KeehiveError call_C_Finalize(CK_FUNCTION_LIST_PTR_PTR function_list);
KeehiveError call_C_GetInfo(CK_FUNCTION_LIST_PTR_PTR function_list, CK_INFO *info);
KeehiveError call_C_GetFunctionList(const char *path, CK_FUNCTION_LIST_PTR_PTR function_list);


KeehiveError
call_C_GetSlotInfo(
        CK_FUNCTION_LIST_PTR_PTR function_list,
        CK_SLOT_ID slotID,
        CK_SLOT_INFO_PTR pInfo
);

KeehiveError
get_token_infO(
        CK_FUNCTION_LIST_PTR_PTR function_list,
        CK_SLOT_ID slotID,
        CK_TOKEN_INFO_PTR pInfo
);

#endif //KEEHIVE_WRAP_C_H
