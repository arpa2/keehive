#include "client.h"
#include "server.h"
#include "pack.h"
#include "unpack.h"


{% for call, return_ in zipped %}
{% set f = call.type_name[:-5]|under %}
CK_RV
client_{{ f }}(
    {%- for type, var, pointer in combined_args(call, return_) %}
    {{ type }} {{ var }}{%- if not loop.last %},{%- endif -%}
    {% endfor %}
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    status = server_Begin();
    if (status != CKR_OK)
        return status;

    {# // disable this for now since we probable don't need it
    {% for type, var in call|extractargs %}
    memset (&{{ var }}, 0, sizeof ({{ var }}));
    {%- endfor %}
    #}

    status = pack_{{ f }}_Call(
        &dercursorIn
        {%- for type, var, other in extract_args(call, return_) -%}
        {%- if loop.first %},
        {% endif -%}
        {% if other %}*{% endif %}{{- var -}}
        {%- if not loop.last %},
        {% endif -%}
        {% endfor %}
    );

    if (status != CKR_OK) {
        server_End();
        return status;
    };

    status = server_{{ f }}(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        server_End();
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval;

    {# unpack the dercursor into the placeholders #}
    status = unpack_{{ return_.type_name|under }}(
        &dercursorOut
        {%- for type, var, other in extract_args(return_, call) -%}
        {%- if loop.first -%},
        {% endif -%}
        {% if not other %}&{% endif %}{{ var }}{% if not loop.last %},{% endif %}
        {% endfor %}
    );

    if (status != CKR_OK) {
        server_End();
        return status;
    };

    free(dercursorOut.derptr);

    if (retval != CKR_OK) {
        server_End();
        return retval;
    };

    status = server_End();
    if (status != CKR_OK) {
        server_End();
        return status;
    };

    return CKR_OK;
}
{% endfor %}