#ifndef KEEHIVE_WRAP_C_H
#define KEEHIVE_WRAP_C_H

#include "constants.h"

KeehiveError initialize(const char *path, void **handle);
KeehiveError get_slot_list(void **handle);
KeehiveError finalize(void **handle);
KeehiveError get_info(void **handle);

#endif //KEEHIVE_WRAP_C_H
