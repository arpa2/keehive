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
        {%- for c in f|extractargs %}
        {%- if loop.first %},{% endif %}
        {{ c.type_decl.type_name|under|ack2ck }}* {{ c.identifier }}
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
    {% if comp.type_decl.type_name in ("ACK-ULONG", "ACK-RV", "ACK-SESSION-HANDLE", "ACK-SLOT-ID", "ACK-OBJECT-HANDLE", "ACK-MECHANISM-TYPE", "ACK-USER-TYPE") %}
    status = der_get_ulong({{ f.type_name|under }}.{{ comp.identifier }}, {{ comp.identifier }});
    if (status == -1)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;
    {% else %}
    // TODO: convert {{ comp.identifier }} ({{ comp.type_decl.type_name }})
    {% endif %}
    {% endfor %}

    return CKR_OK;
};
{% endfor %}
