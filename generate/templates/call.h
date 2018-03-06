#ifndef KEEHIVE_WRAP_C_H
#define KEEHIVE_WRAP_C_H

#include "types.h"
#include "cryptoki.h"


{% for call, return_ in zipped if not call.type_name == "C-GetFunctionList-Call"  %}
CK_RV
call_{{ call.type_name[:-5]|under }}(
    CK_FUNCTION_LIST_PTR_PTR function_list
    {%- for type, pointerized, value in combined_args(call, return_) %}
    {%- if loop.first %},{% endif %}
    {{ type }} {{ value }}
    {%- if not loop.last %},{% endif -%}
    {% endfor %}
);
{% endfor %}


#endif //KEEHIVE_WRAP_C_H
