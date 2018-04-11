#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>
#include "derput.h"
#include "derget.h"
#include "types.h"
#include "packer.h"



void der_putget_CK_BYTE_ARRAY(void **state){

    char input[] = "abcdefghijklm";

    CK_BYTE_ARRAY byte_array = (CK_BYTE_ARRAY) input;
    CK_ULONG byte_array_len = sizeof(input)/ sizeof(char);

    dercursor cursor;
    CK_RV status = der_put_CK_BYTE_ARRAY(
            byte_array,
            &byte_array_len,
            &cursor.derptr,
            &cursor.derlen,
            ByteArray_packer);
    assert_int_equal(status, CKR_OK);

    CK_BYTE_ARRAY byte_array2 = malloc(byte_array_len * sizeof(CK_BYTE));

    int get_status = der_get_CK_BYTE_ARRAY(&cursor, byte_array2);
    assert_int_equal(get_status, 0);

    assert_memory_equal(byte_array, byte_array2, byte_array_len * sizeof(CK_BYTE));

    free(byte_array2);
};


void der_putget_CK_MECHANISM_TYPE_ARRAY(void **state){

    CK_MECHANISM_TYPE input[] = {1, 2, 3, 4, 6};

    CK_MECHANISM_TYPE_ARRAY array = (CK_MECHANISM_TYPE_ARRAY) input;
    CK_ULONG byte_array_len = sizeof(input)/ sizeof(CK_MECHANISM_TYPE);

    dercursor cursor;
    CK_RV status = der_put_CK_MECHANISM_TYPE_ARRAY(
            array,
            &byte_array_len,
            &cursor.derptr,
            &cursor.derlen,
            mechanism_type_array_packer);
    assert_int_equal(status, CKR_OK);

    CK_MECHANISM_TYPE_ARRAY array2 = malloc(byte_array_len * sizeof(CK_MECHANISM_TYPE));

    dernode node = {.wire=cursor};

    int get_status = der_get_CK_MECHANISM_TYPE_ARRAY(&node, array2);
    assert_int_equal(get_status, 0);

    assert_memory_equal(array, array2, byte_array_len * sizeof(CK_MECHANISM_TYPE));

    free(array2);
};


void der_putget_CK_ATTRIBUTE_ARRAY(void **state) {
    CK_UTF8CHAR pTemplate_label[] = "Just a simple attribute array";
    CK_BBOOL pTemplate_copyable = CK_TRUE;
    CK_ATTRIBUTE array[] = {
            {.type=CKA_LABEL, .pValue=pTemplate_label, .ulValueLen=sizeof(pTemplate_label)},
            {.type=CKA_COPYABLE, .pValue=&pTemplate_copyable, .ulValueLen=sizeof(CK_BBOOL)},
    };
    CK_ULONG count = sizeof(array) / sizeof(CK_ATTRIBUTE);

    dercursor cursor;
    CK_RV status = der_put_CK_ATTRIBUTE_ARRAY(
            array,
            count,
            &cursor.derptr,
            &cursor.derlen
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_ATTRIBUTE_ARRAY pTemplate_unpack = malloc(1024);
    CK_ULONG ulCount_unpack = 0;

    CK_ATTRIBUTE_ARRAY array2 = malloc(count * sizeof(CK_ATTRIBUTE));

    dernode node = {.wire=cursor};
    int get_status = der_get_CK_ATTRIBUTE_ARRAY(&node, array2);

    assert_memory_equal(array, array2, count * sizeof(CK_MECHANISM_TYPE));

};


void der_putget_CK_FLAGS_PTR(void **state) {

    CK_FLAGS flags = (CKF_OS_LOCKING_OK | CKF_CLOCK_ON_TOKEN);
    DER_BUF_BITSTRING(der_buf_bitstring, 8 * 8);
    dercursor cursor = der_put_CK_FLAGS_PTR(der_buf_bitstring, flags);
    CK_FLAGS flags_out;
    der_get_CK_FLAGS_PTR(&cursor, &flags_out);
    assert_int_equal(flags, flags_out);

};

int main(void) {
    const struct CMUnitTest tests[] = {

            cmocka_unit_test(der_putget_CK_BYTE_ARRAY),
            cmocka_unit_test(der_putget_CK_FLAGS_PTR),
            cmocka_unit_test(der_putget_CK_MECHANISM_TYPE_ARRAY),
            cmocka_unit_test(der_putget_CK_ATTRIBUTE_ARRAY),

    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}