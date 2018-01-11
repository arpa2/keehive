/* DER utility: This should probably appear in Quick DER sometime soon.
 *
 * Pack an Int32 or UInt32 and return the number of bytes.  Do not pack a header
 * around it.  The function returns the number of bytes taken, even 0 is valid.
 */

#include <stdlib.h>
#include <quick-der/api.h>
#include "pkcs11/pkcs11unix.h"
#include "convert.h"


dercursor ck2qder_bool(uint8_t * target, CK_BBOOL value) {
    dercursor retval;
    retval.derptr = target;
    retval.derlen = 1;
    if (value)
        target[0] = 0x01;
    else
        target[0] = 0x00;
    return retval;
}


dercursor ck2qder_ulong(uint8_t * target, CK_ULONG value) {
    return qder2b_pack_uint32 (target,  (u_int32_t) value);

}


typedef uint8_t QDERBUF_INT32_T[4];
dercursor qder2b_pack_int32 (uint8_t *target_4b, int32_t value) {
    dercursor retval;
    int shift = 24;
    retval.derptr = target_4b;
    retval.derlen = 0;
    while (shift >= 0) {
        if ((retval.derlen == 0) && (shift > 0)) {
            // Skip sign-extending initial bytes
            uint32_t neutro = (uint32_t)(value >> (shift - 1) ) & 0x000001ff;
            if ((neutro == 0x000001ff) || (neutro == 0x00000000)) {
                shift -= 8;
                continue;
            }
        }
        target_4b [retval.derlen] = (uint8_t)((value >> shift) & 0xff);
        retval.derlen++;
        shift -= 8;
    }
    return retval;
}


typedef uint8_t QDERBUF_UINT32_T[5];
dercursor qder2b_pack_uint32(uint8_t * target_5b, uint32_t value) {
    dercursor retval;
    int ofs = 0;
    if (value & 0x80000000) {
        *target_5b = 0x00;
        ofs = 1;
    }
    retval = qder2b_pack_int32 (target_5b + ofs, (int32_t) value);
    retval.derptr -= ofs;
    retval.derlen += ofs;
    return retval;
}
