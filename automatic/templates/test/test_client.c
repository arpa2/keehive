#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>
#include "client.h"


{% for call, return_ in zipped %}
{% set f = call.type_name[:-5]|under %}
void test_client_{{ f }}(void **state){
    {% for type, pointerized, value in combined_args(call, return_) -%}
    {{ initialise(type, value) }}
    {% endfor %}

    CK_RV status = client_{{ f }}(
        {% for type, pointerized, value in combined_args(call, return_) -%}
        {{- value -}}
        {%- if not loop.last %},
        {% endif -%}
        {% endfor %}
    );
    assert_int_equal(status, CKR_OK);

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