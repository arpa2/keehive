#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>
#include <stdlib.h>
#include "cryptoki.h"
#include "types.h"


{% for call, return_ in zipped %}
{% set f = call.type_name[:-5]|under %}
void test_{{ f }}(void **state){

    (void) state; /* unused */

    {% for type, pointerized, value in combined_args(call, return_) -%}
    {{ initialise_test(type, value) }}
    {% endfor %}

    CK_RV status = {{ f }}(
        {% for type, pointerized, value in combined_args(call, return_) -%}
        {{- value -}}
        {%- if not loop.last %},
        {% endif -%}
        {% endfor %}
    );
};
{% endfor %}



int main(void) {
    const struct CMUnitTest tests[] = {
            {% for call, return_ in zipped %}
            cmocka_unit_test(test_{{ call.type_name[:-5]|under }}){% if not loop.last %},{% endif -%}
            {% endfor %}
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}