#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>
#include "pack.h"
#include "unpack.h"

/* CK_NOTIFY is an application callback that processes events */
CK_RV notify_callback(
        CK_SESSION_HANDLE hSession,     /* the session's handle */
        CK_NOTIFICATION   event,
        CK_VOID_PTR       pApplication  /* passed to C_OpenSession */
) {
    return CKR_OK;
}
;

{% for call, return_ in zipped %}
{% for f, o in ((call, return_), (return_, call)) %}
void test_pack_{{ f.type_name|under }}(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    {% for type_, pointerized, identifier, other in extract_args(f, o) -%}
    {{ initialise_test(type_, identifier) }}
    {% endfor %}

    CK_RV status = pack_{{ f.type_name|under }}(
        &dercursor
        {%- for type_, pointerized, identifier, other in extract_args(f, o) -%}
        {%- if loop.first %},{% endif %}
        {% if not type_|is_pointer and not type_|is_notify %}&{% endif %}{{- identifier -}}{%- if not loop.last %},{% endif %}
        {%- endfor %}
    );

    assert_int_equal(status, CKR_OK);

    {% for type_, pointerized, identifier, other in extract_args(f, o) -%}
    {{ initialise_verify(type_, identifier + "_unpack") }}
    {% endfor %}

    status = unpack_{{ f.type_name|under }}(
        &dercursor
        {%- for type_, pointerized, identifier, other in extract_args(f, o) -%}
        {%- if loop.first %},{% endif %}
        {% if not type_|is_pointer and not type_|is_notify %}&{% endif %}{{- identifier -}}_unpack{%- if not loop.last %},{% endif %}
        {%- endfor %}
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);

{% for type_, pointerized, identifier, other in extract_args(f, o) -%}
{% if type_ == "CK_MECHANISM_PTR" %}
    assert_int_equal(pMechanism->pParameter, pMechanism_unpack->pParameter);
    assert_int_equal(pMechanism->ulParameterLen, pMechanism_unpack->ulParameterLen);
    assert_int_equal(pMechanism->mechanism, pMechanism_unpack->mechanism);
{% elif type_ in ("CK_UTF8CHAR_ARRAY", "CK_BYTE_ARRAY", "UTF8String") %}
    assert_memory_equal({{ identifier }}, {{ identifier }}_unpack, {{ len_mapper(f.type_name|under, identifier) }});
{% elif type_ == "CK_VOID_PTR" %}
    // todo: finish
    // assert_int_equal({{ identifier }}, {{ identifier }}_unpack);
{% elif type_ == "CK_ATTRIBUTE_ARRAY" %}
    // todo: finish
//  int {{ identifier }}_i;
//  for ({{ identifier }}_i = 0; {{ identifier }}_i < {{ len_mapper(f.type_name|under, identifier) }}; {{ identifier }}_i++) {
//      assert_int_equal({{ identifier }}[{{ identifier }}_i].type, {{ identifier }}_unpack[{{ identifier }}_i].type);
//      // todo: assert_ptr_equal({{ identifier }}[{{ identifier }}_i].pValue, {{ identifier }}_unpack[{{ identifier }}_i].pValue);
//      assert_int_equal({{ identifier }}[{{ identifier }}_i].ulValueLen, {{ identifier }}_unpack[{{ identifier }}_i].ulValueLen);
//  }*/
{% elif type_ in ("CK_INFO", "CK_MECHANISM_INFO", "CK_SESSION_INFO", "CK_SLOT_INFO", "CK_TOKEN_INFO") %}
    // todo: assert for {{ identifier }} ({{ type_ }})
    assert_false(true);
{% elif type_ == "ANY" %}
    // todo: finish {{ identifier }} ({{ type_ }})
{% elif type_ == "CK_C_INITIALIZE_ARGS_PTR" %}
    // todo: should we check for ANY?
{% else %}
    assert_int_equal({{ identifier }}, {{ identifier }}_unpack);
{% endif %}
{% endfor %}

};
{% endfor %}
{% endfor %}


int main(void) {
    const struct CMUnitTest tests[] = {
            {% for f in functions %}
            cmocka_unit_test(test_pack_{{ f.type_name|under }}){% if not loop.last %},{% endif -%}
            {% endfor %}

    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}
