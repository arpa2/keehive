#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>
#include "keehive.h"
#include "pkcs11/pkcs11unix.h"

#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>


static void test_pack_unpack(void **state) {
    CK_ULONG pulCount = 0;
    CK_BBOOL tokenPresent = TRUE;
    size_t len = 0;

    KeehiveError error = get_slot_list_pack(tokenPresent, &pulCount, NULL_PTR, &len);
    assert_int_equal(error, KEEHIVE_E_SUCCESS);

    uint8_t * packed_ptr = malloc (len);
    assert_non_null(packed_ptr);

    error = get_slot_list_pack(tokenPresent, &pulCount, packed_ptr, &len);
    assert_int_equal(error, KEEHIVE_E_SUCCESS);

    getslotlist_call_t getslotlist;
    KeehiveError error2 = get_slot_list_unpack(packed_ptr, &len, &getslotlist);
    assert_int_equal(error2, KEEHIVE_E_SUCCESS);

    free(packed_ptr);
}


int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test(test_pack_unpack),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}