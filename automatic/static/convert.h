#ifndef KEEHIVE_CONVERT_H
#define KEEHIVE_CONVERT_H

#include "pkcs11/pkcs11unix.h"

int not_implemented(int a, int b);

int (*func_array[CKA_ALLOWED_MECHANISMS+1]) (int x, int y);

#endif //KEEHIVE_CONVERT_H