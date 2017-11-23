#ifndef KEEHIVE_WRAP_C_H
#define KEEHIVE_WRAP_C_H

#include "constants.h"
#include "pkcs11/pkcs11unix.h"

KeehiveError initialize(CK_FUNCTION_LIST_PTR_PTR function_list);
KeehiveError get_slot_list(CK_FUNCTION_LIST_PTR_PTR function_list);
KeehiveError finalize(CK_FUNCTION_LIST_PTR_PTR function_list);
KeehiveError get_info(CK_FUNCTION_LIST_PTR_PTR function_list, CK_INFO *info);
KeehiveError get_function_list(const char *path, CK_FUNCTION_LIST_PTR_PTR function_list);

#endif //KEEHIVE_WRAP_C_H
