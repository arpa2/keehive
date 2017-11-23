
#include "types.h"
#include "pkcs11/pkcs11unix.h"
#include "unpack.h"


KeehiveError
unpack_C_GetInfo_Call(
       dercursor * packed
){
    C_GetInfo_Call_t * C_GetInfo_Call;

    memset(&C_GetInfo_Call, 0, sizeof(C_GetInfo_Call));
    int repeats = 1;
    int status = der_unpack(packed, C_GetInfo_Return_packer, (dercursor *) &C_GetInfo_Call, repeats);

    if (status == -1) {
        return KEEHIVE_E_DER_ERROR;
    }
    return KEEHIVE_E_SUCCESS;

};

KeehiveError
unpack_C_GetInfo_Return(
        dercursor * packed,
        CK_INFO_PTR pInfo
) {
    C_GetInfo_Return_t C_GetInfo_Return;

    memset(&C_GetInfo_Return, 0, sizeof(C_GetInfo_Return));

    //C_GetInfo_Return.pInfo = pInfo;


    int repeats = 1;
    int status = der_unpack(packed, C_GetInfo_Return_packer, (dercursor *) &C_GetInfo_Return, repeats);

    if (status == -1) {
        return KEEHIVE_E_DER_ERROR;
    }
    return KEEHIVE_E_SUCCESS;

};

KeehiveError
unpack_C_GetSlotList_Call(
        dercursor * packed
) {

    C_GetSlotList_Call_t * C_GetSlotList_Call;

    memset(&C_GetSlotList_Call, 0, sizeof(C_GetSlotList_Call));
    int repeats = 1;
    int status = der_unpack(packed, C_GetSlotList_Call_packer, (dercursor *) &C_GetSlotList_Call, repeats);

    //if (getslotlist_call->pulCount.derptr == NULL)
    //    return KEEHIVE_E_DER_ERROR;

    if (status == -1) {
        int x = errno;
        return KEEHIVE_E_DER_ERROR;
    }
    return KEEHIVE_E_SUCCESS;
}