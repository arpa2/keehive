#include "packer.h"


{% for f in functions %}
const derwalk {{ f.type_name|under }}_packer[] = {
DER_PACK_RemotePKCS11_{{ f.type_name|under }},
DER_PACK_END
};
{% endfor %}

const derwalk pSlotList_packer[] = {
        DER_PACK_STORE | DER_TAG_INTEGER,
        DER_PACK_END
};

const derwalk mechanism_type_array_packer[] = {
        DER_PACK_STORE | DER_TAG_INTEGER,
        DER_PACK_END
};

const derwalk ObjectHandlerPacker_packer[] = {
        DER_PACK_STORE | DER_TAG_INTEGER,
        DER_PACK_END
};

const derwalk ulong_array_packer[] = {
        DER_PACK_STORE | DER_TAG_INTEGER,
        DER_PACK_END
};

const derwalk ByteArray_packer[] = {
        DER_PACK_STORE | DER_TAG_INTEGER,
        DER_PACK_END
};

const derwalk attribute_array_packer[] = {
        DER_PACK_STORE | DER_PACK_RemotePKCS11_ACK_ATTRIBUTE,
        DER_PACK_END
};

const derwalk ACK_DATE_packer[] = {
        DER_PACK_RemotePKCS11_ACK_DATE,
        DER_PACK_END
};

