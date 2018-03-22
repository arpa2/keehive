#include "cryptoki.h"
#include "server.h"
#include "pack.h"
#include "unpack.h"


{% for call, return_ in zipped %}
{% set f = call.type_name[:-5]|under %}
CK_RV
{{ f }}(
    {%- for type, pointerized, value in combined_args(call, return_) %}
    {{ type }} {{ value }}{%- if not loop.last %},{% endif -%}
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
        {%- for type_, pointerized, var, other in extract_args(call, return_, False) -%}
        {%- if loop.first %},{% endif %}
        {% if not type_|is_pointer and not other and not type_|is_notify %}&{% endif %}{{- var -}}{%- if not loop.last %},{% endif %}
        {%- endfor %}
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

    // todo: not allocated??
    //free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    {# unpack the dercursor into the placeholders #}
    status = unpack_{{ return_.type_name|under }}(
        &dercursorOut
        {%- for type_, pointerized, var, other in extract_args(return_, call, True) -%}
        {%- if loop.first %},{% endif %}
        {% if not type_|is_pointer and not other %}&{% endif %}{{- var -}}{%- if not loop.last %},{% endif %}
        {%- endfor %}
    );

    if (status != CKR_OK) {
        server_End();
        return status;
    };

    // todo: not allocated??
    //free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        server_End();
        return retval_pointed;
    };

    status = server_End();
    if (status != CKR_OK) {
        server_End();
        return status;
    };

    return CKR_OK;
}
{% endfor %}