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
        {%- for c in f|extractargs %}
            {%- if loop.first %},{% endif %}
        {{ c.type_decl.type_name|under|ack2ck }} {{ c.identifier }}
            {%- if not loop.last %},{% endif -%}
        {% endfor %}
) {
    {{ f.type_name|under }}_t {{ f.type_name|under }};

    memset (&{{ f.type_name|under }}, 0, sizeof({{ f.type_name|under }}));

    {% for comp in f|extractargs -%}

    {% if comp.type_decl.type_name in ("ACK-ULONG", "ACK-RV", "ACK-SESSION-HANDLE", "ACK-SLOT-ID", "ACK-OBJECT-HANDLE", "ACK-MECHANISM-TYPE", "ACK-USER-TYPE") %}
    der_buf_ulong_t {{ comp.identifier }}_storage;
    {{ f.type_name|under }}.{{ comp.identifier }} = der_put_ulong(&{{ comp.identifier }}_storage, {{ comp.identifier }});

    {% else %}
    // TODO: convert {{ comp.identifier }} ({{ comp.type_decl.type_name }})
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