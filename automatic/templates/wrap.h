#ifndef KEEHIVE_WRAP_C_H
#define KEEHIVE_WRAP_C_H

#include "types.h"
#include "pkcs11/pkcs11unix.h"

// Only function we implement manually
CK_RV call_C_GetFunctionList(const char *path, CK_FUNCTION_LIST_PTR_PTR function_list);

{% for call, return_ in zipped if not call.type_name == "C-GetFunctionList-Call"  %}
CK_RV
call_{{ call.type_name[:-5]|under }}(
    CK_FUNCTION_LIST_PTR_PTR function_list
    {%- for c, return_flag in combine(call, return_) %}
    {%- if loop.first %},{% endif %}
    {{ c.type_decl.type_name|under|ack2ck(return_flag) }} {{ c.identifier }}
    {%- if not loop.last %},{% endif -%}
    {% endfor %}
);
{% endfor %}


#endif //KEEHIVE_WRAP_C_H
