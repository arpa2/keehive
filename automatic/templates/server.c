#include "server.h"
#include "pack.h"
#include "unpack.h"
#include "call.h"
#include "returncodes.h"

const char path[] = "/usr/local/lib/softhsm/libsofthsm2.so";


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
    {%- for t, v in combine(call, return_) -%}
    {{ t }} {{ v }};
    {% endfor %}

    {# unpack the dercursor into the placeholders -#}
    CK_RV status = unpack_{{ f }}_Call(
        cursorIn
        {%- for c in call.type_decl.components if not c.type_decl.type_name == 'NULL' -%}
        {%- if loop.first -%},
        {% endif -%}
        &{{ c.identifier -}}
        {%- if not loop.last %},
        {% endif -%}
        {% endfor %}
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval = call_{{ f }}(
        &function_list
        {%- for t, v in combine(call, return_) -%}
        {%- if loop.first -%},
        {%- endif -%}
        {{- v -}}
        {%- if not loop.last %},
        {% endif -%}
        {% endfor %}
    );

    status = pack_{{ f }}_Return(
        CursorOut
        {%- for c in return_.type_decl.components -%}
        {%- if loop.first %},
        {% endif -%}
        {{- c.identifier -}}
        {%- if not loop.last %},
        {% endif -%}
        {% endfor %}
    );

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}
{% endfor %}