#include "server.h"
#include "pack.h"
#include "unpack.h"
#include "call.h"
#include "static/returncodes.h"
#include "settings.h"
#include "loader.h"


const char path[] = LIBSOFTHSM2_LIBRARY;


CK_FUNCTION_LIST_PTR function_list = NULL;


CK_RV
server_Begin(){
    CK_RV status = cryptoki_loader(path, &function_list);

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_End(){
    function_list = NULL;
    return CKR_OK;
}

{% for call, return_ in zipped %}
{% set f = call.type_name[:-5]|under %}
CK_RV
server_{{ f }}(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    {# Create unpack variable placeholders #}
    {% for type_, pointerized, identifier, other in extract_args(call, return_) -%}
    {{ initialise_unpack_placeholders(type_, identifier) }}
    {% endfor %}



    {# unpack the dercursor into the placeholders -#}
    CK_RV status = unpack_{{ call.type_name|under }}(
        cursorIn
        {%- for type_, pointerized, identifier, other in extract_args(call, return_) -%}
        {%- if loop.first %},{% endif %}
        {% if not type_|is_pointer and not type_|is_notify %}&{% endif %}{{- identifier -}}{%- if not loop.last %},{% endif %}
        {%- endfor %}
    );

    if (status != CKR_OK)
        return status;

    {# Create server response variable placeholders #}
    {% for type_, pointerized, identifier, other in extract_args(return_, call) -%}
    {% if not other %}{{ initialise_unpack_placeholders(type_, identifier) }}{% endif %}
    {% endfor %}

    retval = call_{{ f }}(
        &function_list
        {%- for type_, pointerized, value in combined_args(call, return_, disable_pointerisation=False) -%}
        {%- if loop.first %},{% endif %}
        {% if pointerized %}&{% endif %}{{ value }}{% if not loop.last %},{% endif %}  // {{ type_ }}
        {%- endfor %}
    );

    status = pack_{{ f }}_Return(
        CursorOut
        {%- for type_, pointerized, value, other in extract_args(return_, call, False) -%}
        {%- if loop.first %},{% endif %}
        {% if not type_|is_pointer %}&{% endif %}{{ value }}{% if not loop.last %},{% endif %}  // {{ type_ }}
        {%- endfor %}
    );

    {# Free the malloced things #}
    {%- for type, pointerized, value in combined_args(call, return_) -%}
    {{- free(type, value) -}}
    {%- endfor %}

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}
{% endfor %}