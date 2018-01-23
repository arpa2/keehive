#include "pack.h"
#include "returncodes.h"
#include "util.h"
#include "manualpack.h"

{% for f in functions %}
static const derwalk {{ f.type_name|under }}_packer[] = {
    DER_PACK_RemotePKCS11_{{ f.type_name|under }},
    DER_PACK_END
};
{% endfor %}

static const derwalk C_GetSlotList_Return_pSlotList_packer[] = {
        DER_PACK_STORE | DER_TAG_INTEGER,
        DER_PACK_END
};

{% for f in functions %}
CK_RV
pack_{{ f.type_name|under }}(
        dercursor * packtarget
        {%- for type, var, other in f|extract_args %}
            {%- if loop.first %},{% endif %}
        {{ type }} {{ var }}{%- if not loop.last %},{% endif -%}
        {% endfor %}
) {
    {{ f.type_name|under }}_t {{ f.type_name|under }};

    memset (&{{ f.type_name|under }}, 0, sizeof({{ f.type_name|under }}));

    {% for type, var, other in f|extract_args %}

    // PACKING {{ var }} (type {{ type }})

    {% if type in ("CK_ULONG", "CK_RV", "CK_SESSION_HANDLE", "CK_SLOT_ID", "CK_OBJECT_HANDLE", "CK_MECHANISM_TYPE", "CK_USER_TYPE") %}
    der_buf_ulong_t {{ var }}_storage;
    {{ f.type_name|under }}.{{ var }} = der_put_ulong(&{{ var }}_storage, {{ var }});

    {% elif type == "CK_SLOT_ID_PTR" %}

    uint8_t *innerlist = NULL;
    size_t length = 0;

    CK_RV status = pack_slotList(&{{ var }}, &pulCount, &innerlist, &length, C_GetSlotList_Return_pSlotList_packer);
    if (status != CKR_OK)
        return status;

    C_GetSlotList_Return.{{ var }}.data.wire.derptr = innerlist;
    C_GetSlotList_Return.{{ var }}.data.wire.derlen = length;

    {% elif type == "CK_ATTRIBUTE_PTR" %}

    // WORK IN PROGRESS
    {{ f.type_name|under }}.{{ var }}

    {% else %}
    // TODO: pack {{ var }} (type {{ type }});
    {% endif -%}
    {% endfor %}

    // END OF PACKING

    packtarget->derlen = der_pack({{ f.type_name|under }}_packer,
                                  (const dercursor *) &{{ f.type_name|under }},
                                  NULL);

    if (packtarget->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    packtarget->derptr = malloc(packtarget->derlen);

    der_pack({{ f.type_name|under }}_packer,
             (const dercursor *) &{{ f.type_name|under }},
             packtarget->derptr + packtarget->derlen);

    return CKR_OK;
};
{% endfor %}