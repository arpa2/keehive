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

static const derwalk pSlotList_packer[] = {
        DER_PACK_STORE | DER_TAG_INTEGER,
        DER_PACK_END
};


/*
 * used by:
 *
 * C_CopyObject_Call
 * C_CreateObject_Call
 * C_DeriveKey_Call
 * C_FindObjectsInit_Call
 * C_FindObjectsInit_Return
 * C_GenerateKey_Call
 * C_GenerateKeyPair_Call_pPublicKeyTemplate_packer
 * C_GenerateKeyPair_Call_pPrivateKeyTemplate_packer
 * C_GetAttributeValue_Call
 * C_SetAttributeValue_Call
 * C_UnwrapKey_Call
 *
 *
*/
static const derwalk AttributeArray_packer[] = {
        DER_PACK_STORE | DER_TAG_INTEGER,
        DER_PACK_END
};

static const derwalk ByteArray_packer[] = {
        DER_PACK_STORE | DER_TAG_INTEGER,
        DER_PACK_END
};


{% for call, return_ in zipped %}
{% for f, o in ((call, return_), (return_, call)) %}
CK_RV
pack_{{ f.type_name|under }}(
        dercursor* pack_target
        {%- for type, pointerized, var, other in extract_args(f, o ,True) -%}
        {%- if loop.first %},{% endif %}
        {% if type.endswith("_PTR") %}const {{ type[:-4] }}*{% else %}{{ type }}{% endif %} {{ var }}
        {%- if not loop.last %},{% endif %}
        {%- endfor %}
) {
    {{ f.type_name|under }}_t {{ f.type_name|under }};

    memset (&{{ f.type_name|under }}, 0, sizeof({{ f.type_name|under }}));

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


    {% elif type == "CK_BYTE_ARRAY" %}

/*
 these are the functions and byte arrays that have a len variable prepended with a p
pack_C_Decrypt_Return pData
pack_C_DecryptDigestUpdate_Return pPart
pack_C_DecryptFinal_Return pLastPart
pack_C_DecryptUpdate_Return pPart
pack_C_DecryptVerifyUpdate_Return pPart
pack_C_Digest_Return pDigest
pack_C_DigestEncryptUpdate_Return pEncryptedPart
pack_C_DigestFinal_Return pDigest
 */

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

{% set mapping = {
        ("C_DeriveKey_Call",  "pTemplate"): "ulAttributeCount",
        ("C_FindObjectsInit_Return",  "pTemplate"): 0,
        ("C_GenerateKeyPair_Call",  "pPublicKeyTemplate"): "ulPublicKeyAttributeCount",
        ("C_GenerateKeyPair_Call",  "pPrivateKeyTemplate"): "ulPrivateKeyAttributeCount",
        ("C_GetAttributeValue_Return",  "pTemplate"): 0,
        ("C_UnwrapKey_Call",  "pTemplate"): "ulAttributeCount",
}
%}

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


    {% else %}
    // WORKINPROGRESS: finish this
    //{{ f.type_name|under }}.{{ var }} = der_put_{{ type }}({{ var }});
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