#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>


#include "pkcs11/pkcs11unix.h"
#include "client.h"




static void test_client_getinfo(void **state) {
    CK_INFO info;
    CK_RV status = Remote_C_GetInfo(&info);
    assert_int_equal(status, CKR_OK);
};


static void test_client_getslotlist(void **state) {
    CK_BBOOL tokenPresent = CK_FALSE;
    CK_SLOT_ID slotList;
    CK_ULONG pulCount;

    CK_RV status = Remote_C_GetSlotList(tokenPresent, &slotList, &pulCount);
    assert_int_equal(status, CKR_OK);
}


int main(void) {
    const struct CMUnitTest tests[] = {
            cmocka_unit_test(test_client_getinfo),
            cmocka_unit_test(test_client_getslotlist),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}