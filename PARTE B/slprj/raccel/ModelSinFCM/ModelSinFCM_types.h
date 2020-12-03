#include "__cf_ModelSinFCM.h"
#ifndef RTW_HEADER_ModelSinFCM_types_h_
#define RTW_HEADER_ModelSinFCM_types_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#ifndef DEFINED_TYPEDEF_FOR_struct_sF8TE7eIcqbthDYauVfUZD_
#define DEFINED_TYPEDEF_FOR_struct_sF8TE7eIcqbthDYauVfUZD_
typedef struct { uint8_T SimulinkDiagnostic ; uint8_T Model [ 52 ] ; uint8_T
Block [ 75 ] ; uint8_T OutOfRangeInputValue ; uint8_T NoRuleFired ; uint8_T
EmptyOutputFuzzySet ; uint8_T sl_padding0 [ 5 ] ; }
struct_sF8TE7eIcqbthDYauVfUZD ;
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
#ifndef typedef_oog2hwnx0z
#define typedef_oog2hwnx0z
typedef struct tag_stlEYa7lPYzNP3WoCUsshO oog2hwnx0z ;
#endif
#ifndef struct_tag_sLerXb1WAZXaINCsbUzVd5E
#define struct_tag_sLerXb1WAZXaINCsbUzVd5E
struct tag_sLerXb1WAZXaINCsbUzVd5E { oog2hwnx0z mf [ 17 ] ; int32_T origNumMF
; } ;
#endif
#ifndef typedef_hz3g1dcqnx
#define typedef_hz3g1dcqnx
typedef struct tag_sLerXb1WAZXaINCsbUzVd5E hz3g1dcqnx ;
#endif
#ifndef struct_tag_sR5lB2EjWNT0dlchwtPKZ5F
#define struct_tag_sR5lB2EjWNT0dlchwtPKZ5F
struct tag_sR5lB2EjWNT0dlchwtPKZ5F { uint8_T type [ 6 ] ; int32_T
origTypeLength ; real_T params [ 7 ] ; int32_T origParamLength ; } ;
#endif
#ifndef typedef_ikxdnwm50h
#define typedef_ikxdnwm50h
typedef struct tag_sR5lB2EjWNT0dlchwtPKZ5F ikxdnwm50h ;
#endif
#ifndef struct_tag_sA02zw8kKX1YFovCoFV28LD
#define struct_tag_sA02zw8kKX1YFovCoFV28LD
struct tag_sA02zw8kKX1YFovCoFV28LD { ikxdnwm50h mf [ 17 ] ; int32_T origNumMF
; } ;
#endif
#ifndef typedef_exvnd0snwx
#define typedef_exvnd0snwx
typedef struct tag_sA02zw8kKX1YFovCoFV28LD exvnd0snwx ;
#endif
#ifndef struct_tag_sc7uQ17XoUwqFcBH8nIvhUG
#define struct_tag_sc7uQ17XoUwqFcBH8nIvhUG
struct tag_sc7uQ17XoUwqFcBH8nIvhUG { uint8_T type [ 6 ] ; uint8_T andMethod [
4 ] ; uint8_T orMethod [ 6 ] ; uint8_T defuzzMethod [ 6 ] ; uint8_T impMethod
[ 4 ] ; uint8_T aggMethod [ 3 ] ; real_T inputRange [ 12 ] ; real_T
outputRange [ 2 ] ; hz3g1dcqnx inputMF [ 6 ] ; exvnd0snwx outputMF ; real_T
antecedent [ 102 ] ; real_T consequent [ 17 ] ; real_T connection [ 17 ] ;
real_T weight [ 17 ] ; int32_T numSamples ; int32_T numInputs ; int32_T
numOutputs ; int32_T numRules ; int32_T numInputMFs [ 6 ] ; int32_T
numCumInputMFs [ 6 ] ; int32_T numOutputMFs ; int32_T numCumOutputMFs ;
real_T outputSamplePoints ; int32_T orrSize [ 2 ] ; int32_T aggSize [ 2 ] ; }
;
#endif
#ifndef typedef_drpnyywteu
#define typedef_drpnyywteu
typedef struct tag_sc7uQ17XoUwqFcBH8nIvhUG drpnyywteu ;
#endif
#ifndef struct_tag_sj1SQUwJrWtbLVDJOJv0w1F
#define struct_tag_sj1SQUwJrWtbLVDJOJv0w1F
struct tag_sj1SQUwJrWtbLVDJOJv0w1F { uint8_T SimulinkDiagnostic ; uint8_T
Model [ 52 ] ; uint8_T Block [ 75 ] ; uint8_T OutOfRangeInputValue ; uint8_T
NoRuleFired ; uint8_T EmptyOutputFuzzySet ; } ;
#endif
#ifndef typedef_j3mhyyf2bd
#define typedef_j3mhyyf2bd
typedef struct tag_sj1SQUwJrWtbLVDJOJv0w1F j3mhyyf2bd ;
#endif
#ifndef struct_tag_sjvqidlXRSb399xwxsKSeGG
#define struct_tag_sjvqidlXRSb399xwxsKSeGG
struct tag_sjvqidlXRSb399xwxsKSeGG { uint8_T type [ 7 ] ; real_T params [ 2 ]
; } ;
#endif
#ifndef typedef_j3mrpsy5i4
#define typedef_j3mrpsy5i4
typedef struct tag_sjvqidlXRSb399xwxsKSeGG j3mrpsy5i4 ;
#endif
#ifndef struct_tag_s2KPsKoCFgqjJEBkHuKx0uC
#define struct_tag_s2KPsKoCFgqjJEBkHuKx0uC
struct tag_s2KPsKoCFgqjJEBkHuKx0uC { uint8_T type [ 6 ] ; real_T params [ 7 ]
; } ;
#endif
#ifndef typedef_hqfw10apbk
#define typedef_hqfw10apbk
typedef struct tag_s2KPsKoCFgqjJEBkHuKx0uC hqfw10apbk ;
#endif
typedef struct P_ P ;
#endif
