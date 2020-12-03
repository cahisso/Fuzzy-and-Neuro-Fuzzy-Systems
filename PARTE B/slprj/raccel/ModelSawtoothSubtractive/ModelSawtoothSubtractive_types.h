#include "__cf_ModelSawtoothSubtractive.h"
#ifndef RTW_HEADER_ModelSawtoothSubtractive_types_h_
#define RTW_HEADER_ModelSawtoothSubtractive_types_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#ifndef DEFINED_TYPEDEF_FOR_struct_TSShBOyKy6Y0Xl96I1aO7C_
#define DEFINED_TYPEDEF_FOR_struct_TSShBOyKy6Y0Xl96I1aO7C_
typedef struct { uint8_T SimulinkDiagnostic ; uint8_T Model [ 65 ] ; uint8_T
Block [ 88 ] ; uint8_T OutOfRangeInputValue ; uint8_T NoRuleFired ; uint8_T
EmptyOutputFuzzySet ; uint8_T sl_padding0 [ 3 ] ; }
struct_TSShBOyKy6Y0Xl96I1aO7C ;
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
#ifndef typedef_efu5r12lv1
#define typedef_efu5r12lv1
typedef struct tag_stlEYa7lPYzNP3WoCUsshO efu5r12lv1 ;
#endif
#ifndef struct_tag_sLerXb1WAZXaINCsbUzVd5E
#define struct_tag_sLerXb1WAZXaINCsbUzVd5E
struct tag_sLerXb1WAZXaINCsbUzVd5E { efu5r12lv1 mf [ 17 ] ; int32_T origNumMF
; } ;
#endif
#ifndef typedef_cmheg32o2p
#define typedef_cmheg32o2p
typedef struct tag_sLerXb1WAZXaINCsbUzVd5E cmheg32o2p ;
#endif
#ifndef struct_tag_sR5lB2EjWNT0dlchwtPKZ5F
#define struct_tag_sR5lB2EjWNT0dlchwtPKZ5F
struct tag_sR5lB2EjWNT0dlchwtPKZ5F { uint8_T type [ 6 ] ; int32_T
origTypeLength ; real_T params [ 7 ] ; int32_T origParamLength ; } ;
#endif
#ifndef typedef_jzsjikdofc
#define typedef_jzsjikdofc
typedef struct tag_sR5lB2EjWNT0dlchwtPKZ5F jzsjikdofc ;
#endif
#ifndef struct_tag_sA02zw8kKX1YFovCoFV28LD
#define struct_tag_sA02zw8kKX1YFovCoFV28LD
struct tag_sA02zw8kKX1YFovCoFV28LD { jzsjikdofc mf [ 17 ] ; int32_T origNumMF
; } ;
#endif
#ifndef typedef_dzejfblip2
#define typedef_dzejfblip2
typedef struct tag_sA02zw8kKX1YFovCoFV28LD dzejfblip2 ;
#endif
#ifndef struct_tag_sc7uQ17XoUwqFcBH8nIvhUG
#define struct_tag_sc7uQ17XoUwqFcBH8nIvhUG
struct tag_sc7uQ17XoUwqFcBH8nIvhUG { uint8_T type [ 6 ] ; uint8_T andMethod [
4 ] ; uint8_T orMethod [ 6 ] ; uint8_T defuzzMethod [ 6 ] ; uint8_T impMethod
[ 4 ] ; uint8_T aggMethod [ 3 ] ; real_T inputRange [ 12 ] ; real_T
outputRange [ 2 ] ; cmheg32o2p inputMF [ 6 ] ; dzejfblip2 outputMF ; real_T
antecedent [ 102 ] ; real_T consequent [ 17 ] ; real_T connection [ 17 ] ;
real_T weight [ 17 ] ; int32_T numSamples ; int32_T numInputs ; int32_T
numOutputs ; int32_T numRules ; int32_T numInputMFs [ 6 ] ; int32_T
numCumInputMFs [ 6 ] ; int32_T numOutputMFs ; int32_T numCumOutputMFs ;
real_T outputSamplePoints ; int32_T orrSize [ 2 ] ; int32_T aggSize [ 2 ] ; }
;
#endif
#ifndef typedef_ihoy0k40eb
#define typedef_ihoy0k40eb
typedef struct tag_sc7uQ17XoUwqFcBH8nIvhUG ihoy0k40eb ;
#endif
#ifndef struct_tag_sjtEWF2akxcfVg4BkxOpMOE
#define struct_tag_sjtEWF2akxcfVg4BkxOpMOE
struct tag_sjtEWF2akxcfVg4BkxOpMOE { uint8_T SimulinkDiagnostic ; uint8_T
Model [ 65 ] ; uint8_T Block [ 88 ] ; uint8_T OutOfRangeInputValue ; uint8_T
NoRuleFired ; uint8_T EmptyOutputFuzzySet ; } ;
#endif
#ifndef typedef_htkuvqdqzi
#define typedef_htkuvqdqzi
typedef struct tag_sjtEWF2akxcfVg4BkxOpMOE htkuvqdqzi ;
#endif
#ifndef struct_tag_sjvqidlXRSb399xwxsKSeGG
#define struct_tag_sjvqidlXRSb399xwxsKSeGG
struct tag_sjvqidlXRSb399xwxsKSeGG { uint8_T type [ 7 ] ; real_T params [ 2 ]
; } ;
#endif
#ifndef typedef_jyu5buotyk
#define typedef_jyu5buotyk
typedef struct tag_sjvqidlXRSb399xwxsKSeGG jyu5buotyk ;
#endif
#ifndef struct_tag_s2KPsKoCFgqjJEBkHuKx0uC
#define struct_tag_s2KPsKoCFgqjJEBkHuKx0uC
struct tag_s2KPsKoCFgqjJEBkHuKx0uC { uint8_T type [ 6 ] ; real_T params [ 7 ]
; } ;
#endif
#ifndef typedef_gqczsq3px4
#define typedef_gqczsq3px4
typedef struct tag_s2KPsKoCFgqjJEBkHuKx0uC gqczsq3px4 ;
#endif
typedef struct P_ P ;
#endif
