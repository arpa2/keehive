#include "client.h"
#include <cmocka.h>

{% for call, return_ in zipped %}
{% set f = call.type_name[:-5]|under %}
void test_client_{{ f }}(void **state){
    {%- for type, var, pointer in combined_args(call, return_) %}
    {{ type }} {{ var }};
    {%- endfor %}

    client_{{ f }}(
        {%- for type, var, pointer in combined_args(call, return_) %}
        {{ var }}{%- if not loop.last %},{% endif -%}
        {% endfor %}
    );
};
{% endfor %}



int main(void) {
    const struct CMUnitTest tests[] = {
            {% for call, return_ in zipped %}
            cmocka_unit_test(test_client_{{ call.type_name[:-5]|under }}){% if not loop.last %},{% endif -%}
            {% endfor %}
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}