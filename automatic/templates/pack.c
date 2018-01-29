#include "pack.h"
#include "static/returncodes.h"
#include "static/util.h"
#include "static/derput.h"

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

{% for call, return_ in zipped %}
{% for f, o in ((call, return_), (return_, call)) %}
CK_RV
pack_{{ f.type_name|under }}(
        dercursor* pack_target
        {%- for type, pointerized, var, other in extract_args(f, o ,True) %}
        {%- if loop.first %},{% endif %}
        {%- if type.endswith("_PTR") %}
        const {{ type[:-4] }}* {{ var }}
        {%- else -%}
        {{  type }} {{ var }}
        {%- endif -%}
        {%- if not loop.last %},{% endif -%}
        {% endfor %}
) {
    {{ f.type_name|under }}_t {{ f.type_name|under }};

    memset (&{{ f.type_name|under }}, 0, sizeof({{ f.type_name|under }}));

    {% for type, pointerized, var, other in extract_args(f, o ,True) %}

    // PACKING {{ var }} (type {{ type }})

    {% if type[:-4] in ("CK_ULONG", "CK_RV", "CK_SESSION_HANDLE", "CK_SLOT_ID", "CK_OBJECT_HANDLE", "CK_MECHANISM_TYPE", "CK_USER_TYPE") %}
    der_buf_ulong_t {{ var }}_storage;
    {{ f.type_name|under }}.{{ var }} = der_put_ulong(&{{ var }}_storage, *{{ var }});

    {% elif type == "CK_SLOT_ID_PTR" %}

    uint8_t *innerlist = NULL;
    size_t length = 0;

    CK_RV status = pack_slotList({{ var }}, pulCount, &innerlist, &length, C_GetSlotList_Return_pSlotList_packer);
    if (status != CKR_OK)
        return status;

    {{ f.type_name|under }}.{{ var }}.data.wire.derptr = innerlist;
    {{ f.type_name|under }}.{{ var }}.data.wire.derlen = length;

    {% else %}
    //{{ f.type_name|under }}.{{ var }} =     //WORKINPROGRESS: finish this
    der_put_{{ type }}({{ var }});

    {% endif -%}
    {% endfor %}

    // END OF PACKING

    pack_target->derlen = der_pack({{ f.type_name|under }}_packer,
                                  (const dercursor *) &{{ f.type_name|under }},
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);

    der_pack({{ f.type_name|under }}_packer,
             (const dercursor *) &{{ f.type_name|under }},
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};
{% endfor %}
{% endfor %}