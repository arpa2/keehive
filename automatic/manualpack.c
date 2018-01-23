#include "manualpack.h"
#include "types.h"
#include "quick-der/api.h"
#include "util.h"


static const derwalk pValue_packer[] = {
        DER_PACK_STORE | DER_TAG_INTEGER,
        DER_PACK_END
};

typedef struct DER_OVLY_RemotePKCS11_ACK_ATTRIBUTE_pValue ACK_ATTRIBUTE_pValue_t;

void
manualpack_CK_ATTRIBUTE(CK_ATTRIBUTE attribute) {
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
}

