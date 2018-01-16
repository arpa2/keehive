#include "types.h"
#include "pkcs11/pkcs11unix.h"
#include "unpack.h"
#include "util.h"
#include "returncodes.h"

// always use repeat = 1 for der_unpack, unless you need to iterate over a SEQUENCE OF. In this case set it to
// the length of the SEQUENCE
#define REPEAT 1


{% for f in functions %}
static const derwalk {{ f.type_name|under }}_packer[] = {
        DER_PACK_RemotePKCS11_{{ f.type_name|under }},
        DER_PACK_END
};
{% endfor %}


{% for f in functions %}
CK_RV
unpack_{{ f.type_name|under }}(
        dercursor* packed
        {%- for type, var in extractargs(f) %}
        {%- if loop.first %},{% endif %}
        {{  type }}* {{ var }}
        {%- if not loop.last %},{% endif -%}
        {% endfor %}
) {

    {{ f.type_name|under }}_t {{ f.type_name|under }};

    memset(&{{ f.type_name|under }}, 0, sizeof({{ f.type_name|under }}));

    int status = der_unpack(packed,
                            {{ f.type_name|under }}_packer,
                            (dercursor *) &{{ f.type_name|under }},
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    {% for type, var in extractargs(f) -%}
    {% if type in ("CK_ULONG", "CK_RV", "CK_SESSION_HANDLE", "CK_SLOT_ID", "CK_OBJECT_HANDLE", "CK_MECHANISM_TYPE", "CK_USER_TYPE") %}
    status = der_get_ulong({{ f.type_name|under }}.{{ var }}, {{ var }});
    if (status == -1)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;
    {% else %}
    // TODO: convert {{ type }} ({{ var }})
    {% endif %}
    {% endfor %}

    return CKR_OK;
};
{% endfor %}
