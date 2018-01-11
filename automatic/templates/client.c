#include "client.h"

{% for call in calls %}
{% set f = call.type_name[:-5]|under %}
CK_RV
Remote_{{ f }}(
        {%- for c in call.type_decl.components %}
        {{ c.type_decl.type_name|under }} {{ c.identifier }}
        {%- if not loop.last %}, {% endif -%}
        {% endfor %}
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    status = server_Begin();
    if (status != CKR_OK)
        return status;

    {% for c in call.type_decl.components %}
    memset ({{ c.identifier }}, 0, sizeof (*{{ c.identifier }}));
    {%- endfor %}

    status = pack_{{ f }}_Call(
        &dercursorIn
        {%- for c in call.type_decl.components -%}
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

    status = unpack_{{ f }}_Return(
        &dercursorOut
        {%- for c in call.type_decl.components -%}
        {%- if loop.first -%},
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

    free(dercursorOut.derptr);

    status = server_End();
    if (status != CKR_OK) {
        server_End();
        return status;
    };

    return CKR_OK;
}
{% endfor %}