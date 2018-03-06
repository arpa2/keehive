#ifndef KEEHIVE_DERPUT_H
#define KEEHIVE_DERPUT_H

#include "cryptoki.h"
#include "types.h"

const dercursor der_empty;
const dercursor der_null;


typedef uint8_t der_buf_long_t [4];
dercursor
der_put_long(
        uint8_t* der_buf_long,
        long int value
);


typedef uint8_t der_buf_ulong_t [5];
dercursor
der_put_ulong(
        uint8_t* der_buf_ulong,
        long int value
);


typedef uint8_t der_buf_char_t [1];
dercursor
der_put_char(
        uint8_t* der_buf_char,
        char value
);


typedef uint8_t der_buf_uchar_t [1];
dercursor
der_put_uchar(
        uint8_t* der_buf_char,
        unsigned char value
);


typedef uint8_t der_buf_uint32_t [5];
dercursor
der_put_uint8(
        uint8_t* der_buf_uint8,
        uint8_t value
);


CK_RV
der_put_CK_ATTRIBUTE_ARRAY(
        const CK_ATTRIBUTE* pTemplate,
        CK_ULONG count,
        uint8_t** pInnerlist,
        size_t* pLength
);


CK_RV
der_put_CK_ULONG_ARRAY(
        const CK_ULONG* array,
        const CK_ULONG* count,
        uint8_t** pInnerlist,
        size_t* pLength,
        const derwalk* pack
);


CK_RV
der_put_CK_SLOT_ID_ARRAY(
        const CK_SLOT_ID* pSlotList,
        const CK_ULONG* count,
        uint8_t **pInnerlist,
        size_t *pLength,
        const derwalk *pack
);


CK_RV
der_put_CK_BYTE_ARRAY(
        const CK_BYTE* byte_array,
        const CK_ULONG* count,
        uint8_t** pInnerlist,
        size_t* pLength,
        const derwalk* pack
);


dercursor
der_put_CK_VOID_PTR(
        const CK_VOID_PTR* pReserved
);


CK_RV
der_put_CK_MECHANISM_PTR(
        ACK_MECHANISM_t* Ack_Mechanism,
        const CK_MECHANISM* pMechanism,
        der_buf_ulong_t mechanism_buf,
        der_buf_ulong_t ulParameterLen_buf
);


dercursor
der_put_CK_BBOOL_PTR(
        uint8_t *der_buf_bool,
        const CK_BBOOL* value
);


CK_RV
der_put_CK_UTF8CHAR_ARRAY(
        dercursor* cursor,
        const CK_UTF8CHAR* pin,
        const CK_ULONG pinlen
);


CK_RV
der_put_UTF8String(
        dercursor* cursor,
        const CK_UTF8CHAR* pin,
        const CK_ULONG pinlen
);


CK_RV
der_put_CK_C_INITIALIZE_ARGS_PTR(
        C_Initialize_Call_t* C_Initialize_Call,
        const CK_C_INITIALIZE_ARGS* pInitArgs,
        der_buf_ulong_t flags_buf,
        der_buf_bool_t createMutex_bool_buf,
        der_buf_bool_t destroyMutex_bool_buf,
        der_buf_bool_t lockMutex_bool_buf,
        der_buf_bool_t unlockMutex_bool_buf
);


dercursor
der_put_CK_FLAGS_PTR(
        u_int8_t* der_buf_ulong,
        const CK_FLAGS flags
);


CK_RV
der_put_CK_OBJECT_HANDLE_ARRAY(
        const CK_OBJECT_HANDLE* phObject,
        const CK_ULONG* count,
        uint8_t **pInnerlist,
        size_t *pLength,
        const derwalk *pack
);


typedef uint8_t manufacturerID_t [32];
typedef uint8_t libraryDescription_t [32];
CK_RV
der_put_CK_INFO_PTR(
        ACK_INFO_t* Ack_Info,
        const CK_INFO* pInfo,
        manufacturerID_t manufacturerID_buf,
        libraryDescription_t libraryDescription_buf,
        der_buf_ulong_t flags_buf,
        der_buf_char_t libraryVersion_minor_buf,
        der_buf_char_t libraryVersion_major_buf,
        der_buf_char_t cryptokiVersion_minor_buf,
        der_buf_char_t cryptokiVersion_major_buf

);


CK_RV
der_put_CK_MECHANISM_TYPE_ARRAY(
        const CK_MECHANISM_TYPE* pMechanismList,
        const CK_ULONG* count,
        uint8_t **pInnerlist,
        size_t *pLength,
        const derwalk *pack
);


CK_RV
der_put_CK_MECHANISM_INFO_PTR(
        ACK_MECHANISM_INFO_t* Ack_Mechanism_info,
        const CK_MECHANISM_INFO* pInfo,
        der_buf_ulong_t flags_buf,
        der_buf_ulong_t ulMaxKeySize_buf,
        der_buf_ulong_t ulMinKeySize_buf
);


CK_RV
der_put_CK_SESSION_INFO_PTR(
        ACK_SESSION_INFO_t* Ack_session_Info,
        const CK_SESSION_INFO* pInfo,
        der_buf_ulong_t flags_buf,
        der_buf_ulong_t slotID_buf,
        der_buf_ulong_t state_buf,
        der_buf_ulong_t ulDeviceError_buf
);

typedef uint8_t slotDescription_t [64];
CK_RV
der_put_CK_SLOT_INFO_PTR(
        ACK_SLOT_INFO_t* Ack_Slot_Info,
        const CK_SLOT_INFO* pInfo,
        der_buf_ulong_t flags_buf,
        manufacturerID_t manufacturerID_buf,
        slotDescription_t slotDescription_buf,
        der_buf_ulong_t firmwareVersion_minor_buf,
        der_buf_ulong_t firmwareVersion_major_buf,
        der_buf_ulong_t hardwareVersion_minor_buf,
        der_buf_ulong_t hardwareVersion_major_buf
);


typedef uint8_t label_t [21];
typedef uint8_t model_t [16];
typedef uint8_t serialNumber_t [16];
typedef uint8_t utcTime_t [16];
CK_RV
der_put_CK_TOKEN_INFO_PTR(
        ACK_TOKEN_INFO_t* Ack_Token_Info,
        const CK_TOKEN_INFO* pInfo,
        der_buf_ulong_t firmwareVersion_minor_buf,
        der_buf_ulong_t firmwareVersion_major_buf,
        der_buf_ulong_t hardwareVersion_minor_buf,
        der_buf_ulong_t hardwareVersion_major_buf,
        der_buf_ulong_t flags_buf,
        manufacturerID_t manufacturerID_buf,
        label_t label_buf,
        model_t model_buf,
        serialNumber_t serialNumber_buf,
        der_buf_ulong_t ulMaxSessionCount_buf,
        der_buf_ulong_t ulSessionCount_buf,
        der_buf_ulong_t ulMaxRwSessionCount_buf,
        der_buf_ulong_t ulRwSessionCount_buf,
        der_buf_ulong_t ulMaxPinLen_buf,
        der_buf_ulong_t ulMinPinLen_buf,
        der_buf_ulong_t ulTotalPublicMemory_buf,
        der_buf_ulong_t ulFreePublicMemory_buf,
        der_buf_ulong_t ulTotalPrivateMemory_buf,
        der_buf_ulong_t ulFreePritvateMemory_buf,
        utcTime_t utcTime_buf
);


#endif //KEEHIVE_DERPUT_H


