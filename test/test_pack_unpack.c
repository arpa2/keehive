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


static void test_pack_unpack_getslotlist(void **state) {
    CK_ULONG pulCount = 0;
    CK_BBOOL ck_tokenPresent = TRUE;
    CK_RV error;

    dercursor cursor;

    error = pack_C_GetSlotList_Call(ck_tokenPresent, NULL_PTR, &pulCount, &cursor);
    assert_int_equal(error, CKR_OK);

    CK_BBOOL unpacked_tokenPresent;
    error = unpack_C_GetSlotList_Call(&cursor, &unpacked_tokenPresent);
    assert_int_equal(error, CKR_OK);

    free(cursor.derptr);

}

static void test_pack_unpack_getinfo(void **state) {
    CK_RV error;
    CK_INFO info;
    dercursor cursor;
    error = pack_C_GetInfo_Call(&info, &cursor);
    assert_int_equal(error, CKR_OK);
    error = unpack_C_GetInfo_Call(&cursor);
    assert_int_equal(error, CKR_OK);
    free(cursor.derptr);

}


int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test(test_pack_unpack_getslotlist),
        cmocka_unit_test(test_pack_unpack_getinfo),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}