#include "client.h"
#include "server.h"
#include "pack.h"
#include "unpack.h"


{% for call, return_ in zipped %}
{% set f = call.type_name[:-5]|under %}
CK_RV
client_{{ f }}(
    {%- for c in call|extractargs %}
    {{ c.type_decl.type_name|under|ack2ck }} {{ c.identifier }}{%- if not loop.last %},{%- endif -%}
    {% endfor %}
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    status = server_Begin();
    if (status != CKR_OK)
        return status;

    {% for c in call|extractargs %}
    memset (&{{ c.identifier }}, 0, sizeof ({{ c.identifier }}));
    {%- endfor %}

    status = pack_{{ f }}_Call(
        &dercursorIn
        {%- for c in call|extractargs -%}
        {%- if loop.first %},
        {% endif -%}
        {{- c.identifier -}}
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
    {% for c in return_|extractargs -%}
    {{ c.type_decl.type_name|under|ack2ck }} return_{{ c.identifier }};
    {% endfor %}

    {# unpack the dercursor into the placeholders #}
    status = unpack_{{ return_.type_name|under }}(
        &dercursorOut
        {%- for c in return_|extractargs -%}
        {%- if loop.first -%},
        {% endif -%}
        &return_{{- c.identifier -}}
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