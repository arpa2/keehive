#ifndef KEEHIVE_DERPUT_H
#define KEEHIVE_DERPUT_H

#include "pkcs11/pkcs11unix.h"
#include "types.h"

CK_RV
der_put_CK_ATTRIBUTE_ARRAY(
        const CK_ATTRIBUTE* pTemplate,
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


void der_put_CK_MECHANISM_PTR(const CK_MECHANISM* pMechanism);

void der_put_CK_MECHANISM_INFO_PTR(const CK_MECHANISM_INFO* pInfo);

void der_put_CK_VOID_PTR(const CK_VOID_PTR* pReserved);

void der_put_CK_UTF8CHAR_ARRAY(const CK_UTF8CHAR* pPin);

void der_put_UTF8String(const CK_UTF8CHAR* pPin);

void der_put_CK_BBOOL_PTR(const CK_BBOOL* tokenPresent);

void der_put_CK_FLAGS_PTR(const CK_FLAGS* flags);

void der_put_ANY(ANY pApplication);

void der_put_CK_NOTIFY(const CK_NOTIFY notify);

void der_put_CK_C_INITIALIZE_ARGS_PTR(const CK_C_INITIALIZE_ARGS* pInitArgs);

void der_put_CK_INFO_PTR(const CK_INFO* pInfo);

void der_put_CK_SESSION_INFO_PTR(const CK_SESSION_INFO* pInfo);

void der_put_CK_SLOT_INFO_PTR(const CK_SLOT_INFO* pInfo);

void der_put_CK_TOKEN_INFO_PTR(const CK_TOKEN_INFO* pInfo);

void der_put_CK_OBJECT_HANDLE_ARRAY(const CK_OBJECT_HANDLE* phObject);

void der_put_CK_MECHANISM_TYPE_ARRAY(const CK_MECHANISM_TYPE* pMechanismList);

#endif //KEEHIVE_DERPUT_H


