#include <stdlib.h>
#include <stdio.h>
#include <dlfcn.h>
#include "call.h"
#include "static/returncodes.h"

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


{% for call, return_ in zipped %}
{% set f = call.type_name[:-5]|under %}
CK_RV
call_{{ f }}(
    CK_FUNCTION_LIST_PTR_PTR function_list
    {%- for type, pointerized, value in combined_args(call, return_) %}
    {%- if loop.first %},{% endif %}
    {{ type }} {{ value }}
    {%- if not loop.last %},{% endif -%}
    {% endfor %}
) {
    return ((*function_list)->{{ f }})(
        {% for type, pointerized, value in combined_args(call, return_) -%}
        {{- value -}}
        {%- if not loop.last %},
        {% endif -%}
        {% endfor %}
    );

};
{% endfor %}
