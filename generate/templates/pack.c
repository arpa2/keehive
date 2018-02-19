#include "pack.h"
#include "static/returncodes.h"
#include "static/util.h"
#include "static/derput.h"
#include "packer.h"

CK_ULONG ulSeedLen = 0;
CK_ULONG_PTR pulSeedLen = &ulSeedLen;

{# this is a bit of an ugly hack, used by converting type CK_ATTRIBUTE_ARRAY. For now i leave this here, sorry #}
{% set mapping = {
        ("C_DeriveKey_Call",  "pTemplate"): "ulAttributeCount",
        ("C_FindObjectsInit_Return",  "pTemplate"): "pulSeedLen /* TODO: this is wrong, determine this number somehow */",
        ("C_GenerateKeyPair_Call",  "pPublicKeyTemplate"): "ulPublicKeyAttributeCount",
        ("C_GenerateKeyPair_Call",  "pPrivateKeyTemplate"): "ulPrivateKeyAttributeCount",
        ("C_GetAttributeValue_Return",  "pTemplate"): "pulSeedLen /* TODO: this is wrong, determine this number somehow */",
        ("C_UnwrapKey_Call",  "pTemplate"): "ulAttributeCount",
}
%}

{% set utf8_len_mapping = { "pPin": "ulPinLen", "pOldPin": "ulOldLen", "pNewPin": "ulNewPin", "pLabel": "pulSeedLen"} %}



{% for call, return_ in zipped %}
{% for f, o in ((call, return_), (return_, call)) %}
/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_{{ f.type_name|under }}(
        dercursor* pack_target
        {%- for type, pointerized, var, other in extract_args(f, o ,True) -%}
        {%- if loop.first %},{% endif %}
        {% if type|is_pointer %}const {{ type|depointerize }}*{% else %}{{ type }}{% endif %} {{ var }}
        {%- if not loop.last %},{% endif %}
        {%- endfor %}
) {
    {{ f.type_name|under }}_t {{ f.type_name|under }};

    memset (&{{ f.type_name|under }}, 0, sizeof({{ f.type_name|under }}));

    // BEGIN OF PACKING

{% for type, pointerized, var, other in extract_args(f, o ,True) %}
    // PACKING {{ var }} (type {{ type }})

{% if type[:-4] in ("CK_ULONG", "CK_RV", "CK_SESSION_HANDLE", "CK_SLOT_ID", "CK_OBJECT_HANDLE", "CK_MECHANISM_TYPE", "CK_USER_TYPE") %}
    der_buf_ulong_t {{ var }}_storage = { 0 };
    {{ f.type_name|under }}.{{ var }} = der_put_ulong({{ var }}_storage, *{{ var }});

{% elif type == "CK_SLOT_ID_ARRAY" %}
    uint8_t *innerlist = NULL;
    size_t length = 0;

    CK_RV status = der_put_{{ type }}({{ var }}, pulCount, &innerlist, &length, pSlotList_packer);
    if (status != CKR_OK)
        return status;

    {{ f.type_name|under }}.{{ var }}.data.wire.derptr = innerlist;
    {{ f.type_name|under }}.{{ var }}.data.wire.derlen = length;


{% elif type == "CK_OBJECT_HANDLE_ARRAY" %}

    uint8_t *innerlist = NULL;
    size_t length = 0;

    CK_RV status = der_put_{{ type }}({{ var }}, pulObjectCount, &innerlist, &length, ObjectHandlerPacker_packer);
    if (status != CKR_OK)
        return status;

    {{ f.type_name|under }}.{{ var }}.wire.derptr = innerlist;
    {{ f.type_name|under }}.{{ var }}.wire.derlen = length;


{% elif type == "CK_BYTE_ARRAY" %}

    uint8_t *{{ var }}_innerlist = NULL;
    size_t {{ var }}_length = 0;
    CK_RV {{ var }}_status = der_put_{{ type }}(
            {{ var }},
            {% if f.type_name.endswith('Return') %}p{% endif %}ul{{ var[1:] }}Len,
            &{{ var }}_innerlist,
            &{{ var }}_length,
            ByteArray_packer);

    if ({{ var }}_status != CKR_OK)
        return {{ var }}_status;

    {{ f.type_name|under }}.{{ var }}.derptr = {{ var }}_innerlist;
    {{ f.type_name|under }}.{{ var }}.derlen = {{ var }}_length;

{% elif type == "CK_ATTRIBUTE_ARRAY" %}
    uint8_t *{{ var }}_innerlist = NULL;
    size_t {{ var }}_length = 0;
    CK_RV {{ var }}_status = der_put_{{ type }}(
            {{ var }},
            {{ mapping.get((f.type_name|under, var), "ulCount") }},
            &{{ var }}_innerlist,
            &{{ var }}_length,
            AttributeArray_packer);

    if ({{ var }}_status != CKR_OK)
        return {{ var }}_status;

    {{ f.type_name|under }}.{{ var }}.wire.derptr = {{ var }}_innerlist;
    {{ f.type_name|under }}.{{ var }}.wire.derlen = {{ var }}_length;

{% elif type == "CK_VOID_PTR" %}
    {{ f.type_name|under }}.{{ var }}.null = der_put_{{ type }}({{ var }});

{% elif type == "CK_C_INITIALIZE_ARGS_PTR" %}
    CK_RV status = der_put_{{ type }}(&{{ f.type_name|under }}, {{ var }});
    if (status != CKR_OK)
        return status;

{% elif type == "CK_MECHANISM_PTR" %}
    der_buf_ulong_t mechanism_buf = { 0 };
    der_buf_ulong_t ulParameterLen_buf = { 0 };
    CK_RV {{ var }}_status = der_put_{{ type }}(&{{ f.type_name|under }}.pMechanism, {{ var }}, mechanism_buf, ulParameterLen_buf);
    if ({{ var }}_status != CKR_OK)
        return {{ var }}_status;

{% elif type == "CK_BBOOL_PTR" %}
    der_buf_bool_t {{ var }}_buf = { 0 };
    {{ f.type_name|under }}.{{ var }} = der_put_{{ type }}({{ var }}_buf, {{ var }});

{% elif type == "CK_UTF8CHAR_ARRAY" %}
    CK_RV {{ var }}_status = der_put_{{ type }}(&{{ f.type_name|under }}.{{ var }}, {{ var }}, {{ utf8_len_mapping[var] }});
    if ({{ var }}_status != CKR_OK)
        return {{ var }}_status;

{% elif type == "UTF8String" %}
    // TODO: in case of pLabel we now use pulSeedLen, which is wrong.
    CK_RV {{ var }}_status = der_put_{{ type }}(&{{ f.type_name|under }}.{{ var }}, {{ var }}, {{ utf8_len_mapping[var] }});
    if ({{ var }}_status != CKR_OK)
        return {{ var }}_status;

{% elif type == "CK_FLAGS_PTR" %}
    der_buf_ulong_t {{ var }}_storage = { 0 };
    {{ f.type_name|under }}.{{ var }} = der_put_{{ type }}({{ var }}_storage, {{ var }});

{% elif type == "ANY" %}
    // TODO: finish this in case not null ({{ type }} {{ var }})
{% if f.type_name|under == "C_OpenSession_Call" %}
    {{ f.type_name|under }}.{{ var }}.null = der_put_null();
{% else %}
    {{ f.type_name|under }}.{{ var }} = der_put_null();
{% endif %}

{% elif type == "CK_NOTIFY" %}
    // TODO: finish this in case not null ({{ type }} {{ var }})
    if (*{{ var }} != NULL)
        return CKR_KEEHIVE_NOT_IMPLEMENTED_ERROR;

    {{ f.type_name|under }}.{{ var }}.null = der_put_null();

{% elif type == "CK_INFO_PTR" %}
    manufacturerID_t manufacturerID_buf = { 0 };
    libraryDescription_t libraryDescription_buf = { 0 };
    der_buf_ulong_t flags_buf = { 0 };
    der_buf_char_t libraryVersion_minor_buf = { 0 };
    der_buf_char_t libraryVersion_major_buf = { 0 };
    der_buf_char_t cryptokiVersion_minor_buf = { 0 };
    der_buf_char_t cryptokiVersion_major_buf = { 0 };
    CK_RV {{ var }}_status = der_put_{{ type }}(
            &{{ f.type_name|under }}.{{ var }},
            {{ var }},
            manufacturerID_buf,
            libraryDescription_buf,
            flags_buf,
            libraryVersion_minor_buf,
            libraryVersion_major_buf,
            cryptokiVersion_minor_buf,
            cryptokiVersion_major_buf
);
    if ({{ var }}_status != CKR_OK)
        return {{ var }}_status;

{% elif type == "CK_MECHANISM_TYPE_ARRAY" %}
    uint8_t *{{ var }}_innerlist = NULL;
    size_t {{ var }}_length = 0;
    CK_RV {{ var }}_status = der_put_{{ type }}(
        {{ var }},
        pulCount,
        &{{ var }}_innerlist,
        &{{ var }}_length,
        AttributeArray_packer);

    if ({{ var }}_status != CKR_OK)
        return {{ var }}_status;

    if ({{var}} == NULL_PTR) {
        {{ f.type_name|under }}.{{ var }}.null = der_put_null();
    } else {
        {{ f.type_name|under }}.{{ var }}.data.wire.derptr = {{ var }}_innerlist;
        {{ f.type_name|under }}.{{ var }}.data.wire.derlen = {{ var }}_length;
    }

{% elif type == "CK_MECHANISM_INFO_PTR" %}
    der_buf_ulong_t flags_buf = { 0 };
    der_buf_ulong_t ulMaxKeySize_buf = { 0 };
    der_buf_ulong_t ulMinKeySize_buf = { 0 };

    CK_RV {{ var }}_status = der_put_{{ type }}(
        &{{ f.type_name|under }}.{{ var }},
        {{ var }},
        flags_buf,
        ulMaxKeySize_buf,
        ulMinKeySize_buf
    );

    if ({{ var }}_status != CKR_OK)
        return {{ var }}_status;

{% elif type == "CK_SESSION_INFO_PTR" %}
    der_buf_ulong_t flags_buf = { 0 };
    der_buf_ulong_t slotID_buf = { 0 };
    der_buf_ulong_t state_buf = { 0 };
    der_buf_ulong_t ulDeviceError_buf = { 0 };

    CK_RV {{ var }}_status = der_put_{{ type }}(
        &{{ f.type_name|under }}.{{ var }},
        {{ var }},
        flags_buf,
        slotID_buf,
        state_buf,
        ulDeviceError_buf
    );

    if ({{ var }}_status != CKR_OK)
        return {{ var }}_status;

{% elif type == "CK_SLOT_INFO_PTR" %}
    der_buf_ulong_t flags_buf = { 0 };
    manufacturerID_t manufacturerID_buf = { 0 };
    slotDescription_t slotDescription_buf = { 0 };
    der_buf_ulong_t firmwareVersion_minor_buf = { 0 };
    der_buf_ulong_t firmwareVersion_major_buf = { 0 };
    der_buf_ulong_t hardwareVersion_minor_buf = { 0 };
    der_buf_ulong_t hardwareVersion_major_buf = { 0 };

    CK_RV {{ var }}_status = der_put_{{ type }}(
        &{{ f.type_name|under }}.{{ var }},
        {{ var }},
        flags_buf,
        manufacturerID_buf,
        slotDescription_buf,
        firmwareVersion_minor_buf,
        firmwareVersion_major_buf,
        hardwareVersion_minor_buf,
        hardwareVersion_major_buf
    );

    if ({{ var }}_status != CKR_OK)
        return {{ var }}_status;


{% elif type == "CK_TOKEN_INFO_PTR" %}
    der_buf_ulong_t firmwareVersion_minor_buf = { 0 };
    der_buf_ulong_t firmwareVersion_major_buf = { 0 };
    der_buf_ulong_t hardwareVersion_minor_buf = { 0 };
    der_buf_ulong_t hardwareVersion_major_buf = { 0 };
    der_buf_ulong_t flags_buf = { 0 };
    manufacturerID_t manufacturerID_buf = { 0 };
    label_t label_buf = { 0 };
    model_t model_buf = { 0 };
    serialNumber_t serialNumber_buf = { 0 };
    der_buf_ulong_t ulMaxSessionCount_buf = { 0 };
    der_buf_ulong_t ulSessionCount_buf = { 0 };
    der_buf_ulong_t ulMaxRwSessionCount_buf = { 0 };
    der_buf_ulong_t ulRwSessionCount_buf = { 0 };
    der_buf_ulong_t ulMaxPinLen_buf = { 0 };
    der_buf_ulong_t ulMinPinLen_buf = { 0 };
    der_buf_ulong_t ulTotalPublicMemory_buf = { 0 };
    der_buf_ulong_t ulFreePublicMemory_buf = { 0 };
    der_buf_ulong_t ulTotalPrivateMemory_buf = { 0 };
    der_buf_ulong_t ulFreePritvateMemory_buf = { 0 };
    utcTime_t utcTime_buf = { 0 };

    CK_RV {{ var }}_status = der_put_{{ type }}(
        &{{ f.type_name|under }}.{{ var }},
        {{ var }},
        firmwareVersion_minor_buf,
        firmwareVersion_major_buf,
        hardwareVersion_minor_buf,
        hardwareVersion_major_buf,
        flags_buf,
        manufacturerID_buf,
        label_buf,
        model_buf,
        serialNumber_buf,
        ulMaxSessionCount_buf,
        ulSessionCount_buf,
        ulMaxRwSessionCount_buf,
        ulRwSessionCount_buf,
        ulMaxPinLen_buf,
        ulMinPinLen_buf,
        ulTotalPublicMemory_buf,
        ulFreePublicMemory_buf,
        ulTotalPrivateMemory_buf,
        ulFreePritvateMemory_buf,
        utcTime_buf
    );

    if ({{ var }}_status != CKR_OK)
        return {{ var }}_status;


{% else %}
    // TODO: ERROR - unknown type
    der_put_{{ type }}({{ var }});

{% endif -%}
{% else %}
    // argument list is empty
    {{ f.type_name|under }}.empty = der_put_null();
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