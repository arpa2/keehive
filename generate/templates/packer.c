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

const derwalk ObjectHandlerPacker_packer[] = {
        DER_PACK_STORE | DER_TAG_INTEGER,
        DER_PACK_END
};

// TODO: is this right?
const derwalk AttributeArray_packer[] = {
        DER_PACK_STORE | DER_TAG_INTEGER,
        DER_PACK_END
};

const derwalk ByteArray_packer[] = {
        DER_PACK_STORE | DER_TAG_INTEGER,
        DER_PACK_END
};
