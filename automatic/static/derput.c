#include "derput.h"

static const derwalk pValue_packer[] = {
        DER_PACK_STORE | DER_TAG_INTEGER,
        DER_PACK_END
};

typedef struct DER_OVLY_RemotePKCS11_ACK_ATTRIBUTE_pValue ACK_ATTRIBUTE_pValue_t;

void
der_put_CK_ATTRIBUTE(const CK_ATTRIBUTE_PTR* attribute) {
    /*
    ACK_ATTRIBUTE_t ACK_ATTRIBUTE;
    ACK_ATTRIBUTE_pValue_t ACK_ATTRIBUTE_pValue;

    der_buf_ulong_t type;
    ACK_ATTRIBUTE.type = der_put_ulong(&type, attribute.type);

    der_buf_ulong_t ulValueLen;
    ACK_ATTRIBUTE.ulValueLen = der_put_ulong(&ulValueLen, attribute.ulValueLen);

    if (attribute.ulValueLen == 0) {
        ACK_ATTRIBUTE.pValue.null = der_put_null();
    } else {
        dercursor pValue;
        attribute.pValue;
        ACK_ATTRIBUTE.pValue.data = pValue;
        size_t tmp = der_pack(pValue_packer, &ACK_ATTRIBUTE_pValue, NULL);
    }
     */
}


void der_put_CK_ATTRIBUTE_ARRAY(const CK_ATTRIBUTE* pTemplate) {};

void der_put_CK_BYTE_ARRAY(const CK_BYTE* pEncryptedData) {};

void der_put_CK_MECHANISM_PTR(const CK_MECHANISM* pMechanism) {};

void der_put_CK_MECHANISM_INFO_PTR(const CK_MECHANISM_INFO* pInfo) {};

void der_put_CK_VOID_PTR(const CK_VOID_PTR* pReserved) {};

void der_put_CK_UTF8CHAR_ARRAY(const CK_UTF8CHAR* pPin) {};

void der_put_UTF8String(UTF8String pPin) {};

void der_put_CK_BBOOL_PTR(const CK_BBOOL* tokenPresent) {};

void der_put_CK_FLAGS_PTR(const CK_FLAGS* flags) {};

void der_put_ANY(ANY pApplication) {};

void der_put_CK_NOTIFY(CK_NOTIFY notify) {};

void der_put_CK_C_INITIALIZE_ARGS_PTR(const CK_C_INITIALIZE_ARGS* pInitArgs) {};

void der_put_CK_INFO_PTR(const CK_INFO* pInfo) {};

void der_put_CK_SESSION_INFO_PTR(const CK_SESSION_INFO* pInfo) {};

void der_put_CK_SLOT_INFO_PTR(const CK_SLOT_INFO* pInfo) {};

void der_put_CK_TOKEN_INFO_PTR(const CK_TOKEN_INFO* pInfo) {};

void der_put_CK_OBJECT_HANDLE_ARRAY(const CK_OBJECT_HANDLE* phObject) {};

void der_put_CK_MECHANISM_TYPE_ARRAY(const CK_MECHANISM_TYPE* pMechanismList) {};

void der_put_CK_SLOT_ID_ARRAY(const CK_SLOT_ID* pSlotid) {};