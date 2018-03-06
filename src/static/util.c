#include "cryptoki.h"
#include <quick-der/api.h>
#include <stdlib.h>
#include <assert.h>
#include "util.h"
#include "returncodes.h"
#include <stdio.h>


CK_RV
der_error_helper(const int error)
{
    switch (error) {
        case ERANGE:
            return CKR_KEEHIVE_DER_RANGE_ERROR;
        case EBADMSG:
            return CKR_KEEHIVE_DER_SYNTAX_ERROR;
        default:
            return CKR_KEEHIVE_DER_UNKNOWN_ERROR;
    }
}


void der_dump(char* path, dercursor* pCursor)
{
    FILE *pFile = fopen(path, "w+b");
    fwrite(pCursor->derptr, 1, pCursor->derlen, pFile);
    fclose(pFile);
}
