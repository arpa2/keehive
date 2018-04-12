#include "cryptoki.h"
#include <stddef.h>
#include "settings.h"
#include "loader.h"
#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>
#include <stdlib.h>


void softhsm(void **state) {
    CK_FUNCTION_LIST_PTR function_list = NULL;
    CK_RV status = cryptoki_loader(LIBSOFTHSM2_LIBRARY, &function_list);
    assert_int_equal(status, 0);
    CK_VOID_PTR pInitArgs = NULL;
    status = (function_list->C_Initialize)(pInitArgs);
    CK_ULONG slotsnum;
    status = C_GetSlotList(CK_TRUE, NULL, &slotsnum);
    assert_int_equal(status, 0);
    CK_SLOT_ID_PTR slotlist = malloc(sizeof(CK_SLOT_ID) * slotsnum);
    status = C_GetSlotList(CK_TRUE, slotlist, &slotsnum);
    assert_int_equal(status, 0);
    for(int i=0; i< slotsnum; i++) {
        CK_SLOT_INFO slot_info;
        status = C_GetSlotInfo(slotlist[i], &slot_info);
        assert_int_equal(status, 0);
    }
}

int main(void) {
    setenv("SOFTHSM2_CONF", "./softhsm2.conf", 1);

    const struct CMUnitTest tests[] = {
            cmocka_unit_test(softhsm),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}