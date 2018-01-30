#include "server.h"
#include "pack.h"
#include "unpack.h"
#include "call.h"
#include "static/returncodes.h"
#include "settings.h"


const char path[] = LIBSOFTHSM2_LIBRARY;


CK_FUNCTION_LIST_PTR function_list = NULL_PTR;


CK_RV
server_Begin(){
    CK_RV status = call_C_GetFunctionList(path, &function_list);

    if (status != CKR_OK)
        return status;

    status = call_C_Initialize(&function_list, NULL_PTR);
    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_End(){
    CK_RV status = call_C_Finalize(&function_list, NULL_PTR);

    if (status != CKR_OK)
        return status;

    function_list = NULL_PTR;
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

    {# Create variable placeholders #}
    {%- for type, pointerized, value in combined_args(call, return_) -%}
    {{ initialise(type, value) }}
    {% endfor %}

    {# unpack the dercursor into the placeholders -#}
    CK_RV status = unpack_{{ f }}_Call(
        cursorIn
        {%- for type_, pointerized, var, other in extract_args(call, return_, False) -%}
        {%- if loop.first %},{% endif %}
        {% if not type_|is_pointer and not other %}&{% endif %}{{- var -}}{%- if not loop.last %},{% endif %} // {{type_}} - other: {{ other }}, pointerized: {{ pointerized }}
        {%- endfor %}
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_{{ f }}(
        &function_list
        {%- for type, pointerized, value in combined_args(call, return_) -%}
        {%- if loop.first %}, {% endif -%}
        {{- value -}} {%- if not loop.last %},{% endif %}
        {% endfor %}
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_{{ f }}_Return(
        CursorOut
        {%- for type_, pointerized, var, other in extract_args(return_, call, True) -%}
        {%- if loop.first %},{% endif %}
        {% if not type_|is_pointer %}&{% endif %}{{- var -}}{%- if not loop.last %},{% endif %} // {{ type_ }} {{ pointerized }} {{ type_|is_pointer }}
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