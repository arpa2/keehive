#include "pack.h"


{% for f in functions %}
CK_RV
pack_{{ f.type_name|under }}(
        dercursor * packtarget
        {%- for comp in f.type_decl.components %}
            {%- if loop.first %},{% endif %}
        {{ comp.type_decl.type_name|under }} {{ comp.identifier }}
            {%- if not loop.last %},{% endif -%}
        {% endfor %}
) {
    {{ f.type_name|under }}_t {{ f.type_name|under }};

    memset (&{{ f.type_name|under }}, 0, sizeof({{ f.type_name|under }}));

    {% for comp in f.type_decl.components -%}
    // TODO: convert {{ comp.identifier }} ({{ comp.type_decl.type_name|under }})
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

    return CK_OK;
};
{% endfor %}