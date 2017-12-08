#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

#include "pkcs11/pkcs11unix.h"
#include "pack.h"
#include "unpack.h"
#include "types.h"




static void test_pack_unpack(void **state) {
    CK_ULONG pulCount = 0;
    CK_BBOOL ck_tokenPresent = TRUE;
    size_t len = 0;

    KeehiveError error = pack_C_GetSlotList_Call(ck_tokenPresent, NULL_PTR, &pulCount, NULL_PTR, &len);
    assert_int_equal(error, KEEHIVE_E_SUCCESS);

    uint8_t * packed_ptr = malloc (len);
    assert_non_null(packed_ptr);

    error = pack_C_GetSlotList_Call(ck_tokenPresent, NULL_PTR, &pulCount, packed_ptr, &len);
    assert_int_equal(error, KEEHIVE_E_SUCCESS);

    C_GetSlotList_Call_t getslotlist;
    dercursor cursor;
    cursor.derlen = len;
    cursor.derptr = packed_ptr;

    bool tokenPresent;
    KeehiveError error2 = unpack_C_GetSlotList_Call(&cursor, &tokenPresent);
    assert_int_equal(error2, KEEHIVE_E_SUCCESS);


    printf("bla");

    free(packed_ptr);

    printf("bla");
}


int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test(test_pack_unpack),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}