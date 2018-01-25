#ifndef KEEHIVE_MANUALPACK_H
#define KEEHIVE_MANUALPACK_H

#include "pkcs11/pkcs11unix.h"
#include "types.h"

void der_put_CK_ATTRIBUTE_PTR(const CK_ATTRIBUTE_PTR* pTemplate);

void der_put_CK_BYTE_PTR(const CK_BYTE_PTR* pEncryptedData);

void der_put_CK_MECHANISM_PTR(const CK_MECHANISM_PTR* pMechanism);

void der_put_CK_MECHANISM_TYPE_PTR(const CK_MECHANISM_TYPE_PTR* pMechanismList);

void der_put_CK_MECHANISM_INFO(const CK_MECHANISM_INFO* pInfo);

void der_put_CK_VOID_PTR(const CK_VOID_PTR* pReserved);

void der_put_CK_UTF8CHAR_PTR(const CK_UTF8CHAR_PTR* pPin);

void der_put_UTF8String(const UTF8String* pPin);

void der_put_CK_BBOOL(const CK_BBOOL* tokenPresent);

void der_put_CK_FLAGS(const CK_FLAGS* flags);

void der_put_ANY(const ANY* pApplication);

void der_put_CK_NOTIFY(const CK_NOTIFY* notify);

void der_put_CK_C_INITIALIZE_ARGS_PTR(const CK_C_INITIALIZE_ARGS_PTR* pInitArgs);

void der_put_CK_OBJECT_HANDLE_PTR(const CK_OBJECT_HANDLE_PTR* phObject);

void der_put_CK_INFO(const CK_INFO* pInfo);

void der_put_CK_SESSION_INFO(const CK_SESSION_INFO* pInfo);

void der_put_CK_SLOT_INFO(const CK_SLOT_INFO* pInfo);

void der_put_CK_TOKEN_INFO(const CK_TOKEN_INFO* pInfo);

void der_put_CK_ULONG(const CK_ULONG* pulPartLen);

#endif //KEEHIVE_MANUALPACK_H


