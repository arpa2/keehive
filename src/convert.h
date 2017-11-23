//
// Created by Gijs Molenaar on 16/11/2017.
//

#ifndef KEEHIVE_CONVERT_H
#define KEEHIVE_CONVERT_H


typedef uint8_t QDERBUF_BOOL_T [1];
dercursor ck2qder_bool (uint8_t * target, CK_BBOOL value);


typedef uint8_t QDERBUF_ULONG_T [4];
dercursor ck2qder_ulong( uint8_t * target, CK_ULONG value) ;

typedef uint8_t QDERBUF_INT32_T [4];
dercursor qder2b_pack_int32 (uint8_t *target_4b, int32_t value);

typedef uint8_t QDERBUF_UINT32_T [5];
dercursor qder2b_pack_uint32 (uint8_t *target_5b, uint32_t value);



#endif //KEEHIVE_CONVERT_H
