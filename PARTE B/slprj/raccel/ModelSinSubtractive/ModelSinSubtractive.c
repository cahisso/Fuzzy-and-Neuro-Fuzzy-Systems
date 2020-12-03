#include "__cf_ModelSinSubtractive.h"
#include "rt_logging_mmi.h"
#include "ModelSinSubtractive_capi.h"
#include <math.h>
#include "ModelSinSubtractive.h"
#include "ModelSinSubtractive_private.h"
#include "ModelSinSubtractive_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; extern boolean_T
gblExtModeStartPktReceived ; void raccelForceExtModeShutdown ( ) { if ( !
gblExtModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 3 , & stopRequested ) ; }
rtExtModeShutdown ( 3 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 4 ; const char_T
* gbl_raccel_Version = "9.2 (R2018b) 24-May-2018" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const char * gblSlvrJacPatternFileName =
"slprj//raccel//ModelSinSubtractive//ModelSinSubtractive_Jpattern.mat" ;
const int_T gblNumRootInportBlks = 0 ; const int_T gblNumModelInputs = 0 ;
extern rtInportTUtable * gblInportTUtables ; extern const char *
gblInportFileName ; const int_T gblInportDataTypeIdx [ ] = { - 1 } ; const
int_T gblInportDims [ ] = { - 1 } ; const int_T gblInportComplex [ ] = { - 1
} ; const int_T gblInportInterpoFlag [ ] = { - 1 } ; const int_T
gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [ ] = { 1 , 1 , 1
, 1 } ;
#include "simstruc.h"
#include "fixedpoint.h"
B rtB ; X rtX ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS =
& model_S ; static real_T hreokwut2g ( real_T x ) ; static real_T hreokwut2gd
( real_T x ) ; static real_T hreokwut2gdj ( real_T x ) ; static real_T
hreokwut2gdjk ( real_T x ) ; static real_T hreokwut2gdjko ( real_T x ) ;
static real_T hreokwut2gdjkol ( real_T x ) ; static real_T axsykwkxwe (
real_T x ) ; static real_T in5ri50dlf ( real_T x ) ; static real_T pgapnh45gq
( real_T x ) ; static real_T npwqakajio ( real_T x ) ; static real_T
mlpjo4bmas ( real_T x ) ; static real_T b0j5dwfnup ( real_T x ) ; static
real_T hdlxuksdgw ( real_T x ) ; static real_T dn5buzmxn2 ( real_T x ) ;
static real_T iitkhjtjcy ( real_T x ) ; static real_T hjomvahrvg ( real_T x )
; static real_T lp5drioy53 ( real_T x ) ; static real_T ktu3arpgco ( real_T x
) ; static real_T ozzkor2pxk ( real_T x ) ; static real_T nwar2n0cki ( real_T
x ) ; static real_T gsmrfosod0 ( real_T x ) ; static real_T eaf5tx1bzp (
real_T x ) ; static real_T fcekiv0ivq ( real_T x ) ; static real_T jdgrtrftfo
( real_T x ) ; static real_T l4fyn5wxht ( real_T x ) ; static real_T
hzhxzcgq55 ( real_T x ) ; static real_T nkdgwpvlfl ( real_T x ) ; static
real_T dqhxqnckhx ( real_T x ) ; static real_T mvvq3sputa ( real_T x ) ;
static real_T h3jqsw15u2 ( real_T x ) ; static real_T i4chw0sxqp ( real_T x )
; static real_T b3kwipbkov ( real_T x ) ; static real_T f4e2aj13pn ( real_T x
) ; static real_T gldtpcavkq ( real_T x ) ; static real_T hc42otrco0 ( real_T
x ) ; static real_T o5a4yjmynb ( real_T x ) ; static real_T hizipbzabc (
real_T x ) ; static real_T en3jce5uc2 ( real_T x ) ; static real_T ot1v25kshk
( real_T x ) ; static real_T nmkvshzwcr ( real_T x ) ; static real_T
kpygtygplf ( real_T x ) ; static real_T agizaegf0s ( real_T x ) ; static
real_T c2w4nmjdem ( real_T x ) ; static real_T l10pgd0qs1 ( real_T x ) ;
static real_T au25hqnym5 ( real_T x ) ; static real_T cvrh1hvtwp ( real_T x )
; static real_T mr1ni3qsf3 ( real_T x ) ; static real_T lbw3mbjodh ( real_T x
) ; static real_T g31rp3xrmo ( real_T x ) ; static real_T bs0eiqr0lz ( real_T
x ) ; static real_T iqq152nmwq ( real_T x ) ; static real_T llnwp3glou (
real_T x ) ; static real_T ohpeyaqemu ( real_T x ) ; static real_T l0bfcxl4ij
( real_T x ) ; static real_T mttqebepkv ( real_T x ) ; static real_T
ahyz4ujy2m ( real_T x ) ; static real_T dpodqo5al0 ( real_T x ) ; static
real_T frgbu11pop ( real_T x ) ; static real_T ab2urit5ta ( real_T x ) ;
static real_T iwbhnwoumx ( real_T x ) ; static real_T mco1nacpwr ( real_T x )
; static real_T he3ix00etv ( real_T x ) ; static real_T hf41dokcgg ( real_T x
) ; static real_T i1yc3df0sl ( real_T x ) ; static real_T lgom50ykmj ( real_T
x ) ; static real_T kncq00cuet ( real_T x ) ; static real_T bbitwyv5hr (
real_T x ) ; static real_T b5oqxcb54i ( real_T x ) ; static real_T c1atccrh2i
( real_T x ) ; static real_T nxrl01hzqn ( real_T x ) ; static void ntpvcpy4zp
( const real_T inputs [ 6 ] , real_T inputMFCache [ 102 ] ) ; static void
jr4an4yar2 ( const real_T inputs [ 6 ] , real_T outputMFCache [ 17 ] ) ;
static int32_T m3kqejtpns ( int32_T x ) ; static real_T ggtfo5c3sr ( const
real_T x [ 2 ] ) ; static real_T hreokwut2g ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - - 0.38146972817401448 ) * ( x - -
0.38146972817401448 ) ) / 0.64369415990745671 ) ; } static real_T hreokwut2gd
( real_T x ) { return muDoubleScalarExp ( - ( ( x - 0.58767024969839177 ) * (
x - 0.58767024969839177 ) ) / 0.6436941521545253 ) ; } static real_T
hreokwut2gdj ( real_T x ) { return muDoubleScalarExp ( - ( ( x -
0.13464935072142706 ) * ( x - 0.13464935072142706 ) ) / 0.64369415287549292 )
; } static real_T hreokwut2gdjk ( real_T x ) { return muDoubleScalarExp ( - (
( x - - 0.028833256254295107 ) * ( x - - 0.028833256254295107 ) ) /
0.64369411094501394 ) ; } static real_T hreokwut2gdjko ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - 0.26928494480986392 ) * ( x -
0.26928494480986392 ) ) / 0.64369416893503018 ) ; } static real_T
hreokwut2gdjkol ( real_T x ) { return muDoubleScalarExp ( - ( ( x -
0.83547877061091835 ) * ( x - 0.83547877061091835 ) ) / 0.64369395680360431 )
; } static real_T axsykwkxwe ( real_T x ) { return muDoubleScalarExp ( - ( (
x - - 0.83595000343600956 ) * ( x - - 0.83595000343600956 ) ) /
0.64369414897407318 ) ; } static real_T in5ri50dlf ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - 0.54938913609757234 ) * ( x -
0.54938913609757234 ) ) / 0.64369419621304513 ) ; } static real_T pgapnh45gq
( real_T x ) { return muDoubleScalarExp ( - ( ( x - - 0.32065947574966264 ) *
( x - - 0.32065947574966264 ) ) / 0.64369434861210606 ) ; } static real_T
npwqakajio ( real_T x ) { return muDoubleScalarExp ( - ( ( x - -
0.93060528315806257 ) * ( x - - 0.93060528315806257 ) ) / 0.643694194631872 )
; } static real_T mlpjo4bmas ( real_T x ) { return muDoubleScalarExp ( - ( (
x - 0.70730875222237144 ) * ( x - 0.70730875222237144 ) ) / 0.643694166282754
) ; } static real_T b0j5dwfnup ( real_T x ) { return muDoubleScalarExp ( - (
( x - 0.64870227887416165 ) * ( x - 0.64870227887416165 ) ) /
0.64369416026215731 ) ; } static real_T hdlxuksdgw ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - 0.043381106898122183 ) * ( x -
0.043381106898122183 ) ) / 0.64369403281673676 ) ; } static real_T dn5buzmxn2
( real_T x ) { return muDoubleScalarExp ( - ( ( x - 0.53285148185070041 ) * (
x - 0.53285148185070041 ) ) / 0.643694204406914 ) ; } static real_T
iitkhjtjcy ( real_T x ) { return muDoubleScalarExp ( - ( ( x - -
1.7705250474504874 ) * ( x - - 1.7705250474504874 ) ) / 0.64369436510419542 )
; } static real_T hjomvahrvg ( real_T x ) { return muDoubleScalarExp ( - ( (
x - - 1.1754269775448882 ) * ( x - - 1.1754269775448882 ) ) /
0.64369433602827175 ) ; } static real_T lp5drioy53 ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - - 1.0477617635596304 ) * ( x - -
1.0477617635596304 ) ) / 0.64369421938751115 ) ; } static real_T ktu3arpgco (
real_T x ) { return muDoubleScalarExp ( - ( ( x - 0.091140350162492612 ) * (
x - 0.091140350162492612 ) ) / 0.64369422051177516 ) ; } static real_T
ozzkor2pxk ( real_T x ) { return muDoubleScalarExp ( - ( ( x -
0.34072171660129863 ) * ( x - 0.34072171660129863 ) ) / 0.64369416530134649 )
; } static real_T nwar2n0cki ( real_T x ) { return muDoubleScalarExp ( - ( (
x - - 0.69709880140894309 ) * ( x - - 0.69709880140894309 ) ) /
0.6436941581052571 ) ; } static real_T gsmrfosod0 ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - 0.65157356414524159 ) * ( x -
0.65157356414524159 ) ) / 0.64369414497513078 ) ; } static real_T eaf5tx1bzp
( real_T x ) { return muDoubleScalarExp ( - ( ( x - - 0.12047570821053072 ) *
( x - - 0.12047570821053072 ) ) / 0.64369418739907447 ) ; } static real_T
fcekiv0ivq ( real_T x ) { return muDoubleScalarExp ( - ( ( x -
0.11931524730275811 ) * ( x - 0.11931524730275811 ) ) / 0.64369418612793583 )
; } static real_T jdgrtrftfo ( real_T x ) { return muDoubleScalarExp ( - ( (
x - - 0.65235205283522835 ) * ( x - - 0.65235205283522835 ) ) /
0.64369413073392179 ) ; } static real_T l4fyn5wxht ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - - 1.0593189989272198 ) * ( x - -
1.0593189989272198 ) ) / 0.64369416630563758 ) ; } static real_T hzhxzcgq55 (
real_T x ) { return muDoubleScalarExp ( - ( ( x - 0.79971647279661062 ) * ( x
- 0.79971647279661062 ) ) / 0.64369437805423213 ) ; } static real_T
nkdgwpvlfl ( real_T x ) { return muDoubleScalarExp ( - ( ( x -
0.66413923825942855 ) * ( x - 0.66413923825942855 ) ) / 0.64369418512873555 )
; } static real_T dqhxqnckhx ( real_T x ) { return muDoubleScalarExp ( - ( (
x - 1.1095789991911795 ) * ( x - 1.1095789991911795 ) ) / 0.64369415471723768
) ; } static real_T mvvq3sputa ( real_T x ) { return muDoubleScalarExp ( - (
( x - 0.8354787337604126 ) * ( x - 0.8354787337604126 ) ) /
0.64369414944165948 ) ; } static real_T h3jqsw15u2 ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - 0.52647735577825383 ) * ( x -
0.52647735577825383 ) ) / 0.64369376089308783 ) ; } static real_T i4chw0sxqp
( real_T x ) { return muDoubleScalarExp ( - ( ( x - 0.66021497704701815 ) * (
x - 0.66021497704701815 ) ) / 0.64369420156139523 ) ; } static real_T
b3kwipbkov ( real_T x ) { return muDoubleScalarExp ( - ( ( x - -
0.041058053910497286 ) * ( x - - 0.041058053910497286 ) ) /
0.64369442308192526 ) ; } static real_T f4e2aj13pn ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - 0.88661454441544107 ) * ( x -
0.88661454441544107 ) ) / 0.64369410385801762 ) ; } static real_T gldtpcavkq
( real_T x ) { return muDoubleScalarExp ( - ( ( x - - 1.5648170195022812 ) *
( x - - 1.5648170195022812 ) ) / 0.64369411125427156 ) ; } static real_T
hc42otrco0 ( real_T x ) { return muDoubleScalarExp ( - ( ( x - -
0.15220149156782525 ) * ( x - - 0.15220149156782525 ) ) / 0.6436942504091695
) ; } static real_T o5a4yjmynb ( real_T x ) { return muDoubleScalarExp ( - (
( x - 0.36564401076348529 ) * ( x - 0.36564401076348529 ) ) /
0.64369413927111885 ) ; } static real_T hizipbzabc ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - 0.37285731120806664 ) * ( x -
0.37285731120806664 ) ) / 0.64369410416090367 ) ; } static real_T en3jce5uc2
( real_T x ) { return muDoubleScalarExp ( - ( ( x - 0.371817480551214 ) * ( x
- 0.371817480551214 ) ) / 0.64369397353054059 ) ; } static real_T ot1v25kshk
( real_T x ) { return muDoubleScalarExp ( - ( ( x - 0.53285150466688214 ) * (
x - 0.53285150466688214 ) ) / 0.64369421930381132 ) ; } static real_T
nmkvshzwcr ( real_T x ) { return muDoubleScalarExp ( - ( ( x - -
0.90604229347375 ) * ( x - - 0.90604229347375 ) ) / 0.64369417485982772 ) ; }
static real_T kpygtygplf ( real_T x ) { return muDoubleScalarExp ( - ( ( x -
0.26928490986833392 ) * ( x - 0.26928490986833392 ) ) / 0.64369401045855446 )
; } static real_T agizaegf0s ( real_T x ) { return muDoubleScalarExp ( - ( (
x - - 0.97996803046999414 ) * ( x - - 0.97996803046999414 ) ) /
0.64369415591432622 ) ; } static real_T c2w4nmjdem ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - - 0.65689698222451043 ) * ( x - -
0.65689698222451043 ) ) / 0.6436944103666371 ) ; } static real_T l10pgd0qs1 (
real_T x ) { return muDoubleScalarExp ( - ( ( x - 0.39200132246687613 ) * ( x
- 0.39200132246687613 ) ) / 0.64369421235592539 ) ; } static real_T
au25hqnym5 ( real_T x ) { return muDoubleScalarExp ( - ( ( x -
0.10465888061424199 ) * ( x - 0.10465888061424199 ) ) / 0.64369419688443719 )
; } static real_T cvrh1hvtwp ( real_T x ) { return muDoubleScalarExp ( - ( (
x - 0.11931520407023298 ) * ( x - 0.11931520407023298 ) ) /
0.64369409317894888 ) ; } static real_T mr1ni3qsf3 ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - 0.23683316924987585 ) * ( x -
0.23683316924987585 ) ) / 0.64369383361489374 ) ; } static real_T lbw3mbjodh
( real_T x ) { return muDoubleScalarExp ( - ( ( x - - 1.0477618248575269 ) *
( x - - 1.0477618248575269 ) ) / 0.643694072334084 ) ; } static real_T
g31rp3xrmo ( real_T x ) { return muDoubleScalarExp ( - ( ( x - -
0.51094840707955469 ) * ( x - - 0.51094840707955469 ) ) / 0.64369420056066118
) ; } static real_T bs0eiqr0lz ( real_T x ) { return muDoubleScalarExp ( - (
( x - 1.438697193534749 ) * ( x - 1.438697193534749 ) ) / 0.64369330612678366
) ; } static real_T iqq152nmwq ( real_T x ) { return muDoubleScalarExp ( - (
( x - 1.1552877163923609 ) * ( x - 1.1552877163923609 ) ) /
0.64369342235496751 ) ; } static real_T llnwp3glou ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - - 0.33670568558187819 ) * ( x - -
0.33670568558187819 ) ) / 1.266378069756009 ) ; } static real_T ohpeyaqemu (
real_T x ) { return muDoubleScalarExp ( - ( ( x - 0.40048603288462997 ) * ( x
- 0.40048603288462997 ) ) / 1.2663779961630732 ) ; } static real_T l0bfcxl4ij
( real_T x ) { return muDoubleScalarExp ( - ( ( x - 1.132999900155103 ) * ( x
- 1.132999900155103 ) ) / 1.266378090131747 ) ; } static real_T mttqebepkv (
real_T x ) { return muDoubleScalarExp ( - ( ( x - 0.56247395656460975 ) * ( x
- 0.56247395656460975 ) ) / 1.2663782398285268 ) ; } static real_T ahyz4ujy2m
( real_T x ) { return muDoubleScalarExp ( - ( ( x - - 0.9778142327021081 ) *
( x - - 0.9778142327021081 ) ) / 1.2663780965048008 ) ; } static real_T
dpodqo5al0 ( real_T x ) { return muDoubleScalarExp ( - ( ( x -
0.72864156780584532 ) * ( x - 0.72864156780584532 ) ) / 1.2663780714728758 )
; } static real_T frgbu11pop ( real_T x ) { return muDoubleScalarExp ( - ( (
x - 0.31768794706186987 ) * ( x - 0.31768794706186987 ) ) / 1.266378047808923
) ; } static real_T ab2urit5ta ( real_T x ) { return muDoubleScalarExp ( - (
( x - - 0.044880607165546843 ) * ( x - - 0.044880607165546843 ) ) /
1.2663781096448359 ) ; } static real_T iwbhnwoumx ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - 0.57735033221917043 ) * ( x -
0.57735033221917043 ) ) / 1.2663784173985342 ) ; } static real_T mco1nacpwr (
real_T x ) { return muDoubleScalarExp ( - ( ( x - - 0.70116532006544285 ) * (
x - - 0.70116532006544285 ) ) / 1.2663781996659433 ) ; } static real_T
he3ix00etv ( real_T x ) { return muDoubleScalarExp ( - ( ( x - -
0.50770033929730463 ) * ( x - - 0.50770033929730463 ) ) / 1.2663781077886198
) ; } static real_T hf41dokcgg ( real_T x ) { return muDoubleScalarExp ( - (
( x - - 2.377454306392135 ) * ( x - - 2.377454306392135 ) ) /
1.2663780284776855 ) ; } static real_T i1yc3df0sl ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - 2.0184961826206003 ) * ( x - 2.0184961826206003
) ) / 1.2663779149146648 ) ; } static real_T lgom50ykmj ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - - 0.27135431448475333 ) * ( x - -
0.27135431448475333 ) ) / 1.2663781741017845 ) ; } static real_T kncq00cuet (
real_T x ) { return muDoubleScalarExp ( - ( ( x - 1.1586547320299956 ) * ( x
- 1.1586547320299956 ) ) / 1.26637788114129 ) ; } static real_T bbitwyv5hr (
real_T x ) { return muDoubleScalarExp ( - ( ( x - 0.0349733973393954 ) * ( x
- 0.0349733973393954 ) ) / 1.2663779866207765 ) ; } static real_T b5oqxcb54i
( real_T x ) { return muDoubleScalarExp ( - ( ( x - 1.1226479165064942 ) * (
x - 1.1226479165064942 ) ) / 1.2663780648693339 ) ; } static real_T
c1atccrh2i ( real_T x ) { return muDoubleScalarExp ( - ( ( x - -
0.55709363694595881 ) * ( x - - 0.55709363694595881 ) ) / 1.2663780823112094
) ; } static real_T nxrl01hzqn ( real_T x ) { return muDoubleScalarExp ( - (
( x - 0.75621896882907558 ) * ( x - 0.75621896882907558 ) ) /
1.2663780694316586 ) ; } static void ntpvcpy4zp ( const real_T inputs [ 6 ] ,
real_T inputMFCache [ 102 ] ) { inputMFCache [ 0 ] = hreokwut2g ( inputs [ 0
] ) ; inputMFCache [ 1 ] = hreokwut2gd ( inputs [ 0 ] ) ; inputMFCache [ 2 ]
= hreokwut2gdj ( inputs [ 0 ] ) ; inputMFCache [ 3 ] = hreokwut2gdjk ( inputs
[ 0 ] ) ; inputMFCache [ 4 ] = hreokwut2gdjko ( inputs [ 0 ] ) ; inputMFCache
[ 5 ] = hreokwut2gdjkol ( inputs [ 0 ] ) ; inputMFCache [ 6 ] = axsykwkxwe (
inputs [ 0 ] ) ; inputMFCache [ 7 ] = in5ri50dlf ( inputs [ 0 ] ) ;
inputMFCache [ 8 ] = pgapnh45gq ( inputs [ 0 ] ) ; inputMFCache [ 9 ] =
npwqakajio ( inputs [ 0 ] ) ; inputMFCache [ 10 ] = mlpjo4bmas ( inputs [ 0 ]
) ; inputMFCache [ 11 ] = b0j5dwfnup ( inputs [ 0 ] ) ; inputMFCache [ 12 ] =
hdlxuksdgw ( inputs [ 0 ] ) ; inputMFCache [ 13 ] = dn5buzmxn2 ( inputs [ 0 ]
) ; inputMFCache [ 14 ] = iitkhjtjcy ( inputs [ 0 ] ) ; inputMFCache [ 15 ] =
hjomvahrvg ( inputs [ 0 ] ) ; inputMFCache [ 16 ] = lp5drioy53 ( inputs [ 0 ]
) ; inputMFCache [ 17 ] = ktu3arpgco ( inputs [ 1 ] ) ; inputMFCache [ 18 ] =
ozzkor2pxk ( inputs [ 1 ] ) ; inputMFCache [ 19 ] = nwar2n0cki ( inputs [ 1 ]
) ; inputMFCache [ 20 ] = gsmrfosod0 ( inputs [ 1 ] ) ; inputMFCache [ 21 ] =
eaf5tx1bzp ( inputs [ 1 ] ) ; inputMFCache [ 22 ] = fcekiv0ivq ( inputs [ 1 ]
) ; inputMFCache [ 23 ] = jdgrtrftfo ( inputs [ 1 ] ) ; inputMFCache [ 24 ] =
l4fyn5wxht ( inputs [ 1 ] ) ; inputMFCache [ 25 ] = hzhxzcgq55 ( inputs [ 1 ]
) ; inputMFCache [ 26 ] = nkdgwpvlfl ( inputs [ 1 ] ) ; inputMFCache [ 27 ] =
dqhxqnckhx ( inputs [ 1 ] ) ; inputMFCache [ 28 ] = mvvq3sputa ( inputs [ 1 ]
) ; inputMFCache [ 29 ] = h3jqsw15u2 ( inputs [ 1 ] ) ; inputMFCache [ 30 ] =
i4chw0sxqp ( inputs [ 1 ] ) ; inputMFCache [ 31 ] = b3kwipbkov ( inputs [ 1 ]
) ; inputMFCache [ 32 ] = f4e2aj13pn ( inputs [ 1 ] ) ; inputMFCache [ 33 ] =
gldtpcavkq ( inputs [ 1 ] ) ; inputMFCache [ 34 ] = hc42otrco0 ( inputs [ 2 ]
) ; inputMFCache [ 35 ] = o5a4yjmynb ( inputs [ 2 ] ) ; inputMFCache [ 36 ] =
hizipbzabc ( inputs [ 2 ] ) ; inputMFCache [ 37 ] = en3jce5uc2 ( inputs [ 2 ]
) ; inputMFCache [ 38 ] = ot1v25kshk ( inputs [ 2 ] ) ; inputMFCache [ 39 ] =
nmkvshzwcr ( inputs [ 2 ] ) ; inputMFCache [ 40 ] = kpygtygplf ( inputs [ 2 ]
) ; inputMFCache [ 41 ] = agizaegf0s ( inputs [ 2 ] ) ; inputMFCache [ 42 ] =
c2w4nmjdem ( inputs [ 2 ] ) ; inputMFCache [ 43 ] = l10pgd0qs1 ( inputs [ 2 ]
) ; inputMFCache [ 44 ] = au25hqnym5 ( inputs [ 2 ] ) ; inputMFCache [ 45 ] =
cvrh1hvtwp ( inputs [ 2 ] ) ; inputMFCache [ 46 ] = mr1ni3qsf3 ( inputs [ 2 ]
) ; inputMFCache [ 47 ] = lbw3mbjodh ( inputs [ 2 ] ) ; inputMFCache [ 48 ] =
g31rp3xrmo ( inputs [ 2 ] ) ; inputMFCache [ 49 ] = bs0eiqr0lz ( inputs [ 2 ]
) ; inputMFCache [ 50 ] = iqq152nmwq ( inputs [ 2 ] ) ; inputMFCache [ 51 ] =
llnwp3glou ( inputs [ 3 ] ) ; inputMFCache [ 52 ] = ohpeyaqemu ( inputs [ 3 ]
) ; inputMFCache [ 53 ] = l0bfcxl4ij ( inputs [ 3 ] ) ; inputMFCache [ 54 ] =
mttqebepkv ( inputs [ 3 ] ) ; inputMFCache [ 55 ] = ahyz4ujy2m ( inputs [ 3 ]
) ; inputMFCache [ 56 ] = dpodqo5al0 ( inputs [ 3 ] ) ; inputMFCache [ 57 ] =
frgbu11pop ( inputs [ 3 ] ) ; inputMFCache [ 58 ] = ab2urit5ta ( inputs [ 3 ]
) ; inputMFCache [ 59 ] = iwbhnwoumx ( inputs [ 3 ] ) ; inputMFCache [ 60 ] =
mco1nacpwr ( inputs [ 3 ] ) ; inputMFCache [ 61 ] = he3ix00etv ( inputs [ 3 ]
) ; inputMFCache [ 62 ] = hf41dokcgg ( inputs [ 3 ] ) ; inputMFCache [ 63 ] =
i1yc3df0sl ( inputs [ 3 ] ) ; inputMFCache [ 64 ] = lgom50ykmj ( inputs [ 3 ]
) ; inputMFCache [ 65 ] = kncq00cuet ( inputs [ 3 ] ) ; inputMFCache [ 66 ] =
bbitwyv5hr ( inputs [ 3 ] ) ; inputMFCache [ 67 ] = b5oqxcb54i ( inputs [ 3 ]
) ; inputMFCache [ 68 ] = c1atccrh2i ( inputs [ 4 ] ) ; inputMFCache [ 69 ] =
nxrl01hzqn ( inputs [ 4 ] ) ; inputMFCache [ 70 ] = muDoubleScalarExp ( - ( (
inputs [ 4 ] - 0.35158895802751366 ) * ( inputs [ 4 ] - 0.35158895802751366 )
) / 1.2663780666475886 ) ; inputMFCache [ 71 ] = muDoubleScalarExp ( - ( (
inputs [ 4 ] - - 0.176026523540402 ) * ( inputs [ 4 ] - - 0.176026523540402 )
) / 1.2663780304851735 ) ; inputMFCache [ 72 ] = muDoubleScalarExp ( - ( (
inputs [ 4 ] - 0.41419131216920613 ) * ( inputs [ 4 ] - 0.41419131216920613 )
) / 1.2663780836298815 ) ; inputMFCache [ 73 ] = muDoubleScalarExp ( - ( (
inputs [ 4 ] - 1.1251618263933785 ) * ( inputs [ 4 ] - 1.1251618263933785 ) )
/ 1.2663779065036749 ) ; inputMFCache [ 74 ] = muDoubleScalarExp ( - ( (
inputs [ 4 ] - - 1.0214662249278372 ) * ( inputs [ 4 ] - - 1.0214662249278372
) ) / 1.266378064030556 ) ; inputMFCache [ 75 ] = muDoubleScalarExp ( - ( (
inputs [ 4 ] - 0.98457025985712843 ) * ( inputs [ 4 ] - 0.98457025985712843 )
) / 1.2663781251925221 ) ; inputMFCache [ 76 ] = muDoubleScalarExp ( - ( (
inputs [ 4 ] - - 0.63897694909353653 ) * ( inputs [ 4 ] - -
0.63897694909353653 ) ) / 1.2663782275082844 ) ; inputMFCache [ 77 ] =
muDoubleScalarExp ( - ( ( inputs [ 4 ] - - 1.4461715069072265 ) * ( inputs [
4 ] - - 1.4461715069072265 ) ) / 1.2663781133280465 ) ; inputMFCache [ 78 ] =
muDoubleScalarExp ( - ( ( inputs [ 4 ] - 0.74943243745302213 ) * ( inputs [ 4
] - 0.74943243745302213 ) ) / 1.2663780824088235 ) ; inputMFCache [ 79 ] =
muDoubleScalarExp ( - ( ( inputs [ 4 ] - 0.728641588611813 ) * ( inputs [ 4 ]
- 0.728641588611813 ) ) / 1.2663780786467729 ) ; inputMFCache [ 80 ] =
muDoubleScalarExp ( - ( ( inputs [ 4 ] - - 0.052411567152145469 ) * ( inputs
[ 4 ] - - 0.052411567152145469 ) ) / 1.2663780026862672 ) ; inputMFCache [ 81
] = muDoubleScalarExp ( - ( ( inputs [ 4 ] - 0.58166724826639815 ) * ( inputs
[ 4 ] - 0.58166724826639815 ) ) / 1.2663781175745141 ) ; inputMFCache [ 82 ]
= muDoubleScalarExp ( - ( ( inputs [ 4 ] - - 2.4828424523305377 ) * ( inputs
[ 4 ] - - 2.4828424523305377 ) ) / 1.2663783769316659 ) ; inputMFCache [ 83 ]
= muDoubleScalarExp ( - ( ( inputs [ 4 ] - - 1.8141146867100475 ) * ( inputs
[ 4 ] - - 1.8141146867100475 ) ) / 1.2663782600601121 ) ; inputMFCache [ 84 ]
= muDoubleScalarExp ( - ( ( inputs [ 4 ] - - 1.0981953706350078 ) * ( inputs
[ 4 ] - - 1.0981953706350078 ) ) / 1.2663781051759948 ) ; inputMFCache [ 85 ]
= muDoubleScalarExp ( - ( ( inputs [ 5 ] - 0.147891340462901 ) * ( inputs [ 5
] - 0.147891340462901 ) ) / 1.266378128710393 ) ; inputMFCache [ 86 ] =
muDoubleScalarExp ( - ( ( inputs [ 5 ] - 0.39668087692416959 ) * ( inputs [ 5
] - 0.39668087692416959 ) ) / 1.2663780865317866 ) ; inputMFCache [ 87 ] =
muDoubleScalarExp ( - ( ( inputs [ 5 ] - - 1.063922903380754 ) * ( inputs [ 5
] - - 1.063922903380754 ) ) / 1.2663780701195995 ) ; inputMFCache [ 88 ] =
muDoubleScalarExp ( - ( ( inputs [ 5 ] - 0.82040976649298392 ) * ( inputs [ 5
] - 0.82040976649298392 ) ) / 1.2663781053342147 ) ; inputMFCache [ 89 ] =
muDoubleScalarExp ( - ( ( inputs [ 5 ] - - 0.27135429234047492 ) * ( inputs [
5 ] - - 0.27135429234047492 ) ) / 1.2663780991366496 ) ; inputMFCache [ 90 ]
= muDoubleScalarExp ( - ( ( inputs [ 5 ] - 0.37504103393606175 ) * ( inputs [
5 ] - 0.37504103393606175 ) ) / 1.266378101351368 ) ; inputMFCache [ 91 ] =
muDoubleScalarExp ( - ( ( inputs [ 5 ] - - 0.97781422188854916 ) * ( inputs [
5 ] - - 0.97781422188854916 ) ) / 1.2663780226836974 ) ; inputMFCache [ 92 ]
= muDoubleScalarExp ( - ( ( inputs [ 5 ] - - 1.2704498980466623 ) * ( inputs
[ 5 ] - - 1.2704498980466623 ) ) / 1.2663780934597213 ) ; inputMFCache [ 93 ]
= muDoubleScalarExp ( - ( ( inputs [ 5 ] - 1.2459821106538038 ) * ( inputs [
5 ] - 1.2459821106538038 ) ) / 1.266378279707548 ) ; inputMFCache [ 94 ] =
muDoubleScalarExp ( - ( ( inputs [ 5 ] - 0.871673274205003 ) * ( inputs [ 5 ]
- 0.871673274205003 ) ) / 1.2663781044624147 ) ; inputMFCache [ 95 ] =
muDoubleScalarExp ( - ( ( inputs [ 5 ] - 1.5161077991590008 ) * ( inputs [ 5
] - 1.5161077991590008 ) ) / 1.2663780792171155 ) ; inputMFCache [ 96 ] =
muDoubleScalarExp ( - ( ( inputs [ 5 ] - 1.1251618043642826 ) * ( inputs [ 5
] - 1.1251618043642826 ) ) / 1.2663780594444065 ) ; inputMFCache [ 97 ] =
muDoubleScalarExp ( - ( ( inputs [ 5 ] - 0.70314394473136776 ) * ( inputs [ 5
] - 0.70314394473136776 ) ) / 1.2663775916018205 ) ; inputMFCache [ 98 ] =
muDoubleScalarExp ( - ( ( inputs [ 5 ] - 1.1226478934576367 ) * ( inputs [ 5
] - 1.1226478934576367 ) ) / 1.2663781184310705 ) ; inputMFCache [ 99 ] =
muDoubleScalarExp ( - ( ( inputs [ 5 ] - 0.03988478759942557 ) * ( inputs [ 5
] - 0.03988478759942557 ) ) / 1.2663783768300441 ) ; inputMFCache [ 100 ] =
muDoubleScalarExp ( - ( ( inputs [ 5 ] - 0.92415940755553228 ) * ( inputs [ 5
] - 0.92415940755553228 ) ) / 1.2663780672705012 ) ; inputMFCache [ 101 ] =
muDoubleScalarExp ( - ( ( inputs [ 5 ] - - 2.4442989263443038 ) * ( inputs [
5 ] - - 2.4442989263443038 ) ) / 1.2663779314280539 ) ; } static void
jr4an4yar2 ( const real_T inputs [ 6 ] , real_T outputMFCache [ 17 ] ) {
real_T y ; int32_T i ; static const real_T b [ 7 ] = { -
0.00019755175488685625 , 0.0033579716645031252 , - 0.00086807930967043655 ,
0.71394548357352294 , 0.11250574481346193 , 0.0043498363351546542 ,
0.00091913485512201177 } ; static const real_T c [ 7 ] = {
0.0003726181383652269 , 0.0047089164013075493 , - 0.00055937076137497739 ,
0.71326865485935209 , 0.1132431970394927 , 0.0039629833854784 ,
0.00014796313352202509 } ; static const real_T d [ 7 ] = {
6.5470486938896385E-5 , 0.0040646872108069526 , - 0.00041667330545142956 ,
0.71408668939832987 , 0.11296179635602661 , 0.0032426785508078908 ,
0.00063262367400355166 } ; static const real_T e [ 7 ] = {
1.6038102747500911E-5 , 0.0037637667943606003 , - 0.0011458582523343013 ,
0.71205928260785434 , 0.11290257157790357 , 0.0028758960863856276 , -
0.0011060465034059208 } ; static const real_T f [ 7 ] = { -
0.00040531917995635821 , 0.0038683674249084155 , - 0.0010959415055401757 ,
0.71457732227636561 , 0.11218534884732036 , 0.004347202156068289 , -
0.0011544975628809389 } ; static const real_T g [ 7 ] = {
0.0010415846292594058 , 0.0040573079767897641 , - 0.00085903717713356725 ,
0.71407332209203211 , 0.11419059128751678 , 0.004633344810075964 ,
0.001167315719190914 } ; static const real_T h [ 7 ] = { -
0.00039248230231936446 , 0.0045922512167214909 , - 0.00057927450103801409 ,
0.71345812785603668 , 0.11233215184866777 , 0.0030058418600856034 ,
0.00049532768156839227 } ; static const real_T j [ 7 ] = { -
0.00034588319605568683 , 0.0034926708550432552 , 0.00014724475702266427 ,
0.71331570609387007 , 0.11221350731546578 , 0.0051083736006160146 , -
0.00020743669666268522 } ; static const real_T k [ 7 ] = { -
0.00027774614142335609 , 0.0037639118012016966 , - 0.00041487635831574784 ,
0.71279256610923813 , 0.11234993343470791 , 0.00420945980400218 ,
0.00029503985442751315 } ; static const real_T l [ 7 ] = { -
0.00037720996220366975 , 0.0062654571860792947 , - 0.00018727285468653389 ,
0.71329458051391093 , 0.11204189652659753 , 0.003278029878560222 ,
0.00022390667876612074 } ; static const real_T m [ 7 ] = {
0.00018015409019721823 , 0.004047930140081514 , - 0.00044415677215783444 ,
0.71352223126791292 , 0.11301991006789111 , 0.0041553188623572462 ,
0.00020663266556681707 } ; static const real_T n [ 7 ] = { -
0.0023779294214270152 , 0.0013286302966774716 , 0.0001680668930936039 ,
0.71960667428198677 , 0.10978206946278476 , 0.0028404860061672483 , -
0.0028937911067289128 } ; static const real_T o [ 7 ] = {
0.00011858770087826819 , 0.000660629298718102 , 0.00010029716419579085 ,
0.711464641214865 , 0.11308447695855355 , 0.0050796545021829535 , -
0.00061818621093229155 } ; static const real_T p [ 7 ] = {
0.00018814677807878021 , 0.005836274933460164 , - 0.00038648708894955316 ,
0.713523575097745 , 0.11297974134395888 , 0.00298093650426691 ,
0.00023283417277820135 } ; static const real_T q [ 7 ] = { -
1.2817260055755097E-5 , - 3.6094422482920248E-6 , 0.00014632484407795155 ,
0.71132446897843959 , 0.11186733539340635 , 0.0034087406353954545 ,
1.4002238768808757E-5 } ; static const real_T r [ 7 ] = { -
0.00012714197333866297 , 4.1057253545188374E-5 , 0.0015222904356087803 ,
0.71348026364721007 , 0.11206738318653992 , 0.0057614509531723713 , -
0.0010823484587678678 } ; static const real_T s [ 7 ] = { -
7.380938953931809E-5 , - 0.0001065083716689046 , 0.00067650509548928953 ,
0.71464503551825032 , 0.11527387561445629 , 0.0054840451792611752 , -
0.0022657463871786129 } ; y = 0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { y +=
inputs [ i ] * b [ i ] ; } outputMFCache [ 0 ] = y + 0.00091913485512201177 ;
y = 0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { y += inputs [ i ] * c [ i ] ; }
outputMFCache [ 1 ] = y + 0.00014796313352202509 ; y = 0.0 ; for ( i = 0 ; i
< 6 ; i ++ ) { y += inputs [ i ] * d [ i ] ; } outputMFCache [ 2 ] = y +
0.00063262367400355166 ; y = 0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { y += inputs
[ i ] * e [ i ] ; } outputMFCache [ 3 ] = y + - 0.0011060465034059208 ; y =
0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { y += inputs [ i ] * f [ i ] ; }
outputMFCache [ 4 ] = y + - 0.0011544975628809389 ; y = 0.0 ; for ( i = 0 ; i
< 6 ; i ++ ) { y += inputs [ i ] * g [ i ] ; } outputMFCache [ 5 ] = y +
0.001167315719190914 ; y = 0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { y += inputs [
i ] * h [ i ] ; } outputMFCache [ 6 ] = y + 0.00049532768156839227 ; y = 0.0
; for ( i = 0 ; i < 6 ; i ++ ) { y += inputs [ i ] * j [ i ] ; }
outputMFCache [ 7 ] = y + - 0.00020743669666268522 ; y = 0.0 ; for ( i = 0 ;
i < 6 ; i ++ ) { y += inputs [ i ] * k [ i ] ; } outputMFCache [ 8 ] = y +
0.00029503985442751315 ; y = 0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { y += inputs
[ i ] * l [ i ] ; } outputMFCache [ 9 ] = y + 0.00022390667876612074 ; y =
0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { y += inputs [ i ] * m [ i ] ; }
outputMFCache [ 10 ] = y + 0.00020663266556681707 ; y = 0.0 ; for ( i = 0 ; i
< 6 ; i ++ ) { y += inputs [ i ] * n [ i ] ; } outputMFCache [ 11 ] = y + -
0.0028937911067289128 ; y = 0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { y += inputs
[ i ] * o [ i ] ; } outputMFCache [ 12 ] = y + - 0.00061818621093229155 ; y =
0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { y += inputs [ i ] * p [ i ] ; }
outputMFCache [ 13 ] = y + 0.00023283417277820135 ; y = 0.0 ; for ( i = 0 ; i
< 6 ; i ++ ) { y += inputs [ i ] * q [ i ] ; } outputMFCache [ 14 ] = y +
1.4002238768808757E-5 ; y = 0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { y += inputs
[ i ] * r [ i ] ; } outputMFCache [ 15 ] = y + - 0.0010823484587678678 ; y =
0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { y += inputs [ i ] * s [ i ] ; }
outputMFCache [ 16 ] = y + - 0.0022657463871786129 ; } static int32_T
m3kqejtpns ( int32_T x ) { int32_T y ; if ( x < 0 ) { if ( x <= MIN_int32_T )
{ y = MAX_int32_T ; } else { y = - x ; } } else { y = x ; } return y ; }
static real_T ggtfo5c3sr ( const real_T x [ 2 ] ) { return x [ 0 ] * x [ 1 ]
; } void MdlInitialize ( void ) { rtX . jgttm3vruc [ 0 ] = 0.0 ; rtX .
jgttm3vruc [ 1 ] = 0.0 ; rtX . jgttm3vruc [ 2 ] = 0.0 ; rtDW . ffivs0dop4 =
rtP . UnitDelay3_InitialCondition ; rtDW . hzhfyreth4 = rtP .
UnitDelay4_InitialCondition ; rtDW . kwavuotffo = rtP .
UnitDelay5_InitialCondition ; rtDW . dfmv1z0a2o = rtP .
UnitDelay_InitialCondition ; rtDW . h54i5qz1fn = rtP .
UnitDelay1_InitialCondition ; rtDW . cstkwtxlwv = rtP .
UnitDelay2_InitialCondition ; rtX . hqktmca22n = rtP . Integrator_IC ; } void
MdlStart ( void ) { { void * * slioCatalogueAddr = rt_slioCatalogueAddr ( ) ;
void * r2 = ( NULL ) ; void * * pOSigstreamManagerAddr = ( NULL ) ; const int
maxErrorBufferSize = 16384 ; char errMsgCreatingOSigstreamManager [ 16384 ] ;
bool errorCreatingOSigstreamManager = false ; const char *
errorAddingR2SharedResource = ( NULL ) ; * slioCatalogueAddr =
rtwGetNewSlioCatalogue ( rt_GetMatSigLogSelectorFileName ( ) ) ;
errorAddingR2SharedResource = rtwAddR2SharedResource (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) , 1 ) ; if (
errorAddingR2SharedResource != ( NULL ) ) { rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = ( NULL ) ; ssSetErrorStatus ( rtS
, errorAddingR2SharedResource ) ; return ; } r2 = rtwGetR2SharedResource (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ) ;
pOSigstreamManagerAddr = rt_GetOSigstreamManagerAddr ( ) ;
errorCreatingOSigstreamManager = rtwOSigstreamManagerCreateInstance (
rt_GetMatSigLogSelectorFileName ( ) , r2 , pOSigstreamManagerAddr ,
errMsgCreatingOSigstreamManager , maxErrorBufferSize ) ; if (
errorCreatingOSigstreamManager ) { * pOSigstreamManagerAddr = ( NULL ) ;
ssSetErrorStatus ( rtS , errMsgCreatingOSigstreamManager ) ; return ; } } {
bool externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( ) ; rtwISigstreamManagerGetInputIsInDatasetFormat (
pISigstreamManager , & externalInputIsInDatasetFormat ) ; if (
externalInputIsInDatasetFormat ) { } } { static int_T rt_ToWksWidths [ ] = {
1 } ; static int_T rt_ToWksNumDimensions [ ] = { 1 } ; static int_T
rt_ToWksDimensions [ ] = { 1 } ; static boolean_T rt_ToWksIsVarDims [ ] = { 0
} ; static void * rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T
rt_ToWksCurrSigDimsSize [ ] = { 4 } ; static BuiltInDTypeId
rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T rt_ToWksComplexSignals
[ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0 } ; static
RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) }
; static const char_T * rt_ToWksLabels [ ] = { "" } ; static RTWLogSignalInfo
rt_ToWksSignalInfo = { 1 , rt_ToWksWidths , rt_ToWksNumDimensions ,
rt_ToWksDimensions , rt_ToWksIsVarDims , rt_ToWksCurrSigDims ,
rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds , rt_ToWksComplexSignals ,
rt_ToWksFrameData , rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels }
, ( NULL ) , ( NULL ) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , (
NULL ) } ; static const char_T rt_ToWksBlockName [ ] =
"ModelSinSubtractive/To Workspace" ; rtDW . ekjfjdrtol . LoggedData =
rt_CreateStructLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) ,
ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "performance" ,
1 , 0 , 1 , 0.0 , & rt_ToWksSignalInfo , rt_ToWksBlockName ) ; if ( rtDW .
ekjfjdrtol . LoggedData == ( NULL ) ) return ; } MdlInitialize ( ) ; } void
MdlOutputs ( int_T tid ) { int_T iy ; real_T sumAntecedentOutputs ; real_T
inputMFCache [ 102 ] ; int32_T inputID ; static const int8_T b [ 102 ] = { 1
, 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 1 ,
2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 1 , 2
, 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 1 , 2 ,
3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 1 , 2 , 3
, 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 1 , 2 , 3 ,
4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 } ; real_T
aggregatedOutputs ; real_T outputMFCache [ 17 ] ; real_T cjmbdwlftv [ 17 ] ;
real_T tmp [ 6 ] ; real_T hq2wlj2abw [ 2 ] ; int32_T q0 ; int32_T q1 ; rtB .
gvwecitbto = 0.0 ; rtB . gvwecitbto += rtP . TransferFcn_C [ 0 ] * rtX .
jgttm3vruc [ 0 ] ; rtB . gvwecitbto += rtP . TransferFcn_C [ 1 ] * rtX .
jgttm3vruc [ 1 ] ; rtB . gvwecitbto += rtP . TransferFcn_C [ 2 ] * rtX .
jgttm3vruc [ 2 ] ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . nmtqc4pdl1 =
rtDW . ffivs0dop4 ; rtB . exwastb10m = rtDW . hzhfyreth4 ; rtB . gcuuy2sa0y =
rtDW . kwavuotffo ; rtB . pdjzgfaxfm = rtDW . dfmv1z0a2o ; rtB . polb5q05dh =
rtDW . h54i5qz1fn ; rtB . naft2q4p3v = rtDW . cstkwtxlwv ; if ( ssIsSampleHit
( rtS , 1 , 0 ) ) { sumAntecedentOutputs = 0.0 ; tmp [ 0 ] = rtB . nmtqc4pdl1
; tmp [ 1 ] = rtB . exwastb10m ; tmp [ 2 ] = rtB . gcuuy2sa0y ; tmp [ 3 ] =
rtB . pdjzgfaxfm ; tmp [ 4 ] = rtB . polb5q05dh ; tmp [ 5 ] = rtB .
naft2q4p3v ; ntpvcpy4zp ( tmp , inputMFCache ) ; aggregatedOutputs = 0.0 ;
tmp [ 0 ] = rtB . nmtqc4pdl1 ; tmp [ 1 ] = rtB . exwastb10m ; tmp [ 2 ] = rtB
. gcuuy2sa0y ; tmp [ 3 ] = rtB . pdjzgfaxfm ; tmp [ 4 ] = rtB . polb5q05dh ;
tmp [ 5 ] = rtB . naft2q4p3v ; jr4an4yar2 ( tmp , outputMFCache ) ; for ( iy
= 0 ; iy < 17 ; iy ++ ) { cjmbdwlftv [ iy ] = 1.0 ; for ( inputID = 0 ;
inputID < 6 ; inputID ++ ) { q0 = m3kqejtpns ( 17 * inputID ) ; hq2wlj2abw [
0 ] = cjmbdwlftv [ iy ] ; q1 = b [ 17 * inputID + iy ] ; if ( ( q0 < 0 ) && (
q1 < MIN_int32_T - q0 ) ) { q0 = MIN_int32_T ; } else if ( ( q0 > 0 ) && ( q1
> MAX_int32_T - q0 ) ) { q0 = MAX_int32_T ; } else { q0 += q1 ; } hq2wlj2abw
[ 1 ] = inputMFCache [ q0 - 1 ] ; cjmbdwlftv [ iy ] = ggtfo5c3sr ( hq2wlj2abw
) ; } sumAntecedentOutputs += cjmbdwlftv [ iy ] ; aggregatedOutputs +=
outputMFCache [ iy ] * cjmbdwlftv [ iy ] ; } if ( sumAntecedentOutputs == 0.0
) { rtB . o1e3iwnwjt = - 0.1526961 ; } else { rtB . o1e3iwnwjt = 1.0 /
sumAntecedentOutputs * aggregatedOutputs ; } } } rtB . dpr2c4zkgy = rtX .
hqktmca22n ; { double locTime = ssGetTaskTime ( rtS , 0 ) ; ; if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 0 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateStructLogVar ( (
StructLogVar * ) rtDW . ekjfjdrtol . LoggedData , & locTime , & rtB .
dpr2c4zkgy ) ; } } } } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { } if (
ssIsSampleHit ( rtS , 1 , 0 ) && ssIsSampleHit ( rtS , 2 , 0 ) ) { rtB .
ig1knjv2ht [ 0 ] = rtB . nmtqc4pdl1 ; rtB . ig1knjv2ht [ 1 ] = rtB .
exwastb10m ; rtB . ig1knjv2ht [ 2 ] = rtB . gcuuy2sa0y ; rtB . ig1knjv2ht [ 3
] = rtB . pdjzgfaxfm ; rtB . ig1knjv2ht [ 4 ] = rtB . polb5q05dh ; rtB .
ig1knjv2ht [ 5 ] = rtB . naft2q4p3v ; } rtB . ieggzvopuq = rtB . gvwecitbto -
rtB . o1e3iwnwjt ; rtB . dccdydh3mb = rtB . ieggzvopuq * rtB . ieggzvopuq ;
rtB . ofr5q4u455 = muDoubleScalarSin ( rtP . SignalGenerator_Frequency *
ssGetT ( rtS ) ) * rtP . SignalGenerator_Amplitude ; UNUSED_PARAMETER ( tid )
; } void MdlUpdate ( int_T tid ) { if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
rtDW . ffivs0dop4 = rtB . gvwecitbto ; rtDW . hzhfyreth4 = rtB . nmtqc4pdl1 ;
rtDW . kwavuotffo = rtB . exwastb10m ; rtDW . dfmv1z0a2o = rtB . ofr5q4u455 ;
rtDW . h54i5qz1fn = rtB . pdjzgfaxfm ; rtDW . cstkwtxlwv = rtB . polb5q05dh ;
} if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { } UNUSED_PARAMETER ( tid ) ; } void
MdlUpdateTID3 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void
MdlDerivatives ( void ) { XDot * _rtXdot ; _rtXdot = ( ( XDot * ) ssGetdX (
rtS ) ) ; _rtXdot -> jgttm3vruc [ 0 ] = 0.0 ; _rtXdot -> jgttm3vruc [ 0 ] +=
rtP . TransferFcn_A [ 0 ] * rtX . jgttm3vruc [ 0 ] ; _rtXdot -> jgttm3vruc [
1 ] = 0.0 ; _rtXdot -> jgttm3vruc [ 0 ] += rtP . TransferFcn_A [ 1 ] * rtX .
jgttm3vruc [ 1 ] ; _rtXdot -> jgttm3vruc [ 2 ] = 0.0 ; _rtXdot -> jgttm3vruc
[ 0 ] += rtP . TransferFcn_A [ 2 ] * rtX . jgttm3vruc [ 2 ] ; _rtXdot ->
jgttm3vruc [ 1 ] += rtX . jgttm3vruc [ 0 ] ; _rtXdot -> jgttm3vruc [ 2 ] +=
rtX . jgttm3vruc [ 1 ] ; _rtXdot -> jgttm3vruc [ 0 ] += rtB . ofr5q4u455 ;
_rtXdot -> hqktmca22n = rtB . dccdydh3mb ; } void MdlProjection ( void ) { }
void MdlTerminate ( void ) { if ( rt_slioCatalogue ( ) != ( NULL ) ) { void *
* slioCatalogueAddr = rt_slioCatalogueAddr ( ) ; rtwSaveDatasetsToMatFile (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ,
rt_GetMatSigstreamLoggingFileName ( ) ) ; rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = NULL ; } } void
MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 4 ) ;
ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU (
rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS ,
3 ) ; ssSetNumBlocks ( rtS , 25 ) ; ssSetNumBlockIO ( rtS , 13 ) ;
ssSetNumBlockParams ( rtS , 16 ) ; } void MdlInitializeSampleTimes ( void ) {
ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 0.025 ) ;
ssSetSampleTime ( rtS , 2 , 2.0 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 0.0 ) ; ssSetOffsetTime ( rtS , 2 , 0.0 ) ; }
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 2137201161U ) ;
ssSetChecksumVal ( rtS , 1 , 2325204331U ) ; ssSetChecksumVal ( rtS , 2 ,
3419479026U ) ; ssSetChecksumVal ( rtS , 3 , 1956539313U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( void ) { static struct _ssMdlInfo mdlInfo
; ( void ) memset ( ( char * ) rtS , 0 , sizeof ( SimStruct ) ) ; ( void )
memset ( ( char * ) & mdlInfo , 0 , sizeof ( struct _ssMdlInfo ) ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { real_T * x = ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ;
( void ) memset ( ( void * ) x , 0 , sizeof ( X ) ) ; } { void * dwork = (
void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork ,
0 , sizeof ( DW ) ) ; } { static DataTypeTransInfo dtInfo ; ( void ) memset (
( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS
, & dtInfo ) ; dtInfo . numDataTypes = 20 ; dtInfo . dataTypeSizes = &
rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ;
dtInfo . BTransTable = & rtBTransTable ; dtInfo . PTransTable = &
rtPTransTable ; dtInfo . dataTypeInfoTable = rtDataTypeInfoTable ; }
ModelSinSubtractive_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive
( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS ,
SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS , "ModelSinSubtractive" ) ;
ssSetPath ( rtS , "ModelSinSubtractive" ) ; ssSetTStart ( rtS , 0.0 ) ;
ssSetTFinal ( rtS , 500.0 ) ; { static RTWLogInfo rt_DataLoggingInfo ;
rt_DataLoggingInfo . loggingInterval = NULL ; ssSetRTWLogInfo ( rtS , &
rt_DataLoggingInfo ) ; } { rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) ,
( NULL ) ) ; rtliSetLogXSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 1000 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo (
rtS ) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 )
; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssSolverInfo slvrInfo ; static boolean_T contStatesDisabled [ 4 ] ; static
real_T absTol [ 4 ] = { 1.0000000000000001E-7 , 1.0000000000000001E-7 ,
1.0000000000000001E-7 , 1.0000000000000001E-7 } ; static uint8_T
absTolControl [ 4 ] = { 0U , 0U , 0U , 0U } ; static ssNonContDerivSigInfo
nonContDerivSigInfo [ 1 ] = { { 1 * sizeof ( real_T ) , ( char * ) ( & rtB .
o1e3iwnwjt ) , ( NULL ) } } ; ssSetSolverRelTol ( rtS , 0.0001 ) ;
ssSetStepSize ( rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 ) ;
ssSetMaxNumMinSteps ( rtS , - 1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ;
ssSetMaxStepSize ( rtS , 0.01 ) ; ssSetSolverMaxOrder ( rtS , - 1 ) ;
ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , ( NULL ) ) ;
ssSetNumOutputTimes ( rtS , 0 ) ; ssSetOutputTimesOnly ( rtS , 0 ) ;
ssSetOutputTimesIndex ( rtS , 0 ) ; ssSetZCCacheNeedsReset ( rtS , 0 ) ;
ssSetDerivCacheNeedsReset ( rtS , 0 ) ; ssSetNumNonContDerivSigInfos ( rtS ,
1 ) ; ssSetNonContDerivSigInfos ( rtS , nonContDerivSigInfo ) ;
ssSetSolverInfo ( rtS , & slvrInfo ) ; ssSetSolverName ( rtS ,
"VariableStepAuto" ) ; ssSetVariableStepSolver ( rtS , 1 ) ;
ssSetSolverConsistencyChecking ( rtS , 0 ) ; ssSetSolverAdaptiveZcDetection (
rtS , 0 ) ; ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetAbsTolVector (
rtS , absTol ) ; ssSetAbsTolControlVector ( rtS , absTolControl ) ;
ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetSolverStateProjection ( rtS , 0 ) ; ssSetSolverMassMatrixType ( rtS , (
ssMatrixType ) 0 ) ; ssSetSolverMassMatrixNzMax ( rtS , 0 ) ;
ssSetModelOutputs ( rtS , MdlOutputs ) ; ssSetModelLogData ( rtS ,
rt_UpdateTXYLogVars ) ; ssSetModelLogDataIfInInterval ( rtS ,
rt_UpdateTXXFYLogVars ) ; ssSetModelUpdate ( rtS , MdlUpdate ) ;
ssSetModelDerivatives ( rtS , MdlDerivatives ) ;
ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ;
ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS , INT_MIN )
; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 0 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; }
ssSetChecksumVal ( rtS , 0 , 2137201161U ) ; ssSetChecksumVal ( rtS , 1 ,
2325204331U ) ; ssSetChecksumVal ( rtS , 2 , 3419479026U ) ; ssSetChecksumVal
( rtS , 3 , 1956539313U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 5 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = & rtAlwaysEnabled ;
systemRan [ 4 ] = & rtAlwaysEnabled ; rteiSetModelMappingInfoPtr (
ssGetRTWExtModeInfo ( rtS ) , & ssGetModelMappingInfo ( rtS ) ) ;
rteiSetChecksumsPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetChecksums ( rtS ) )
; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetTPtr ( rtS ) ) ; } return
rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 3 ; void MdlOutputsParameterSampleTime (
int_T tid ) { UNUSED_PARAMETER ( tid ) ; }
