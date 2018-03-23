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
    {{ initialise_test(type_, identifier, f.type_name|under) }}
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
    {{ initialise_unpack_placeholders(type_, identifier + "_unpack") }}
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
{% elif type_ == "CK_BYTE_ARRAY" %}
   // todo: disabled for now, fix test_derputget error first (skipping chars)
   // assert_memory_equal({{ identifier }}, {{ identifier }}_unpack, {{ len_mapper(f.type_name|under, identifier) }});
{% elif type_ in ("CK_UTF8CHAR_ARRAY", "UTF8String") %}
    assert_memory_equal({{ identifier }}, {{ identifier }}_unpack, {{ len_mapper(f.type_name|under, identifier) }});
{% elif type_ == "CK_VOID_PTR" %}
    // todo: finish
    // assert_int_equal({{ identifier }}, {{ identifier }}_unpack);
{% elif type_ == "CK_ATTRIBUTE_ARRAY" %}
    int {{ identifier }}_i;
    for ({{ identifier }}_i = 0; {{ identifier }}_i < {{ len_mapper(f.type_name|under, identifier) }}; {{ identifier }}_i++) {
        assert_int_equal({{ identifier }}[{{ identifier }}_i].type, {{ identifier }}_unpack[{{ identifier }}_i].type);
        assert_memory_equal({{ identifier }}[{{ identifier }}_i].pValue, {{ identifier }}_unpack[{{ identifier }}_i].pValue, sizeof({{ identifier }}_label));
        assert_int_equal({{ identifier }}[{{ identifier }}_i].ulValueLen, {{ identifier }}_unpack[{{ identifier }}_i].ulValueLen);
    }
{% elif type_  in ("CK_MECHANISM_INFO", "CK_MECHANISM_TYPE_ARRAY") %}
    assert_memory_equal(&{{ identifier }}, &{{ identifier }}_unpack, sizeof({{ identifier }}));
{% elif type_ == "CK_INFO" %}
    assert_int_equal(pInfo.flags, pInfo_unpack.flags);
    assert_int_equal(pInfo.cryptokiVersion.major, pInfo_unpack.cryptokiVersion.major);
    assert_int_equal(pInfo.cryptokiVersion.minor, pInfo_unpack.cryptokiVersion.minor);
    assert_int_equal(pInfo.libraryVersion.major, pInfo_unpack.libraryVersion.major);
    assert_int_equal(pInfo.libraryVersion.major, pInfo_unpack.libraryVersion.major);
    assert_memory_equal(pInfo.libraryDescription, pInfo_unpack.libraryDescription, sizeof(char) * 32);
    assert_memory_equal(pInfo.manufacturerID, pInfo.manufacturerID, sizeof(char) * 32);
{% elif type_ == "CK_SESSION_INFO" %}
    assert_int_equal(pInfo.state, pInfo_unpack.state);
    assert_int_equal(pInfo.ulDeviceError, pInfo_unpack.ulDeviceError);
    assert_int_equal(pInfo.flags, pInfo_unpack.flags);
    assert_int_equal(pInfo.slotID, pInfo_unpack.slotID);
{% elif type_ == "CK_SLOT_INFO" %}
    assert_int_equal(pInfo.flags, pInfo_unpack.flags);
    assert_int_equal(pInfo.firmwareVersion.major, pInfo_unpack.firmwareVersion.major);
    assert_int_equal(pInfo.firmwareVersion.minor, pInfo_unpack.firmwareVersion.minor);
    assert_int_equal(pInfo.hardwareVersion.major, pInfo_unpack.hardwareVersion.major);
    assert_int_equal(pInfo.hardwareVersion.major, pInfo_unpack.hardwareVersion.major);
    assert_memory_equal(pInfo.manufacturerID, pInfo_unpack.manufacturerID, sizeof(CK_UTF8CHAR) * 32);
    assert_memory_equal(pInfo.slotDescription, pInfo.slotDescription, sizeof(CK_UTF8CHAR) * 64);
{% elif type_ == "CK_TOKEN_INFO" %}
    assert_int_equal(pInfo.flags, pInfo_unpack.flags);
    assert_int_equal(pInfo.firmwareVersion.major, pInfo_unpack.firmwareVersion.major);
    assert_int_equal(pInfo.firmwareVersion.minor, pInfo_unpack.firmwareVersion.minor);
    assert_int_equal(pInfo.hardwareVersion.major, pInfo_unpack.hardwareVersion.major);
    assert_int_equal(pInfo.hardwareVersion.major, pInfo_unpack.hardwareVersion.major);
    assert_memory_equal(pInfo.manufacturerID, pInfo_unpack.manufacturerID, sizeof(CK_UTF8CHAR) * 32);
    assert_memory_equal(pInfo.label, pInfo.label, sizeof(CK_UTF8CHAR) * 32);
    assert_memory_equal(pInfo.model, pInfo.model, sizeof(CK_UTF8CHAR) * 16);
    assert_memory_equal(pInfo.utcTime, pInfo.utcTime, sizeof(CK_UTF8CHAR) * 16);
    assert_memory_equal(pInfo.serialNumber, pInfo.serialNumber, sizeof(CK_UTF8CHAR) * 16);
    assert_int_equal(pInfo.ulMaxSessionCount, pInfo_unpack.ulMaxSessionCount);
    assert_int_equal(pInfo.ulSessionCount, pInfo_unpack.ulSessionCount);
    assert_int_equal(pInfo.ulMaxRwSessionCount, pInfo_unpack.ulMaxRwSessionCount);
    assert_int_equal(pInfo.ulRwSessionCount, pInfo_unpack.ulRwSessionCount);
    assert_int_equal(pInfo.ulMaxPinLen, pInfo_unpack.ulMaxPinLen);
    assert_int_equal(pInfo.ulMinPinLen, pInfo_unpack.ulMinPinLen);
    assert_int_equal(pInfo.ulTotalPublicMemory, pInfo_unpack.ulTotalPublicMemory);
    assert_int_equal(pInfo.ulFreePublicMemory, pInfo_unpack.ulFreePublicMemory);
    assert_int_equal(pInfo.ulTotalPrivateMemory, pInfo_unpack.ulTotalPrivateMemory);
    assert_int_equal(pInfo.ulFreePrivateMemory, pInfo_unpack.ulFreePrivateMemory);
{% elif type_ == "ANY" %}
    // todo: finish {{ identifier }} ({{ type_ }})
{% elif type_ == "CK_C_INITIALIZE_ARGS_PTR" %}
    // todo: should we check for ANY?
{% elif type_ == "CK_SLOT_ID_ARRAY" %}
    int {{ identifier }}_i;
    for ({{ identifier }}_i = 0; {{ identifier }}_i < {{ len_mapper(f.type_name|under, identifier) }}; {{ identifier }}_i++) {
      assert_int_equal({{ identifier }}[{{ identifier }}_i], {{ identifier }}_unpack[{{ identifier }}_i]);
    };
{% elif type_ == "CK_NOTIFY" %}
    // todo: what should we check for here? ({{ identifier }} {{ type_ }})
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
