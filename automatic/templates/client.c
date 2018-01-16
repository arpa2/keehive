#include "client.h"
#include "server.h"
#include "pack.h"
#include "unpack.h"


{% for call, return_ in zipped %}
{% set f = call.type_name[:-5]|under %}
CK_RV
client_{{ f }}(
    {%- for type, var in call|extractargs %}
    {{ type }} {{ var }}{%- if not loop.last %},{%- endif -%}
    {% endfor %}
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    status = server_Begin();
    if (status != CKR_OK)
        return status;

    {% for type, var in call|extractargs %}
    memset (&{{ var }}, 0, sizeof ({{ var }}));
    {%- endfor %}

    status = pack_{{ f }}_Call(
        &dercursorIn
        {%- for type, var in call|extractargs -%}
        {%- if loop.first %},
        {% endif -%}
        {{- var -}}
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

    {# Create variable placeholders #}
    {% for type, var in return_|extractargs -%}
    {{ type }} return_{{ var }};
    {% endfor %}

    {# unpack the dercursor into the placeholders #}
    status = unpack_{{ return_.type_name|under }}(
        &dercursorOut
        {%- for type, var in return_|extractargs -%}
        {%- if loop.first -%},
        {% endif -%}
        &return_{{- var -}}
        {%- if not loop.last %},
        {% endif -%}
        {% endfor %}
    );

    if (status != CKR_OK) {
        server_End();
        return status;
    };

    free(dercursorOut.derptr);

    if (return_retval != CKR_OK) {
        server_End();
        return return_retval;
    };

    status = server_End();
    if (status != CKR_OK) {
        server_End();
        return status;
    };

    return CKR_OK;
}
{% endfor %}