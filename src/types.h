#ifndef KEEHIVE_CONSTANTS_H
#define KEEHIVE_CONSTANTS_H

#include "RemotePKCS11.h"


typedef DER_OVLY_RemotePKCS11_C_GetInfo_Call C_GetInfo_Call_t;
typedef DER_OVLY_RemotePKCS11_C_GetInfo_Return C_GetInfo_Return_t;

typedef DER_OVLY_RemotePKCS11_C_GetSlotList_Call C_GetSlotList_Call_t;
typedef DER_OVLY_RemotePKCS11_C_GetSlotList_Return C_GetSlotList_Return_t;
typedef DER_OVLY_RemotePKCS11_C_GetSlotList_Call_pSlotList C_GetSlotList_Call_pSlotList_t;

static const uint8_t get_slot_list_packer[] = {
        DER_PACK_RemotePKCS11_C_GetSlotList_Call,
        DER_PACK_END
};

typedef enum {
    KEEHIVE_E_SUCCESS,
    KEEHIVE_E_MEMORY_ERROR,
    KEEHIVE_E_SO_INVALID,
    KEEHIVE_E_SO_INIT_ERROR,
    KEEHIVE_E_SO_ERROR,
    KEEHIVE_E_DER_ERROR,
} KeehiveError;

#endif //KEEHIVE_CONSTANTS_H
