#include "__cf_ModelSquareSubtractive.h"
#ifndef RTW_HEADER_ModelSquareSubtractive_types_h_
#define RTW_HEADER_ModelSquareSubtractive_types_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#ifndef DEFINED_TYPEDEF_FOR_struct_kL1iJJzVK8P4bTR6pjhfg_
#define DEFINED_TYPEDEF_FOR_struct_kL1iJJzVK8P4bTR6pjhfg_
typedef struct { uint8_T SimulinkDiagnostic ; uint8_T Model [ 63 ] ; uint8_T
Block [ 86 ] ; uint8_T OutOfRangeInputValue ; uint8_T NoRuleFired ; uint8_T
EmptyOutputFuzzySet ; uint8_T sl_padding0 [ 7 ] ; }
struct_kL1iJJzVK8P4bTR6pjhfg ;
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
#ifndef typedef_itpiuojlap
#define typedef_itpiuojlap
typedef struct tag_stlEYa7lPYzNP3WoCUsshO itpiuojlap ;
#endif
#ifndef struct_tag_sLerXb1WAZXaINCsbUzVd5E
#define struct_tag_sLerXb1WAZXaINCsbUzVd5E
struct tag_sLerXb1WAZXaINCsbUzVd5E { itpiuojlap mf [ 17 ] ; int32_T origNumMF
; } ;
#endif
#ifndef typedef_gbg4apeoly
#define typedef_gbg4apeoly
typedef struct tag_sLerXb1WAZXaINCsbUzVd5E gbg4apeoly ;
#endif
#ifndef struct_tag_sR5lB2EjWNT0dlchwtPKZ5F
#define struct_tag_sR5lB2EjWNT0dlchwtPKZ5F
struct tag_sR5lB2EjWNT0dlchwtPKZ5F { uint8_T type [ 6 ] ; int32_T
origTypeLength ; real_T params [ 7 ] ; int32_T origParamLength ; } ;
#endif
#ifndef typedef_fs3unj45en
#define typedef_fs3unj45en
typedef struct tag_sR5lB2EjWNT0dlchwtPKZ5F fs3unj45en ;
#endif
#ifndef struct_tag_sA02zw8kKX1YFovCoFV28LD
#define struct_tag_sA02zw8kKX1YFovCoFV28LD
struct tag_sA02zw8kKX1YFovCoFV28LD { fs3unj45en mf [ 17 ] ; int32_T origNumMF
; } ;
#endif
#ifndef typedef_mp0hchqoka
#define typedef_mp0hchqoka
typedef struct tag_sA02zw8kKX1YFovCoFV28LD mp0hchqoka ;
#endif
#ifndef struct_tag_sc7uQ17XoUwqFcBH8nIvhUG
#define struct_tag_sc7uQ17XoUwqFcBH8nIvhUG
struct tag_sc7uQ17XoUwqFcBH8nIvhUG { uint8_T type [ 6 ] ; uint8_T andMethod [
4 ] ; uint8_T orMethod [ 6 ] ; uint8_T defuzzMethod [ 6 ] ; uint8_T impMethod
[ 4 ] ; uint8_T aggMethod [ 3 ] ; real_T inputRange [ 12 ] ; real_T
outputRange [ 2 ] ; gbg4apeoly inputMF [ 6 ] ; mp0hchqoka outputMF ; real_T
antecedent [ 102 ] ; real_T consequent [ 17 ] ; real_T connection [ 17 ] ;
real_T weight [ 17 ] ; int32_T numSamples ; int32_T numInputs ; int32_T
numOutputs ; int32_T numRules ; int32_T numInputMFs [ 6 ] ; int32_T
numCumInputMFs [ 6 ] ; int32_T numOutputMFs ; int32_T numCumOutputMFs ;
real_T outputSamplePoints ; int32_T orrSize [ 2 ] ; int32_T aggSize [ 2 ] ; }
;
#endif
#ifndef typedef_mj0x2zrmsm
#define typedef_mj0x2zrmsm
typedef struct tag_sc7uQ17XoUwqFcBH8nIvhUG mj0x2zrmsm ;
#endif
#ifndef struct_tag_so8q9xjaYT19MhrOPRCw68B
#define struct_tag_so8q9xjaYT19MhrOPRCw68B
struct tag_so8q9xjaYT19MhrOPRCw68B { uint8_T SimulinkDiagnostic ; uint8_T
Model [ 63 ] ; uint8_T Block [ 86 ] ; uint8_T OutOfRangeInputValue ; uint8_T
NoRuleFired ; uint8_T EmptyOutputFuzzySet ; } ;
#endif
#ifndef typedef_mdo4mq3zuu
#define typedef_mdo4mq3zuu
typedef struct tag_so8q9xjaYT19MhrOPRCw68B mdo4mq3zuu ;
#endif
#ifndef struct_tag_sjvqidlXRSb399xwxsKSeGG
#define struct_tag_sjvqidlXRSb399xwxsKSeGG
struct tag_sjvqidlXRSb399xwxsKSeGG { uint8_T type [ 7 ] ; real_T params [ 2 ]
; } ;
#endif
#ifndef typedef_dyjgov3egi
#define typedef_dyjgov3egi
typedef struct tag_sjvqidlXRSb399xwxsKSeGG dyjgov3egi ;
#endif
#ifndef struct_tag_s2KPsKoCFgqjJEBkHuKx0uC
#define struct_tag_s2KPsKoCFgqjJEBkHuKx0uC
struct tag_s2KPsKoCFgqjJEBkHuKx0uC { uint8_T type [ 6 ] ; real_T params [ 7 ]
; } ;
#endif
#ifndef typedef_jzizbh1p2i
#define typedef_jzizbh1p2i
typedef struct tag_s2KPsKoCFgqjJEBkHuKx0uC jzizbh1p2i ;
#endif
typedef struct P_ P ;
#endif
