#include "types.h"
#include "pkcs11/pkcs11unix.h"
#include "unpack.h"
#include "util.h"

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
pack_{{ f.type_name|under }}(
        dercursor * packed
        {%- for c in f.type_decl.components if not c.type_decl.type_name == 'NULL' %}
        {%- if loop.first %},{% endif %}
        {{ c.type_decl.type_name|under|ack2ck }} {{ c.identifier }}
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

    {% for comp in f.type_decl.components -%}
    // TODO: convert {{ comp.identifier }} ({{ comp.type_decl.type_name|under }})
    {% endfor %}

    return CKR_OK;
};
{% endfor %}
