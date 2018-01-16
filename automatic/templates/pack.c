#include "pack.h"
#include "returncodes.h"
#include "util.h"

{% for f in functions %}
static const derwalk {{ f.type_name|under }}_packer[] = {
    DER_PACK_RemotePKCS11_{{ f.type_name|under }},
    DER_PACK_END
};
{% endfor %}


{% for f in functions %}
CK_RV
pack_{{ f.type_name|under }}(
        dercursor * packtarget
        {%- for type, var in f|extractargs %}
            {%- if loop.first %},{% endif %}
        {{ type }} {{ var }}{%- if not loop.last %},{% endif -%}
        {% endfor %}
) {
    {{ f.type_name|under }}_t {{ f.type_name|under }};

    memset (&{{ f.type_name|under }}, 0, sizeof({{ f.type_name|under }}));

    {% for type, var in f|extractargs -%}

    {% if type in ("CK_ULONG", "CK_RV", "CK_SESSION_HANDLE", "CK_SLOT_ID", "CK_OBJECT_HANDLE", "CK_MECHANISM_TYPE", "CK_USER_TYPE") %}
    der_buf_ulong_t {{ var }}_storage;
    {{ f.type_name|under }}.{{ var }} = der_put_ulong(&{{ var }}_storage, {{ var }});

    {% else %}
    // TODO: convert {{ var }} ({{ type }})
    {% endif -%}
    {% endfor %}
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