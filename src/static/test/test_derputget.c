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

void der_putget_CK_FLAGS_PTR(void **state) {

    CK_FLAGS flags = (CKF_OS_LOCKING_OK | CKF_CLOCK_ON_TOKEN);

    //DER_BUF_BITSTRING(der_buf_bitstring, 8 * 8);
    uint8_t der_buf_bitstring[1+(((64)+7)>>3)] = { (((~64) + 1) & 0x07) };
    dercursor cursor = der_put_CK_FLAGS_PTR(der_buf_bitstring, flags);
    CK_FLAGS flags_out;
    der_get_CK_FLAGS_PTR(&cursor, &flags_out);
    assert_int_equal(flags, flags_out);

};

int main(void) {
    const struct CMUnitTest tests[] = {

            cmocka_unit_test(der_putget_CK_BYTE_ARRAY),
            cmocka_unit_test(der_putget_CK_FLAGS_PTR),

    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}