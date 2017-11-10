#include "wrap.h"

#include "pkcs11/pkcs11unix.h"


void * get_slot_list() {
    /* https://docs.oracle.com/cd/E19120-01/open.solaris/819-2145/chapter2-9/index.html */
    CK_BBOOL       tokenPresent;
    /CK_SLOT_ID_PTR pSlotList;
    CK_ULONG_PTR   pulCount;
    C_GetSlotList(tokenPresent, pSlotList, pulCount);
    return 0;
}