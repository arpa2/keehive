#ifndef KEEHIVE_CONSTANTS_H
#define KEEHIVE_CONSTANTS_H

#include "RemotePKCS11.h"


typedef DER_OVLY_RemotePKCS11_C_GetInfo_Call C_GetInfo_Call_t;
typedef DER_OVLY_RemotePKCS11_C_GetInfo_Return C_GetInfo_Return_t;

typedef DER_OVLY_RemotePKCS11_C_GetSlotList_Call C_GetSlotList_Call_t;
typedef DER_OVLY_RemotePKCS11_C_GetSlotList_Return C_GetSlotList_Return_t;
typedef DER_OVLY_RemotePKCS11_C_GetSlotList_Return_pSlotList C_GetSlotList_Return_pSlotList_t;



#define CKR_KEEHIVE_MEMORY_ERROR       (0 | CKR_VENDOR_DEFINED)
#define CKR_KEEHIVE_SO_INVALID         (1 | CKR_VENDOR_DEFINED)
#define CKR_KEEHIVE_SO_INIT_ERROR      (2 | CKR_VENDOR_DEFINED)
#define CKR_KEEHIVE_SO_ERROR           (3 | CKR_VENDOR_DEFINED)
#define CKR_KEEHIVE_DER_SYNTAX_ERROR   (4 | CKR_VENDOR_DEFINED)
#define CKR_KEEHIVE_DER_RANGE_ERROR    (5 | CKR_VENDOR_DEFINED)
#define CKR_KEEHIVE_DER_UNKNOWN_ERROR  (6 | CKR_VENDOR_DEFINED)

#endif //KEEHIVE_CONSTANTS_H

