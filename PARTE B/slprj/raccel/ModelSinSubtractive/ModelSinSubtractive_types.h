#include "__cf_ModelSinSubtractive.h"
#ifndef RTW_HEADER_ModelSinSubtractive_types_h_
#define RTW_HEADER_ModelSinSubtractive_types_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#ifndef DEFINED_TYPEDEF_FOR_struct_SMHA2vNpwOeh7FSwxlJ5Z_
#define DEFINED_TYPEDEF_FOR_struct_SMHA2vNpwOeh7FSwxlJ5Z_
typedef struct { uint8_T SimulinkDiagnostic ; uint8_T Model [ 60 ] ; uint8_T
Block [ 83 ] ; uint8_T OutOfRangeInputValue ; uint8_T NoRuleFired ; uint8_T
EmptyOutputFuzzySet ; uint8_T sl_padding0 [ 5 ] ; }
struct_SMHA2vNpwOeh7FSwxlJ5Z ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_0sCPl2iL0Y7nsABAISPuqB_
#define DEFINED_TYPEDEF_FOR_struct_0sCPl2iL0Y7nsABAISPuqB_
typedef struct { uint8_T type [ 7 ] ; uint8_T sl_padding0 ; int32_T
origTypeLength ; uint8_T sl_padding1 [ 4 ] ; real_T params [ 2 ] ; int32_T
origParamLength ; uint8_T sl_padding2 [ 4 ] ; } struct_0sCPl2iL0Y7nsABAISPuqB
;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_SyVGvO6xiDULYBFaGKg0WD_
#define DEFINED_TYPEDEF_FOR_struct_SyVGvO6xiDULYBFaGKg0WD_
typedef struct { struct_0sCPl2iL0Y7nsABAISPuqB mf [ 17 ] ; int32_T origNumMF
; uint8_T sl_padding0 [ 4 ] ; } struct_SyVGvO6xiDULYBFaGKg0WD ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_N2QzzxpOjHNcaozrQ0RYwG_
#define DEFINED_TYPEDEF_FOR_struct_N2QzzxpOjHNcaozrQ0RYwG_
typedef struct { uint8_T type [ 6 ] ; uint8_T sl_padding0 [ 2 ] ; int32_T
origTypeLength ; uint8_T sl_padding1 [ 4 ] ; real_T params [ 7 ] ; int32_T
origParamLength ; uint8_T sl_padding2 [ 4 ] ; } struct_N2QzzxpOjHNcaozrQ0RYwG
;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_fqARSbyCdWrP5ltaPWqNPG_
#define DEFINED_TYPEDEF_FOR_struct_fqARSbyCdWrP5ltaPWqNPG_
typedef struct { struct_N2QzzxpOjHNcaozrQ0RYwG mf [ 17 ] ; int32_T origNumMF
; uint8_T sl_padding0 [ 4 ] ; } struct_fqARSbyCdWrP5ltaPWqNPG ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_iaWwpvwE8Gmrx4J8FPjdxG_
#define DEFINED_TYPEDEF_FOR_struct_iaWwpvwE8Gmrx4J8FPjdxG_
typedef struct { uint8_T type [ 6 ] ; uint8_T andMethod [ 4 ] ; uint8_T
orMethod [ 6 ] ; uint8_T defuzzMethod [ 6 ] ; uint8_T impMethod [ 4 ] ;
uint8_T aggMethod [ 3 ] ; uint8_T sl_padding0 [ 3 ] ; real_T inputRange [ 12
] ; real_T outputRange [ 2 ] ; struct_SyVGvO6xiDULYBFaGKg0WD inputMF [ 6 ] ;
struct_fqARSbyCdWrP5ltaPWqNPG outputMF ; real_T antecedent [ 102 ] ; real_T
consequent [ 17 ] ; real_T connection [ 17 ] ; real_T weight [ 17 ] ; int32_T
numSamples ; int32_T numInputs ; int32_T numOutputs ; int32_T numRules ;
int32_T numInputMFs [ 6 ] ; int32_T numCumInputMFs [ 6 ] ; int32_T
numOutputMFs ; int32_T numCumOutputMFs ; real_T outputSamplePoints ; int32_T
orrSize [ 2 ] ; int32_T aggSize [ 2 ] ; } struct_iaWwpvwE8Gmrx4J8FPjdxG ;
#endif
#ifndef struct_tag_stlEYa7lPYzNP3WoCUsshO
#define struct_tag_stlEYa7lPYzNP3WoCUsshO
struct tag_stlEYa7lPYzNP3WoCUsshO { uint8_T type [ 7 ] ; int32_T
origTypeLength ; real_T params [ 2 ] ; int32_T origParamLength ; } ;
#endif
#ifndef typedef_fux0ywvjwh
#define typedef_fux0ywvjwh
typedef struct tag_stlEYa7lPYzNP3WoCUsshO fux0ywvjwh ;
#endif
#ifndef struct_tag_sLerXb1WAZXaINCsbUzVd5E
#define struct_tag_sLerXb1WAZXaINCsbUzVd5E
struct tag_sLerXb1WAZXaINCsbUzVd5E { fux0ywvjwh mf [ 17 ] ; int32_T origNumMF
; } ;
#endif
#ifndef typedef_jjkwugr5cu
#define typedef_jjkwugr5cu
typedef struct tag_sLerXb1WAZXaINCsbUzVd5E jjkwugr5cu ;
#endif
#ifndef struct_tag_sR5lB2EjWNT0dlchwtPKZ5F
#define struct_tag_sR5lB2EjWNT0dlchwtPKZ5F
struct tag_sR5lB2EjWNT0dlchwtPKZ5F { uint8_T type [ 6 ] ; int32_T
origTypeLength ; real_T params [ 7 ] ; int32_T origParamLength ; } ;
#endif
#ifndef typedef_jl1zns5tm1
#define typedef_jl1zns5tm1
typedef struct tag_sR5lB2EjWNT0dlchwtPKZ5F jl1zns5tm1 ;
#endif
#ifndef struct_tag_sA02zw8kKX1YFovCoFV28LD
#define struct_tag_sA02zw8kKX1YFovCoFV28LD
struct tag_sA02zw8kKX1YFovCoFV28LD { jl1zns5tm1 mf [ 17 ] ; int32_T origNumMF
; } ;
#endif
#ifndef typedef_ounsp0lk0x
#define typedef_ounsp0lk0x
typedef struct tag_sA02zw8kKX1YFovCoFV28LD ounsp0lk0x ;
#endif
#ifndef struct_tag_sc7uQ17XoUwqFcBH8nIvhUG
#define struct_tag_sc7uQ17XoUwqFcBH8nIvhUG
struct tag_sc7uQ17XoUwqFcBH8nIvhUG { uint8_T type [ 6 ] ; uint8_T andMethod [
4 ] ; uint8_T orMethod [ 6 ] ; uint8_T defuzzMethod [ 6 ] ; uint8_T impMethod
[ 4 ] ; uint8_T aggMethod [ 3 ] ; real_T inputRange [ 12 ] ; real_T
outputRange [ 2 ] ; jjkwugr5cu inputMF [ 6 ] ; ounsp0lk0x outputMF ; real_T
antecedent [ 102 ] ; real_T consequent [ 17 ] ; real_T connection [ 17 ] ;
real_T weight [ 17 ] ; int32_T numSamples ; int32_T numInputs ; int32_T
numOutputs ; int32_T numRules ; int32_T numInputMFs [ 6 ] ; int32_T
numCumInputMFs [ 6 ] ; int32_T numOutputMFs ; int32_T numCumOutputMFs ;
real_T outputSamplePoints ; int32_T orrSize [ 2 ] ; int32_T aggSize [ 2 ] ; }
;
#endif
#ifndef typedef_fiuzzhowia
#define typedef_fiuzzhowia
typedef struct tag_sc7uQ17XoUwqFcBH8nIvhUG fiuzzhowia ;
#endif
#ifndef struct_tag_sNu7ALFxZzuQ8PYsv190NLH
#define struct_tag_sNu7ALFxZzuQ8PYsv190NLH
struct tag_sNu7ALFxZzuQ8PYsv190NLH { uint8_T SimulinkDiagnostic ; uint8_T
Model [ 60 ] ; uint8_T Block [ 83 ] ; uint8_T OutOfRangeInputValue ; uint8_T
NoRuleFired ; uint8_T EmptyOutputFuzzySet ; } ;
#endif
#ifndef typedef_bfefqkp0u2
#define typedef_bfefqkp0u2
typedef struct tag_sNu7ALFxZzuQ8PYsv190NLH bfefqkp0u2 ;
#endif
#ifndef struct_tag_sjvqidlXRSb399xwxsKSeGG
#define struct_tag_sjvqidlXRSb399xwxsKSeGG
struct tag_sjvqidlXRSb399xwxsKSeGG { uint8_T type [ 7 ] ; real_T params [ 2 ]
; } ;
#endif
#ifndef typedef_pyq4on0kfa
#define typedef_pyq4on0kfa
typedef struct tag_sjvqidlXRSb399xwxsKSeGG pyq4on0kfa ;
#endif
#ifndef struct_tag_s2KPsKoCFgqjJEBkHuKx0uC
#define struct_tag_s2KPsKoCFgqjJEBkHuKx0uC
struct tag_s2KPsKoCFgqjJEBkHuKx0uC { uint8_T type [ 6 ] ; real_T params [ 7 ]
; } ;
#endif
#ifndef typedef_h1jdv2jbrm
#define typedef_h1jdv2jbrm
typedef struct tag_s2KPsKoCFgqjJEBkHuKx0uC h1jdv2jbrm ;
#endif
typedef struct P_ P ;
#endif
