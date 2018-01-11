#include "server.h"
#include "pack.h"
#include "unpack.h"
#include "wrap.h"
#include "util.h"


const char path[] = "/usr/local/lib/softhsm/libsofthsm2.so";


CK_FUNCTION_LIST_PTR function_list = NULL_PTR;


CK_RV
server_Begin(){
    CK_RV status = call_C_GetFunctionList(path, &function_list);

    if (status != CKR_OK)
        return status;

    status = call_C_Initialize(&function_list);
    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_End(){
    CK_RV status = call_C_Finalize(&function_list);

    if (status != CKR_OK)
        return status;

    function_list = NULL_PTR;
    return CKR_OK;
}

{% for call in calls %}
{% set f = call.type_name[:-5]|under %}
CK_RV
server_{{ f }}(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    CK_INFO info;
    CK_RV status;

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    status = unpack_{{ f }}_Call(cursorIn);
    if (status != CKR_OK)
        return status;

    status = call_{{ f }}(
        &function_list
        {%- for c in call.type_decl.components -%}
        {%- if loop.first %},
        {% endif -%}
        {{- c.identifier -}}
        {%- if not loop.last %},
        {% endif -%}
        {% endfor %}
    );

    if (status != CKR_OK)
        return status;

    status = pack_{{ f }}_Return(
        CursorOut
        {%- for c in call.type_decl.components -%}
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