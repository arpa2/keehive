//
// Created by Gijs Molenaar on 19/02/2018.
//

#ifndef KEEHIVE_PACKER_H
#define KEEHIVE_PACKER_H

#include "pack.h"
#include "returncodes.h"
#include "util.h"
#include "derput.h"

// always use repeat = 1 for der_unpack, unless you need to iterate over a SEQUENCE OF. In this case set it to
// the length of the SEQUENCE
#define REPEAT 1


{% for f in functions %}
extern const derwalk {{ f.type_name|under }}_packer[];

{% endfor %}

extern const derwalk pSlotList_packer[];

extern const derwalk ObjectHandlerPacker_packer[];

extern const derwalk AttributeArray_packer[];

extern const derwalk ByteArray_packer[];

#endif //KEEHIVE_PACKER_H
