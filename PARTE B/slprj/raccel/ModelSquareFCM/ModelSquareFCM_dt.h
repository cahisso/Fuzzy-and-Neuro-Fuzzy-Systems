#include "__cf_ModelSquareFCM.h"
#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "struct_oVBYgRQ3bAb2BIiHb9KttH" , 14 ,
144 } , { "struct_0sCPl2iL0Y7nsABAISPuqB" , 15 , 40 } , {
"struct_SyVGvO6xiDULYBFaGKg0WD" , 16 , 688 } , {
"struct_N2QzzxpOjHNcaozrQ0RYwG" , 17 , 80 } , {
"struct_fqARSbyCdWrP5ltaPWqNPG" , 18 , 1368 } , {
"struct_iaWwpvwE8Gmrx4J8FPjdxG" , 19 , 6960 } } ; static uint_T
rtDataTypeSizes [ ] = { sizeof ( real_T ) , sizeof ( real32_T ) , sizeof (
int8_T ) , sizeof ( uint8_T ) , sizeof ( int16_T ) , sizeof ( uint16_T ) ,
sizeof ( int32_T ) , sizeof ( uint32_T ) , sizeof ( boolean_T ) , sizeof (
fcn_call_T ) , sizeof ( int_T ) , sizeof ( pointer_T ) , sizeof ( action_T )
, 2 * sizeof ( uint32_T ) , sizeof ( struct_oVBYgRQ3bAb2BIiHb9KttH ) , sizeof
( struct_0sCPl2iL0Y7nsABAISPuqB ) , sizeof ( struct_SyVGvO6xiDULYBFaGKg0WD )
, sizeof ( struct_N2QzzxpOjHNcaozrQ0RYwG ) , sizeof (
struct_fqARSbyCdWrP5ltaPWqNPG ) , sizeof ( struct_iaWwpvwE8Gmrx4J8FPjdxG ) }
; static const char_T * rtDataTypeNames [ ] = { "real_T" , "real32_T" ,
"int8_T" , "uint8_T" , "int16_T" , "uint16_T" , "int32_T" , "uint32_T" ,
"boolean_T" , "fcn_call_T" , "int_T" , "pointer_T" , "action_T" ,
"timer_uint32_pair_T" , "struct_oVBYgRQ3bAb2BIiHb9KttH" ,
"struct_0sCPl2iL0Y7nsABAISPuqB" , "struct_SyVGvO6xiDULYBFaGKg0WD" ,
"struct_N2QzzxpOjHNcaozrQ0RYwG" , "struct_fqARSbyCdWrP5ltaPWqNPG" ,
"struct_iaWwpvwE8Gmrx4J8FPjdxG" } ; static DataTypeTransition rtBTransitions
[ ] = { { ( char_T * ) ( & rtB . afl4hqinfn ) , 0 , 0 , 18 } , { ( char_T * )
( & rtDW . ibbcz5ezoa ) , 0 , 0 , 6 } , { ( char_T * ) ( & rtDW . kbg0e0vtoh
. LoggedData ) , 11 , 0 , 2 } } ; static DataTypeTransitionTable
rtBTransTable = { 3U , rtBTransitions } ; static DataTypeTransition
rtPTransitions [ ] = { { ( char_T * ) ( & rtP . OutputSamplePoints_Value ) ,
0 , 0 , 16 } } ; static DataTypeTransitionTable rtPTransTable = { 1U ,
rtPTransitions } ;
