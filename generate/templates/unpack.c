#include "types.h"
#include "cryptoki.h"
#include "unpack.h"
#include "derget.h"
#include "util.h"
#include "returncodes.h"
#include "packer.h"

{% for call, return_ in zipped %}
{% for f, o in ((call, return_), (return_, call)) %}
CK_RV
unpack_{{ f.type_name|under }}(
        dercursor* packed
        {%- for type, pointerized, var, other in extract_args(f, o ,True) %}
        {%- if loop.first %},{% endif %}
        {{  type }} {{ var }}
        {%- if not loop.last %},{% endif -%}
        {% endfor %}
) {

    {{ f.type_name|under }}_t {{ f.type_name|under }};

    memset(&{{ f.type_name|under }}, 0, sizeof({{ f.type_name|under }}));

    dercursor cursor_copy = *packed; // der_unpack modifies cursor
    int status = der_unpack(&cursor_copy,
                            {{ f.type_name|under }}_packer,
                            (dercursor *) &{{ f.type_name|under }},
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING

{% for type, pointerized, var, other in extract_args(f, o, True) -%}
{% if type[:-4] in ("CK_ULONG", "CK_RV", "CK_SESSION_HANDLE", "CK_SLOT_ID", "CK_OBJECT_HANDLE", "CK_MECHANISM_TYPE", "CK_USER_TYPE") %}
    status = der_get_ulong({{ f.type_name|under }}.{{ var }}, {{ var }});
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;

{% elif type  in ("ANY", "CK_VOID_PTR") %}
    // todo: do we need to convert {{ type }}?
{% elif type  == "CK_ATTRIBUTE_ARRAY" %}
    status = der_get_{{ type }}({{ f.type_name|under }}.{{ var }}, {{ var }});
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;
{% elif type == "CK_MECHANISM_TYPE_ARRAY" %}
    status = der_get_{{ type }}({{ f.type_name|under }}.{{ var }}.data, {{ var }});
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;
{% else %}
    status = der_get_{{ type }}({{ f.type_name|under }}.{{ var }}, {{ var }});
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;
{% endif %}
{% endfor %}

    return CKR_OK;
};
{% endfor %}
{% endfor %}
