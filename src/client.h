//
// Created by Gijs Molenaar on 23/11/2017.
//

#ifndef KEEHIVE_CLIENT_H
#define KEEHIVE_CLIENT_H

#include "pkcs11/pkcs11unix.h"

CK_RV Remote_C_GetInfo(CK_INFO_PTR pInfo);
CK_RV  Remote_C_GetSlotList(CK_BBOOL tokenPresent, CK_SLOT_ID_PTR *pSlotList, CK_ULONG_PTR pulCount);


#endif //KEEHIVE_CLIENT_H
