#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>
#include "pkcs11/pkcs11unix.h"
#include "types.h"


{% for call, return_ in zipped %}
{% set f = call.type_name[:-5]|under %}
void test_{{ f }}(void **state){

    (void) state; /* unused */

    {% for type, pointerized, value in combined_args(call, return_) -%}
    {{ initialise(type, value) }}
    {% endfor %}

    CK_RV status = {{ f }}(
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
            cmocka_unit_test(test_{{ call.type_name[:-5]|under }}){% if not loop.last %},{% endif -%}
            {% endfor %}
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}