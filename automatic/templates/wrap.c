#include <stdlib.h>
#include <stdio.h>
#include <dlfcn.h>
#include <string.h>
#include "wrap.h"
#include "returncodes.h"

CK_RV
call_C_GetFunctionList(const char *path, CK_FUNCTION_LIST_PTR_PTR function_list) {
    /* this function is different from the other calls since it is the only one
     * accessing the shared library by name */
    CK_RV (*C_GetFunctionList)(CK_FUNCTION_LIST_PTR_PTR);
    char *error;


    void *handle = dlopen(path, RTLD_LAZY);
    if (!handle) {
        fputs(dlerror(), stderr);
        return CKR_KEEHIVE_SO_INVALID;
    }

    C_GetFunctionList = dlsym(handle, "C_GetFunctionList");

    if ((error = dlerror()) != NULL) {
        fputs(error, stderr);
        return CKR_KEEHIVE_SO_ERROR;
    }

    CK_RV status = (*C_GetFunctionList)(function_list);
    if (status != CKR_OK)
        return CKR_KEEHIVE_SO_ERROR;

    return CKR_OK;
};


{% for call, return_ in zipped if not call.type_name == "C-GetFunctionList-Call" %}
{% set f = call.type_name[:-5]|under %}
CK_RV
call_{{ f }}(
    CK_FUNCTION_LIST_PTR_PTR function_list
    {%- for c in combine(call, return_) %}
    {%- if loop.first %},{% endif %}
    {{ c.type_decl.type_name|under|ack2ck }} {{ c.identifier }}
    {%- if not loop.last %},{% endif -%}
    {% endfor %}
) {
    CK_RV status = ((*function_list)->{{ f }})(
        {% for c in combine(call, return_) -%}
        {{- c.identifier -}}
        {%- if not loop.last %},
        {% endif -%}
        {% endfor %}
    );

    if (status != CKR_OK)
        return CKR_KEEHIVE_SO_ERROR;

    return CKR_OK;

};
{% endfor %}
