#include "pack.h"
#include "returncodes.h"
#include "util.h"
#include "derput.h"
#include "packer.h"


// todo: this is a hack to work around  issue #6
CK_ULONG ulSeedLen = 0;
CK_ULONG_PTR pulSeedLen = &ulSeedLen;

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
            &{{ var }}_length);

    if ({{ var }}_status != CKR_OK)
        return {{ var }}_status;

    {{ f.type_name|under }}.{{ var }}.derptr = {{ var }}_innerlist;
    {{ f.type_name|under }}.{{ var }}.derlen = {{ var }}_length;

{% elif type == "CK_ATTRIBUTE_ARRAY" %}
    uint8_t *{{ var }}_innerlist = NULL;
    size_t {{ var }}_length = 0;
    CK_RV {{ var }}_status = der_put_{{ type }}(
            {{ var }},
            {{ len_mapper(f.type_name|under, var, True) }},
            &{{ var }}_innerlist,
            &{{ var }}_length);

    if ({{ var }}_status != CKR_OK)
        return {{ var }}_status;

    {{ f.type_name|under }}.{{ var }}.wire.derptr = {{ var }}_innerlist;
    {{ f.type_name|under }}.{{ var }}.wire.derlen = {{ var }}_length;

{% elif type == "CK_VOID_PTR" %}
    {{ f.type_name|under }}.{{ var }}.null = der_put_{{ type }}({{ var }});

{% elif type == "CK_C_INITIALIZE_ARGS_PTR" %}
    DER_BUF_BITSTRING(flags_buf, 8 * 8);
    der_buf_bool_t createMutex_bool_buf = { 0 };
    der_buf_bool_t destroyMutex_bool_buf = { 0 };
    der_buf_bool_t lockMutex_bool_buf = { 0 };
    der_buf_bool_t unlockMutex_bool_buf = { 0 };
    CK_RV status = der_put_{{ type }}(
        &{{ f.type_name|under }},
        {{ var }},
        flags_buf,
        createMutex_bool_buf,
        destroyMutex_bool_buf,
        lockMutex_bool_buf,
        unlockMutex_bool_buf
);
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

{% elif type in ("CK_UTF8CHAR_ARRAY", "UTF8String") %}
    CK_RV {{ var }}_status = der_put_{{ type }}(&{{ f.type_name|under }}.{{ var }}, {{ var }}, {% if var != "pLabel" %}*{% endif %}{{ len_mapper(f.type_name|under, var) }});
    if ({{ var }}_status != CKR_OK)
        return {{ var }}_status;

{% elif type == "CK_FLAGS_PTR" %}
    DER_BUF_BITSTRING({{ var }}_storage, 8 * 8);
    {{ f.type_name|under }}.{{ var }} = der_put_{{ type }}({{ var }}_storage, *{{ var }});

{% elif type == "ANY" %}
    // TODO: finish this in case not null ({{ type }} {{ var }})
{% if f.type_name|under == "C_OpenSession_Call" %}
    {{ f.type_name|under }}.{{ var }}.null = der_null;
{% else %}
    {{ f.type_name|under }}.{{ var }} = der_null;
{% endif %}

{% elif type == "CK_NOTIFY" %}
    if (*{{ var }} != NULL) {
        der_buf_bool_t {{ var }}_present_buf = { 0 };
        {{ f.type_name|under }}.{{ var }}.present = der_put_bool({{ var }}_present_buf, TRUE);
        {{ f.type_name|under }}.{{ var }}.null = der_empty;
    } else {
        {{ f.type_name|under }}.{{ var }}.null = der_null;
        {{ f.type_name|under }}.{{ var }}.present = der_empty;
    }

{% elif type == "CK_INFO_PTR" %}
    manufacturerID_t manufacturerID_buf = { 0 };
    libraryDescription_t libraryDescription_buf = { 0 };
    DER_BUF_BITSTRING(flags_buf, 8 * 8);
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
        mechanism_type_array_packer);

    if ({{ var }}_status != CKR_OK)
        return {{ var }}_status;

    if ({{var}} == NULL_PTR) {
        {{ f.type_name|under }}.{{ var }}.null = der_null;
        {{ f.type_name|under }}.{{ var }}.data.wire = der_empty;
    } else {
        {{ f.type_name|under }}.{{ var }}.data.wire.derptr = {{ var }}_innerlist;
        {{ f.type_name|under }}.{{ var }}.data.wire.derlen = {{ var }}_length;
        {{ f.type_name|under }}.{{ var }}.null = der_empty;
    }

{% elif type == "CK_MECHANISM_INFO_PTR" %}
    DER_BUF_BITSTRING(flags_buf, 8 * 8);
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
    DER_BUF_BITSTRING(flags_buf, 8 * 8);
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
    DER_BUF_BITSTRING(flags_buf, 8 * 8);
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
    DER_BUF_BITSTRING(flags_buf, 8 * 8);
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
    {{ f.type_name|under }}.empty = der_null;
{% endfor %}
    // END OF PACKING

    pack_target->derlen = der_pack({{ f.type_name|under }}_packer,
                                  (const dercursor *) &{{ f.type_name|under }},
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack({{ f.type_name|under }}_packer,
             (const dercursor *) &{{ f.type_name|under }},
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};
{% endfor %}
{% endfor %}