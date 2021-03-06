#include "__cf_ModelSquareFCM.h"
#include "rt_logging_mmi.h"
#include "ModelSquareFCM_capi.h"
#include <math.h>
#include "ModelSquareFCM.h"
#include "ModelSquareFCM_private.h"
#include "ModelSquareFCM_dt.h"
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
"slprj//raccel//ModelSquareFCM//ModelSquareFCM_Jpattern.mat" ; const int_T
gblNumRootInportBlks = 0 ; const int_T gblNumModelInputs = 0 ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
const int_T gblInportDataTypeIdx [ ] = { - 1 } ; const int_T gblInportDims [
] = { - 1 } ; const int_T gblInportComplex [ ] = { - 1 } ; const int_T
gblInportInterpoFlag [ ] = { - 1 } ; const int_T gblInportContinuous [ ] = {
- 1 } ; int_T enableFcnCallFlag [ ] = { 1 , 1 , 1 , 1 } ;
#include "simstruc.h"
#include "fixedpoint.h"
B rtB ; X rtX ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS =
& model_S ; static real_T csdyxksc3d ( real_T x ) ; static real_T csdyxksc3d1
( real_T x ) ; static real_T csdyxksc3d1q ( real_T x ) ; static real_T
csdyxksc3d1qi ( real_T x ) ; static real_T csdyxksc3d1qiw ( real_T x ) ;
static real_T csdyxksc3d1qiwp ( real_T x ) ; static real_T nm0n0kahlq (
real_T x ) ; static real_T omwas3dsje ( real_T x ) ; static real_T cd13czpkjz
( real_T x ) ; static real_T dewn1321dc ( real_T x ) ; static real_T
ojbiwsydrq ( real_T x ) ; static real_T odpdsmvhbk ( real_T x ) ; static
real_T flgmowbuyt ( real_T x ) ; static real_T cdwvpus1fl ( real_T x ) ;
static real_T l2h0u0rugm ( real_T x ) ; static real_T irwmj4qqti ( real_T x )
; static real_T olzmclvzeo ( real_T x ) ; static real_T fntttuhpji ( real_T x
) ; static real_T m1zuact3xz ( real_T x ) ; static real_T amjqtnuqer ( real_T
x ) ; static real_T ksmqnnkdnk ( real_T x ) ; static real_T lvkfmvqcnl (
real_T x ) ; static real_T oqldf24f1x ( real_T x ) ; static real_T kvtxxru0ah
( real_T x ) ; static real_T a0fvyxwm3q ( real_T x ) ; static real_T
bszjvpd5vp ( real_T x ) ; static real_T jhwotcwe3u ( real_T x ) ; static
real_T gxw4ir4ndw ( real_T x ) ; static real_T iuxp14fqx1 ( real_T x ) ;
static real_T mc05ielfdi ( real_T x ) ; static real_T kzhyltmp2h ( real_T x )
; static real_T cinivsixj1 ( real_T x ) ; static real_T pcmrhmebvu ( real_T x
) ; static real_T ieudc5zffk ( real_T x ) ; static real_T ojurmsiid3 ( real_T
x ) ; static real_T mpqo42kzyb ( real_T x ) ; static real_T fss5r1vnsg (
real_T x ) ; static real_T kmc0vicjzz ( real_T x ) ; static real_T bn35debgny
( real_T x ) ; static real_T mtxkxox0mo ( real_T x ) ; static real_T
e0voe54yvd ( real_T x ) ; static real_T mlbm3udzcf ( real_T x ) ; static
real_T n2f0vpq5cm ( real_T x ) ; static real_T bdy4ys3zy5 ( real_T x ) ;
static real_T lntbmvt44v ( real_T x ) ; static real_T dx2vyt5s3c ( real_T x )
; static real_T ov0dkx3sq4 ( real_T x ) ; static real_T fbaltqr3wm ( real_T x
) ; static real_T lrr2mphdii ( real_T x ) ; static real_T fpjvkqd30w ( real_T
x ) ; static real_T maz4b2znro ( real_T x ) ; static real_T lqyj1nlya5 (
real_T x ) ; static real_T m2w0y0svis ( real_T x ) ; static real_T jv54cdmmoi
( real_T x ) ; static real_T hc2yzti4rq ( real_T x ) ; static real_T
kuov3d2cti ( real_T x ) ; static real_T h4vnwxpcyo ( real_T x ) ; static
real_T ahnbwx1vup ( real_T x ) ; static real_T jfyj0bg2pa ( real_T x ) ;
static real_T k3y514lex4 ( real_T x ) ; static real_T hzxxp312t4 ( real_T x )
; static real_T flepbdp0oo ( real_T x ) ; static real_T ivqisqtz0b ( real_T x
) ; static real_T ljoj3awftl ( real_T x ) ; static real_T mufigxfnhf ( real_T
x ) ; static real_T jng1pgdpgm ( real_T x ) ; static real_T eqo22jai00 (
real_T x ) ; static real_T byslud4wnn ( real_T x ) ; static real_T ppucqq3eqw
( real_T x ) ; static real_T izv5d1xxul ( real_T x ) ; static void a5msd4wa5r
( const real_T inputs [ 6 ] , real_T inputMFCache [ 102 ] ) ; static void
f33chpldl5 ( const real_T inputs [ 6 ] , real_T outputMFCache [ 17 ] ) ;
static int32_T aipkft4veh ( int32_T x ) ; static real_T bhgyktkxls ( const
real_T x [ 2 ] ) ; static real_T csdyxksc3d ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - 0.4272301312496628 ) * ( x - 0.4272301312496628
) ) / 0.10353291020232459 ) ; } static real_T csdyxksc3d1 ( real_T x ) {
return muDoubleScalarExp ( - ( ( x - - 0.38122150403267741 ) * ( x - -
0.38122150403267741 ) ) / 0.13483886670591741 ) ; } static real_T
csdyxksc3d1q ( real_T x ) { return muDoubleScalarExp ( - ( ( x -
0.21392751723934378 ) * ( x - 0.21392751723934378 ) ) / 0.095303012393148548
) ; } static real_T csdyxksc3d1qi ( real_T x ) { return muDoubleScalarExp ( -
( ( x - 0.1628782151721947 ) * ( x - 0.1628782151721947 ) ) /
0.095511337905905866 ) ; } static real_T csdyxksc3d1qiw ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - - 0.87574614633768355 ) * ( x - -
0.87574614633768355 ) ) / 0.2641990004187067 ) ; } static real_T
csdyxksc3d1qiwp ( real_T x ) { return muDoubleScalarExp ( - ( ( x -
0.34740147636502611 ) * ( x - 0.34740147636502611 ) ) / 0.10433093567690199 )
; } static real_T nm0n0kahlq ( real_T x ) { return muDoubleScalarExp ( - ( (
x - 0.5077153474611914 ) * ( x - 0.5077153474611914 ) ) / 0.11856916238113138
) ; } static real_T omwas3dsje ( real_T x ) { return muDoubleScalarExp ( - (
( x - 0.37915147333803695 ) * ( x - 0.37915147333803695 ) ) /
0.10754982224821612 ) ; } static real_T cd13czpkjz ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - 0.63464252114465636 ) * ( x -
0.63464252114465636 ) ) / 0.14115962423861467 ) ; } static real_T dewn1321dc
( real_T x ) { return muDoubleScalarExp ( - ( ( x - - 0.55643794609812292 ) *
( x - - 0.55643794609812292 ) ) / 0.16343678290821437 ) ; } static real_T
ojbiwsydrq ( real_T x ) { return muDoubleScalarExp ( - ( ( x - -
0.33126530753385863 ) * ( x - - 0.33126530753385863 ) ) / 0.12824188795545369
) ; } static real_T odpdsmvhbk ( real_T x ) { return muDoubleScalarExp ( - (
( x - 0.52964566921541933 ) * ( x - 0.52964566921541933 ) ) /
0.11536996208778183 ) ; } static real_T flgmowbuyt ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - 0.38420158807881744 ) * ( x -
0.38420158807881744 ) ) / 0.10538270425643964 ) ; } static real_T cdwvpus1fl
( real_T x ) { return muDoubleScalarExp ( - ( ( x - - 0.1876838424304143 ) *
( x - - 0.1876838424304143 ) ) / 0.10818531265583192 ) ; } static real_T
l2h0u0rugm ( real_T x ) { return muDoubleScalarExp ( - ( ( x - -
0.64632104522579426 ) * ( x - - 0.64632104522579426 ) ) / 0.18368007650515977
) ; } static real_T irwmj4qqti ( real_T x ) { return muDoubleScalarExp ( - (
( x - 0.26598642596556538 ) * ( x - 0.26598642596556538 ) ) /
0.096674801421306952 ) ; } static real_T olzmclvzeo ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - - 0.18869423900527227 ) * ( x - -
0.18869423900527227 ) ) / 0.11116503229140566 ) ; } static real_T fntttuhpji
( real_T x ) { return muDoubleScalarExp ( - ( ( x - 0.58491783430897049 ) * (
x - 0.58491783430897049 ) ) / 0.12105749995193932 ) ; } static real_T
m1zuact3xz ( real_T x ) { return muDoubleScalarExp ( - ( ( x -
0.099546831289757623 ) * ( x - 0.099546831289757623 ) ) /
0.099534354161767341 ) ; } static real_T amjqtnuqer ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - 0.80562904959923543 ) * ( x -
0.80562904959923543 ) ) / 0.18452399221872162 ) ; } static real_T ksmqnnkdnk
( real_T x ) { return muDoubleScalarExp ( - ( ( x - - 0.22571986359749013 ) *
( x - - 0.22571986359749013 ) ) / 0.11763679189540593 ) ; } static real_T
lvkfmvqcnl ( real_T x ) { return muDoubleScalarExp ( - ( ( x -
0.39868417440681 ) * ( x - 0.39868417440681 ) ) / 0.10073325645436502 ) ; }
static real_T oqldf24f1x ( real_T x ) { return muDoubleScalarExp ( - ( ( x -
0.36502691941392046 ) * ( x - 0.36502691941392046 ) ) / 0.10483688071748885 )
; } static real_T kvtxxru0ah ( real_T x ) { return muDoubleScalarExp ( - ( (
x - - 0.28786940486878165 ) * ( x - - 0.28786940486878165 ) ) /
0.12201616351057286 ) ; } static real_T a0fvyxwm3q ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - 0.078504766236272464 ) * ( x -
0.078504766236272464 ) ) / 0.10143004342284434 ) ; } static real_T bszjvpd5vp
( real_T x ) { return muDoubleScalarExp ( - ( ( x - 0.39033118381429005 ) * (
x - 0.39033118381429005 ) ) / 0.10582720515730709 ) ; } static real_T
jhwotcwe3u ( real_T x ) { return muDoubleScalarExp ( - ( ( x -
0.057602037492957864 ) * ( x - 0.057602037492957864 ) ) /
0.096186775115820786 ) ; } static real_T gxw4ir4ndw ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - 0.216434702750021 ) * ( x - 0.216434702750021 )
) / 0.1005830801726499 ) ; } static real_T iuxp14fqx1 ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - - 0.707109888832952 ) * ( x - -
0.707109888832952 ) ) / 0.21149390832396983 ) ; } static real_T mc05ielfdi (
real_T x ) { return muDoubleScalarExp ( - ( ( x - - 0.14599433270444895 ) * (
x - - 0.14599433270444895 ) ) / 0.10947459073983087 ) ; } static real_T
kzhyltmp2h ( real_T x ) { return muDoubleScalarExp ( - ( ( x - -
0.595700234371761 ) * ( x - - 0.595700234371761 ) ) / 0.18195022372484873 ) ;
} static real_T cinivsixj1 ( real_T x ) { return muDoubleScalarExp ( - ( ( x
- - 0.6270683747493937 ) * ( x - - 0.6270683747493937 ) ) /
0.18316497444018076 ) ; } static real_T pcmrhmebvu ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - 0.092558714475513032 ) * ( x -
0.092558714475513032 ) ) / 0.098501236640537823 ) ; } static real_T
ieudc5zffk ( real_T x ) { return muDoubleScalarExp ( - ( ( x -
0.37243782186824842 ) * ( x - 0.37243782186824842 ) ) / 0.10586347254160451 )
; } static real_T ojurmsiid3 ( real_T x ) { return muDoubleScalarExp ( - ( (
x - 0.30355151431010247 ) * ( x - 0.30355151431010247 ) ) /
0.094788504909532112 ) ; } static real_T mpqo42kzyb ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - - 0.12091202242700798 ) * ( x - -
0.12091202242700798 ) ) / 0.10879901986798192 ) ; } static real_T fss5r1vnsg
( real_T x ) { return muDoubleScalarExp ( - ( ( x - 0.11137195859648541 ) * (
x - 0.11137195859648541 ) ) / 0.097019975147369167 ) ; } static real_T
kmc0vicjzz ( real_T x ) { return muDoubleScalarExp ( - ( ( x - -
0.4576065437738252 ) * ( x - - 0.4576065437738252 ) ) / 0.15403969421870939 )
; } static real_T bn35debgny ( real_T x ) { return muDoubleScalarExp ( - ( (
x - 0.54024022430916208 ) * ( x - 0.54024022430916208 ) ) /
0.12385927483156207 ) ; } static real_T mtxkxox0mo ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - 0.078657127588490541 ) * ( x -
0.078657127588490541 ) ) / 0.10204558029971353 ) ; } static real_T e0voe54yvd
( real_T x ) { return muDoubleScalarExp ( - ( ( x - 0.64807092243719266 ) * (
x - 0.64807092243719266 ) ) / 0.15022740866353707 ) ; } static real_T
mlbm3udzcf ( real_T x ) { return muDoubleScalarExp ( - ( ( x -
0.45599572937194 ) * ( x - 0.45599572937194 ) ) / 0.12222485512415057 ) ; }
static real_T n2f0vpq5cm ( real_T x ) { return muDoubleScalarExp ( - ( ( x -
- 0.40665974489531309 ) * ( x - - 0.40665974489531309 ) ) /
0.14549979563917961 ) ; } static real_T bdy4ys3zy5 ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - 0.46007365288648805 ) * ( x -
0.46007365288648805 ) ) / 0.11455418797226287 ) ; } static real_T lntbmvt44v
( real_T x ) { return muDoubleScalarExp ( - ( ( x - - 0.23576665232267591 ) *
( x - - 0.23576665232267591 ) ) / 0.12185423174438191 ) ; } static real_T
dx2vyt5s3c ( real_T x ) { return muDoubleScalarExp ( - ( ( x - -
0.60175306719620336 ) * ( x - - 0.60175306719620336 ) ) / 0.1826426694350502
) ; } static real_T ov0dkx3sq4 ( real_T x ) { return muDoubleScalarExp ( - (
( x - - 0.041744382151104056 ) * ( x - - 0.041744382151104056 ) ) /
0.10193701245157658 ) ; } static real_T fbaltqr3wm ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - 0.26759865164897473 ) * ( x -
0.26759865164897473 ) ) / 0.099856294415290023 ) ; } static real_T lrr2mphdii
( real_T x ) { return muDoubleScalarExp ( - ( ( x - 0.11221896823937631 ) * (
x - 0.11221896823937631 ) ) / 0.091842093852220641 ) ; } static real_T
fpjvkqd30w ( real_T x ) { return muDoubleScalarExp ( - ( ( x -
0.51084467204420958 ) * ( x - 0.51084467204420958 ) ) / 0.125162738692711 ) ;
} static real_T maz4b2znro ( real_T x ) { return muDoubleScalarExp ( - ( ( x
- - 0.27938198154342525 ) * ( x - - 0.27938198154342525 ) ) /
0.12734292586523141 ) ; } static real_T lqyj1nlya5 ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - - 1.3370371366435285 ) * ( x - -
1.3370371366435285 ) ) / 0.57306762799734412 ) ; } static real_T m2w0y0svis (
real_T x ) { return muDoubleScalarExp ( - ( ( x - - 0.32116702997552188 ) * (
x - - 0.32116702997552188 ) ) / 0.22206071551125431 ) ; } static real_T
jv54cdmmoi ( real_T x ) { return muDoubleScalarExp ( - ( ( x -
0.66770996443313213 ) * ( x - 0.66770996443313213 ) ) / 0.22388741463107545 )
; } static real_T hc2yzti4rq ( real_T x ) { return muDoubleScalarExp ( - ( (
x - - 0.53461062511531954 ) * ( x - - 0.53461062511531954 ) ) /
0.26267151927461407 ) ; } static real_T kuov3d2cti ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - 0.27082944020666111 ) * ( x -
0.27082944020666111 ) ) / 0.1755260253046293 ) ; } static real_T h4vnwxpcyo (
real_T x ) { return muDoubleScalarExp ( - ( ( x - 0.73823475183345422 ) * ( x
- 0.73823475183345422 ) ) / 0.24457499541138669 ) ; } static real_T
ahnbwx1vup ( real_T x ) { return muDoubleScalarExp ( - ( ( x - -
0.27498656618416162 ) * ( x - - 0.27498656618416162 ) ) / 0.20934905585201147
) ; } static real_T jfyj0bg2pa ( real_T x ) { return muDoubleScalarExp ( - (
( x - 0.40671543302691848 ) * ( x - 0.40671543302691848 ) ) /
0.19349505666770106 ) ; } static real_T k3y514lex4 ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - - 0.10894574982571106 ) * ( x - -
0.10894574982571106 ) ) / 0.19643240399360731 ) ; } static real_T hzxxp312t4
( real_T x ) { return muDoubleScalarExp ( - ( ( x - - 0.670310885810292 ) * (
x - - 0.670310885810292 ) ) / 0.28939538251236052 ) ; } static real_T
flepbdp0oo ( real_T x ) { return muDoubleScalarExp ( - ( ( x -
0.0461396546301467 ) * ( x - 0.0461396546301467 ) ) / 0.18946957931887054 ) ;
} static real_T ivqisqtz0b ( real_T x ) { return muDoubleScalarExp ( - ( ( x
- - 0.038580155059423138 ) * ( x - - 0.038580155059423138 ) ) /
0.1797408221459087 ) ; } static real_T ljoj3awftl ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - 1.0043200260380656 ) * ( x - 1.0043200260380656
) ) / 0.319429596586301 ) ; } static real_T mufigxfnhf ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - 0.21686803079518993 ) * ( x -
0.21686803079518993 ) ) / 0.18494218094834705 ) ; } static real_T jng1pgdpgm
( real_T x ) { return muDoubleScalarExp ( - ( ( x - 0.82695669403376471 ) * (
x - 0.82695669403376471 ) ) / 0.24989720123519241 ) ; } static real_T
eqo22jai00 ( real_T x ) { return muDoubleScalarExp ( - ( ( x - -
0.73925816858408411 ) * ( x - - 0.73925816858408411 ) ) / 0.31916866535867194
) ; } static real_T byslud4wnn ( real_T x ) { return muDoubleScalarExp ( - (
( x - - 0.0967855833913881 ) * ( x - - 0.0967855833913881 ) ) /
0.198276278637146 ) ; } static real_T ppucqq3eqw ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - 0.47543313661233289 ) * ( x -
0.47543313661233289 ) ) / 0.18732932695051252 ) ; } static real_T izv5d1xxul
( real_T x ) { return muDoubleScalarExp ( - ( ( x - - 0.55833509966857442 ) *
( x - - 0.55833509966857442 ) ) / 0.26639484250937323 ) ; } static void
a5msd4wa5r ( const real_T inputs [ 6 ] , real_T inputMFCache [ 102 ] ) {
inputMFCache [ 0 ] = csdyxksc3d ( inputs [ 0 ] ) ; inputMFCache [ 1 ] =
csdyxksc3d1 ( inputs [ 0 ] ) ; inputMFCache [ 2 ] = csdyxksc3d1q ( inputs [ 0
] ) ; inputMFCache [ 3 ] = csdyxksc3d1qi ( inputs [ 0 ] ) ; inputMFCache [ 4
] = csdyxksc3d1qiw ( inputs [ 0 ] ) ; inputMFCache [ 5 ] = csdyxksc3d1qiwp (
inputs [ 0 ] ) ; inputMFCache [ 6 ] = nm0n0kahlq ( inputs [ 0 ] ) ;
inputMFCache [ 7 ] = omwas3dsje ( inputs [ 0 ] ) ; inputMFCache [ 8 ] =
cd13czpkjz ( inputs [ 0 ] ) ; inputMFCache [ 9 ] = dewn1321dc ( inputs [ 0 ]
) ; inputMFCache [ 10 ] = ojbiwsydrq ( inputs [ 0 ] ) ; inputMFCache [ 11 ] =
odpdsmvhbk ( inputs [ 0 ] ) ; inputMFCache [ 12 ] = flgmowbuyt ( inputs [ 0 ]
) ; inputMFCache [ 13 ] = cdwvpus1fl ( inputs [ 0 ] ) ; inputMFCache [ 14 ] =
l2h0u0rugm ( inputs [ 0 ] ) ; inputMFCache [ 15 ] = irwmj4qqti ( inputs [ 0 ]
) ; inputMFCache [ 16 ] = olzmclvzeo ( inputs [ 0 ] ) ; inputMFCache [ 17 ] =
fntttuhpji ( inputs [ 1 ] ) ; inputMFCache [ 18 ] = m1zuact3xz ( inputs [ 1 ]
) ; inputMFCache [ 19 ] = amjqtnuqer ( inputs [ 1 ] ) ; inputMFCache [ 20 ] =
ksmqnnkdnk ( inputs [ 1 ] ) ; inputMFCache [ 21 ] = lvkfmvqcnl ( inputs [ 1 ]
) ; inputMFCache [ 22 ] = oqldf24f1x ( inputs [ 1 ] ) ; inputMFCache [ 23 ] =
kvtxxru0ah ( inputs [ 1 ] ) ; inputMFCache [ 24 ] = a0fvyxwm3q ( inputs [ 1 ]
) ; inputMFCache [ 25 ] = bszjvpd5vp ( inputs [ 1 ] ) ; inputMFCache [ 26 ] =
jhwotcwe3u ( inputs [ 1 ] ) ; inputMFCache [ 27 ] = gxw4ir4ndw ( inputs [ 1 ]
) ; inputMFCache [ 28 ] = iuxp14fqx1 ( inputs [ 1 ] ) ; inputMFCache [ 29 ] =
mc05ielfdi ( inputs [ 1 ] ) ; inputMFCache [ 30 ] = kzhyltmp2h ( inputs [ 1 ]
) ; inputMFCache [ 31 ] = cinivsixj1 ( inputs [ 1 ] ) ; inputMFCache [ 32 ] =
pcmrhmebvu ( inputs [ 1 ] ) ; inputMFCache [ 33 ] = ieudc5zffk ( inputs [ 1 ]
) ; inputMFCache [ 34 ] = ojurmsiid3 ( inputs [ 2 ] ) ; inputMFCache [ 35 ] =
mpqo42kzyb ( inputs [ 2 ] ) ; inputMFCache [ 36 ] = fss5r1vnsg ( inputs [ 2 ]
) ; inputMFCache [ 37 ] = kmc0vicjzz ( inputs [ 2 ] ) ; inputMFCache [ 38 ] =
bn35debgny ( inputs [ 2 ] ) ; inputMFCache [ 39 ] = mtxkxox0mo ( inputs [ 2 ]
) ; inputMFCache [ 40 ] = e0voe54yvd ( inputs [ 2 ] ) ; inputMFCache [ 41 ] =
mlbm3udzcf ( inputs [ 2 ] ) ; inputMFCache [ 42 ] = n2f0vpq5cm ( inputs [ 2 ]
) ; inputMFCache [ 43 ] = bdy4ys3zy5 ( inputs [ 2 ] ) ; inputMFCache [ 44 ] =
lntbmvt44v ( inputs [ 2 ] ) ; inputMFCache [ 45 ] = dx2vyt5s3c ( inputs [ 2 ]
) ; inputMFCache [ 46 ] = ov0dkx3sq4 ( inputs [ 2 ] ) ; inputMFCache [ 47 ] =
fbaltqr3wm ( inputs [ 2 ] ) ; inputMFCache [ 48 ] = lrr2mphdii ( inputs [ 2 ]
) ; inputMFCache [ 49 ] = fpjvkqd30w ( inputs [ 2 ] ) ; inputMFCache [ 50 ] =
maz4b2znro ( inputs [ 2 ] ) ; inputMFCache [ 51 ] = lqyj1nlya5 ( inputs [ 3 ]
) ; inputMFCache [ 52 ] = m2w0y0svis ( inputs [ 3 ] ) ; inputMFCache [ 53 ] =
jv54cdmmoi ( inputs [ 3 ] ) ; inputMFCache [ 54 ] = hc2yzti4rq ( inputs [ 3 ]
) ; inputMFCache [ 55 ] = kuov3d2cti ( inputs [ 3 ] ) ; inputMFCache [ 56 ] =
h4vnwxpcyo ( inputs [ 3 ] ) ; inputMFCache [ 57 ] = ahnbwx1vup ( inputs [ 3 ]
) ; inputMFCache [ 58 ] = jfyj0bg2pa ( inputs [ 3 ] ) ; inputMFCache [ 59 ] =
k3y514lex4 ( inputs [ 3 ] ) ; inputMFCache [ 60 ] = hzxxp312t4 ( inputs [ 3 ]
) ; inputMFCache [ 61 ] = flepbdp0oo ( inputs [ 3 ] ) ; inputMFCache [ 62 ] =
ivqisqtz0b ( inputs [ 3 ] ) ; inputMFCache [ 63 ] = ljoj3awftl ( inputs [ 3 ]
) ; inputMFCache [ 64 ] = mufigxfnhf ( inputs [ 3 ] ) ; inputMFCache [ 65 ] =
jng1pgdpgm ( inputs [ 3 ] ) ; inputMFCache [ 66 ] = eqo22jai00 ( inputs [ 3 ]
) ; inputMFCache [ 67 ] = byslud4wnn ( inputs [ 3 ] ) ; inputMFCache [ 68 ] =
ppucqq3eqw ( inputs [ 4 ] ) ; inputMFCache [ 69 ] = izv5d1xxul ( inputs [ 4 ]
) ; inputMFCache [ 70 ] = muDoubleScalarExp ( - ( ( inputs [ 4 ] -
0.12448825495178968 ) * ( inputs [ 4 ] - 0.12448825495178968 ) ) /
0.18074332050378911 ) ; inputMFCache [ 71 ] = muDoubleScalarExp ( - ( (
inputs [ 4 ] - 0.27022938496238574 ) * ( inputs [ 4 ] - 0.27022938496238574 )
) / 0.187043731157558 ) ; inputMFCache [ 72 ] = muDoubleScalarExp ( - ( (
inputs [ 4 ] - - 1.3053699693107619 ) * ( inputs [ 4 ] - - 1.3053699693107619
) ) / 0.56121131966771587 ) ; inputMFCache [ 73 ] = muDoubleScalarExp ( - ( (
inputs [ 4 ] - 0.40729001241558643 ) * ( inputs [ 4 ] - 0.40729001241558643 )
) / 0.1963925004767 ) ; inputMFCache [ 74 ] = muDoubleScalarExp ( - ( (
inputs [ 4 ] - 0.78872625313265077 ) * ( inputs [ 4 ] - 0.78872625313265077 )
) / 0.253877820683572 ) ; inputMFCache [ 75 ] = muDoubleScalarExp ( - ( (
inputs [ 4 ] - 0.52465160512636277 ) * ( inputs [ 4 ] - 0.52465160512636277 )
) / 0.21118644492809 ) ; inputMFCache [ 76 ] = muDoubleScalarExp ( - ( (
inputs [ 4 ] - 0.79388072760895012 ) * ( inputs [ 4 ] - 0.79388072760895012 )
) / 0.25530668965995934 ) ; inputMFCache [ 77 ] = muDoubleScalarExp ( - ( (
inputs [ 4 ] - - 0.78219900182059732 ) * ( inputs [ 4 ] - -
0.78219900182059732 ) ) / 0.32090741383617444 ) ; inputMFCache [ 78 ] =
muDoubleScalarExp ( - ( ( inputs [ 4 ] - - 0.51706606449300674 ) * ( inputs [
4 ] - - 0.51706606449300674 ) ) / 0.25911119441414115 ) ; inputMFCache [ 79 ]
= muDoubleScalarExp ( - ( ( inputs [ 4 ] - 0.88657677890957054 ) * ( inputs [
4 ] - 0.88657677890957054 ) ) / 0.26890464601194847 ) ; inputMFCache [ 80 ] =
muDoubleScalarExp ( - ( ( inputs [ 4 ] - 0.56861273937278223 ) * ( inputs [ 4
] - 0.56861273937278223 ) ) / 0.21144560125208459 ) ; inputMFCache [ 81 ] =
muDoubleScalarExp ( - ( ( inputs [ 4 ] - - 0.12626789848755071 ) * ( inputs [
4 ] - - 0.12626789848755071 ) ) / 0.19250023774952285 ) ; inputMFCache [ 82 ]
= muDoubleScalarExp ( - ( ( inputs [ 4 ] - - 0.76554942843721385 ) * ( inputs
[ 4 ] - - 0.76554942843721385 ) ) / 0.30708223698359821 ) ; inputMFCache [ 83
] = muDoubleScalarExp ( - ( ( inputs [ 4 ] - 0.36208721337043431 ) * ( inputs
[ 4 ] - 0.36208721337043431 ) ) / 0.18719953212853974 ) ; inputMFCache [ 84 ]
= muDoubleScalarExp ( - ( ( inputs [ 4 ] - - 0.35417691652088756 ) * ( inputs
[ 4 ] - - 0.35417691652088756 ) ) / 0.22607642702811115 ) ; inputMFCache [ 85
] = muDoubleScalarExp ( - ( ( inputs [ 5 ] - 0.75702660738327565 ) * ( inputs
[ 5 ] - 0.75702660738327565 ) ) / 0.22635743191557178 ) ; inputMFCache [ 86 ]
= muDoubleScalarExp ( - ( ( inputs [ 5 ] - 0.15713342012512574 ) * ( inputs [
5 ] - 0.15713342012512574 ) ) / 0.19165756316964938 ) ; inputMFCache [ 87 ] =
muDoubleScalarExp ( - ( ( inputs [ 5 ] - 1.0962226618396853 ) * ( inputs [ 5
] - 1.0962226618396853 ) ) / 0.35147919866298838 ) ; inputMFCache [ 88 ] =
muDoubleScalarExp ( - ( ( inputs [ 5 ] - - 0.23218717810347764 ) * ( inputs [
5 ] - - 0.23218717810347764 ) ) / 0.21474148545416161 ) ; inputMFCache [ 89 ]
= muDoubleScalarExp ( - ( ( inputs [ 5 ] - 0.44534868863785604 ) * ( inputs [
5 ] - 0.44534868863785604 ) ) / 0.18524621720989121 ) ; inputMFCache [ 90 ] =
muDoubleScalarExp ( - ( ( inputs [ 5 ] - 0.50063662126173925 ) * ( inputs [ 5
] - 0.50063662126173925 ) ) / 0.2065703786938439 ) ; inputMFCache [ 91 ] =
muDoubleScalarExp ( - ( ( inputs [ 5 ] - - 0.53907318405539428 ) * ( inputs [
5 ] - - 0.53907318405539428 ) ) / 0.264328458586372 ) ; inputMFCache [ 92 ] =
muDoubleScalarExp ( - ( ( inputs [ 5 ] - 0.00042845012672616242 ) * ( inputs
[ 5 ] - 0.00042845012672616242 ) ) / 0.19933075357428209 ) ; inputMFCache [
93 ] = muDoubleScalarExp ( - ( ( inputs [ 5 ] - 0.64651237205773848 ) * (
inputs [ 5 ] - 0.64651237205773848 ) ) / 0.22298662578957407 ) ; inputMFCache
[ 94 ] = muDoubleScalarExp ( - ( ( inputs [ 5 ] - - 0.032582829648981348 ) *
( inputs [ 5 ] - - 0.032582829648981348 ) ) / 0.18869359825700391 ) ;
inputMFCache [ 95 ] = muDoubleScalarExp ( - ( ( inputs [ 5 ] -
0.35117755585492166 ) * ( inputs [ 5 ] - 0.35117755585492166 ) ) /
0.19511291796437391 ) ; inputMFCache [ 96 ] = muDoubleScalarExp ( - ( (
inputs [ 5 ] - - 0.85752899004394223 ) * ( inputs [ 5 ] - -
0.85752899004394223 ) ) / 0.35610928108207857 ) ; inputMFCache [ 97 ] =
muDoubleScalarExp ( - ( ( inputs [ 5 ] - - 0.17774253805012097 ) * ( inputs [
5 ] - - 0.17774253805012097 ) ) / 0.20810784636199162 ) ; inputMFCache [ 98 ]
= muDoubleScalarExp ( - ( ( inputs [ 5 ] - - 0.884912759697432 ) * ( inputs [
5 ] - - 0.884912759697432 ) ) / 0.37827376254750955 ) ; inputMFCache [ 99 ] =
muDoubleScalarExp ( - ( ( inputs [ 5 ] - - 0.89602168392536841 ) * ( inputs [
5 ] - - 0.89602168392536841 ) ) / 0.3694744590449594 ) ; inputMFCache [ 100 ]
= muDoubleScalarExp ( - ( ( inputs [ 5 ] - 0.029863643313483883 ) * ( inputs
[ 5 ] - 0.029863643313483883 ) ) / 0.19119493718483591 ) ; inputMFCache [ 101
] = muDoubleScalarExp ( - ( ( inputs [ 5 ] - 0.59657693888981767 ) * ( inputs
[ 5 ] - 0.59657693888981767 ) ) / 0.21799007972013915 ) ; } static void
f33chpldl5 ( const real_T inputs [ 6 ] , real_T outputMFCache [ 17 ] ) {
real_T y ; int32_T i ; static const real_T b [ 7 ] = { 0.20468539369293037 ,
- 0.0097751714248034867 , - 0.00028558595385738455 , 0.71072921365533914 , -
0.030370425797923727 , - 0.0081827651152496014 , 0.00096337936153875184 } ;
static const real_T c [ 7 ] = { 0.20312306633649008 , - 0.0098326568914315245
, 0.00020248521842835811 , 0.71267661881851929 , - 0.032540589341961454 , -
0.0083413329149485786 , 0.0001236363558375489 } ; static const real_T d [ 7 ]
= { 0.20325626440339625 , - 0.010029339890372918 , 0.00010110228459647297 ,
0.71346224695011862 , - 0.032311546289339875 , - 0.0086040104329111172 ,
7.1539992109913842E-5 } ; static const real_T e [ 7 ] = { 0.20365398796106562
, - 0.010073288987559298 , 0.00047742329488817306 , 0.7124578198279865 , -
0.0317341834045629 , - 0.00877131708300091 , 0.00026377399891170479 } ;
static const real_T f [ 7 ] = { 0.2021408959683057 , - 0.00918373220940922 ,
- 0.00078632877171581819 , 0.71119454533999948 , - 0.034079610737428732 , -
0.0072456211445804074 , - 8.96523181873262E-5 } ; static const real_T g [ 7 ]
= { 0.20330291437704 , - 0.01008620039748262 , 0.00014075357231644982 ,
0.71319170517199282 , - 0.032232623449638363 , - 0.0086932741807659412 ,
1.162203135746602E-5 } ; static const real_T h [ 7 ] = { 0.20238319964875523
, - 0.0099456587776828257 , - 0.000555086566384775 , 0.71319175909016752 , -
0.033568000729811316 , - 0.0083432138287256249 , - 0.00092543213321350231 } ;
static const real_T j [ 7 ] = { 0.203189725746898 , - 0.010058253032642522 ,
- 3.24725221900598E-5 , 0.71308872770002718 , - 0.03240167175685485 , -
0.0086103691653768126 , - 0.00027548115110382937 } ; static const real_T k [
7 ] = { 0.2030865629290467 , - 0.0098807038927971585 , -
8.3784870311967346E-5 , 0.71267858448349031 , - 0.032584662441536148 , -
0.0083737886929618616 , - 1.8241124703555273E-5 } ; static const real_T l [ 7
] = { 0.20396453549486399 , - 0.010030386859775029 , 4.1856546144651347E-5 ,
0.71342066981496377 , - 0.03131906199853067 , - 0.0085970502185934664 , -
0.00046109462671557711 } ; static const real_T m [ 7 ] = {
0.20347757110345124 , - 0.010191474048993544 , 0.00020640835093448876 ,
0.71317081415994044 , - 0.031963165237893415 , - 0.00885356224061353 , -
0.00038766617089264189 } ; static const real_T n [ 7 ] = {
0.20312724691953318 , - 0.00976469899152667 , 0.0005311919958336423 ,
0.71290870666259731 , - 0.032541464516370924 , - 0.00833418230153506 , -
0.00030739811806155344 } ; static const real_T o [ 7 ] = {
0.20331533229373139 , - 0.00989462919434158 , - 6.1345818624010325E-5 ,
0.7114307757483741 , - 0.03226251178014139 , - 0.00837373822310405 , -
0.0010686673664428927 } ; static const real_T p [ 7 ] = { 0.20380537980634342
, - 0.0099457130473563585 , 0.00012198527891256846 , 0.71464276080260469 , -
0.031558745860756875 , - 0.0085022734063810446 , 5.5403682207358921E-5 } ;
static const real_T q [ 7 ] = { 0.20532908442963013 , - 0.0072701703856748665
, - 0.0020543488896475814 , 0.71147766907811039 , - 0.03006161199607596 , -
0.0042686386456989075 , - 0.0017899695397943069 } ; static const real_T r [ 7
] = { 0.20237234460439607 , - 0.010615677455650847 , - 0.0016012488563063481
, 0.71496499096191579 , - 0.033456126104517224 , - 0.00905938934788891 , -
0.0013463388938824408 } ; static const real_T s [ 7 ] = { 0.20344426069815372
, - 0.010237555467024411 , 6.2615002937880268E-5 , 0.71307138344358045 , -
0.032001984994533328 , - 0.00889445294716076 , - 0.00029422377851906186 } ; y
= 0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { y += inputs [ i ] * b [ i ] ; }
outputMFCache [ 0 ] = y + 0.00096337936153875184 ; y = 0.0 ; for ( i = 0 ; i
< 6 ; i ++ ) { y += inputs [ i ] * c [ i ] ; } outputMFCache [ 1 ] = y +
0.0001236363558375489 ; y = 0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { y += inputs
[ i ] * d [ i ] ; } outputMFCache [ 2 ] = y + 7.1539992109913842E-5 ; y = 0.0
; for ( i = 0 ; i < 6 ; i ++ ) { y += inputs [ i ] * e [ i ] ; }
outputMFCache [ 3 ] = y + 0.00026377399891170479 ; y = 0.0 ; for ( i = 0 ; i
< 6 ; i ++ ) { y += inputs [ i ] * f [ i ] ; } outputMFCache [ 4 ] = y + -
8.96523181873262E-5 ; y = 0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { y += inputs [
i ] * g [ i ] ; } outputMFCache [ 5 ] = y + 1.162203135746602E-5 ; y = 0.0 ;
for ( i = 0 ; i < 6 ; i ++ ) { y += inputs [ i ] * h [ i ] ; } outputMFCache
[ 6 ] = y + - 0.00092543213321350231 ; y = 0.0 ; for ( i = 0 ; i < 6 ; i ++ )
{ y += inputs [ i ] * j [ i ] ; } outputMFCache [ 7 ] = y + -
0.00027548115110382937 ; y = 0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { y += inputs
[ i ] * k [ i ] ; } outputMFCache [ 8 ] = y + - 1.8241124703555273E-5 ; y =
0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { y += inputs [ i ] * l [ i ] ; }
outputMFCache [ 9 ] = y + - 0.00046109462671557711 ; y = 0.0 ; for ( i = 0 ;
i < 6 ; i ++ ) { y += inputs [ i ] * m [ i ] ; } outputMFCache [ 10 ] = y + -
0.00038766617089264189 ; y = 0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { y += inputs
[ i ] * n [ i ] ; } outputMFCache [ 11 ] = y + - 0.00030739811806155344 ; y =
0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { y += inputs [ i ] * o [ i ] ; }
outputMFCache [ 12 ] = y + - 0.0010686673664428927 ; y = 0.0 ; for ( i = 0 ;
i < 6 ; i ++ ) { y += inputs [ i ] * p [ i ] ; } outputMFCache [ 13 ] = y +
5.5403682207358921E-5 ; y = 0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { y += inputs
[ i ] * q [ i ] ; } outputMFCache [ 14 ] = y + - 0.0017899695397943069 ; y =
0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { y += inputs [ i ] * r [ i ] ; }
outputMFCache [ 15 ] = y + - 0.0013463388938824408 ; y = 0.0 ; for ( i = 0 ;
i < 6 ; i ++ ) { y += inputs [ i ] * s [ i ] ; } outputMFCache [ 16 ] = y + -
0.00029422377851906186 ; } static int32_T aipkft4veh ( int32_T x ) { int32_T
y ; if ( x < 0 ) { if ( x <= MIN_int32_T ) { y = MAX_int32_T ; } else { y = -
x ; } } else { y = x ; } return y ; } static real_T bhgyktkxls ( const real_T
x [ 2 ] ) { return x [ 0 ] * x [ 1 ] ; } void MdlInitialize ( void ) { rtX .
bjsnhwunkd [ 0 ] = 0.0 ; rtX . bjsnhwunkd [ 1 ] = 0.0 ; rtX . bjsnhwunkd [ 2
] = 0.0 ; rtDW . ibbcz5ezoa = rtP . UnitDelay3_InitialCondition ; rtDW .
ksl24mocme = rtP . UnitDelay4_InitialCondition ; rtDW . isaloycosl = rtP .
UnitDelay5_InitialCondition ; rtDW . p0measvac2 = rtP .
UnitDelay_InitialCondition ; rtDW . prp1tr1hgg = rtP .
UnitDelay1_InitialCondition ; rtDW . apz2qxtnrj = rtP .
UnitDelay2_InitialCondition ; rtX . j5xa1qzpvy = rtP . Integrator_IC ; } void
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
"ModelSquareFCM/To Workspace" ; rtDW . pfhhqztabe . LoggedData =
rt_CreateStructLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) ,
ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "performance" ,
1 , 0 , 1 , 0.0 , & rt_ToWksSignalInfo , rt_ToWksBlockName ) ; if ( rtDW .
pfhhqztabe . LoggedData == ( NULL ) ) return ; } MdlInitialize ( ) ; } void
MdlOutputs ( int_T tid ) { int_T iy ; real_T sumAntecedentOutputs ; real_T
inputMFCache [ 102 ] ; int32_T inputID ; static const int8_T b [ 102 ] = { 1
, 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 1 ,
2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 1 , 2
, 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 1 , 2 ,
3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 1 , 2 , 3
, 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 1 , 2 , 3 ,
4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 } ; real_T
aggregatedOutputs ; real_T outputMFCache [ 17 ] ; real_T cjmbdwlftv [ 17 ] ;
real_T tmp [ 6 ] ; real_T nli1kdi4l2 [ 2 ] ; int32_T q0 ; int32_T q1 ; rtB .
afl4hqinfn = 0.0 ; rtB . afl4hqinfn += rtP . TransferFcn_C [ 0 ] * rtX .
bjsnhwunkd [ 0 ] ; rtB . afl4hqinfn += rtP . TransferFcn_C [ 1 ] * rtX .
bjsnhwunkd [ 1 ] ; rtB . afl4hqinfn += rtP . TransferFcn_C [ 2 ] * rtX .
bjsnhwunkd [ 2 ] ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . hjv5d3p4m1 =
rtDW . ibbcz5ezoa ; rtB . aph5oovzhh = rtDW . ksl24mocme ; rtB . gbdjjsqnje =
rtDW . isaloycosl ; rtB . pfgq40ccxy = rtDW . p0measvac2 ; rtB . nemq2hjter =
rtDW . prp1tr1hgg ; rtB . dhsswuc42m = rtDW . apz2qxtnrj ; if ( ssIsSampleHit
( rtS , 1 , 0 ) ) { sumAntecedentOutputs = 0.0 ; tmp [ 0 ] = rtB . hjv5d3p4m1
; tmp [ 1 ] = rtB . aph5oovzhh ; tmp [ 2 ] = rtB . gbdjjsqnje ; tmp [ 3 ] =
rtB . pfgq40ccxy ; tmp [ 4 ] = rtB . nemq2hjter ; tmp [ 5 ] = rtB .
dhsswuc42m ; a5msd4wa5r ( tmp , inputMFCache ) ; aggregatedOutputs = 0.0 ;
tmp [ 0 ] = rtB . hjv5d3p4m1 ; tmp [ 1 ] = rtB . aph5oovzhh ; tmp [ 2 ] = rtB
. gbdjjsqnje ; tmp [ 3 ] = rtB . pfgq40ccxy ; tmp [ 4 ] = rtB . nemq2hjter ;
tmp [ 5 ] = rtB . dhsswuc42m ; f33chpldl5 ( tmp , outputMFCache ) ; for ( iy
= 0 ; iy < 17 ; iy ++ ) { cjmbdwlftv [ iy ] = 1.0 ; for ( inputID = 0 ;
inputID < 6 ; inputID ++ ) { q0 = aipkft4veh ( 17 * inputID ) ; nli1kdi4l2 [
0 ] = cjmbdwlftv [ iy ] ; q1 = b [ 17 * inputID + iy ] ; if ( ( q0 < 0 ) && (
q1 < MIN_int32_T - q0 ) ) { q0 = MIN_int32_T ; } else if ( ( q0 > 0 ) && ( q1
> MAX_int32_T - q0 ) ) { q0 = MAX_int32_T ; } else { q0 += q1 ; } nli1kdi4l2
[ 1 ] = inputMFCache [ q0 - 1 ] ; cjmbdwlftv [ iy ] = bhgyktkxls ( nli1kdi4l2
) ; } sumAntecedentOutputs += cjmbdwlftv [ iy ] ; aggregatedOutputs +=
outputMFCache [ iy ] * cjmbdwlftv [ iy ] ; } if ( sumAntecedentOutputs == 0.0
) { rtB . ozoet0a4nu = - 0.1526961 ; } else { rtB . ozoet0a4nu = 1.0 /
sumAntecedentOutputs * aggregatedOutputs ; } } } rtB . p4hgg5u1di = rtX .
j5xa1qzpvy ; { double locTime = ssGetTaskTime ( rtS , 0 ) ; ; if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 0 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateStructLogVar ( (
StructLogVar * ) rtDW . pfhhqztabe . LoggedData , & locTime , & rtB .
p4hgg5u1di ) ; } } } } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { } if (
ssIsSampleHit ( rtS , 1 , 0 ) && ssIsSampleHit ( rtS , 2 , 0 ) ) { rtB .
iv241rxjgr [ 0 ] = rtB . hjv5d3p4m1 ; rtB . iv241rxjgr [ 1 ] = rtB .
aph5oovzhh ; rtB . iv241rxjgr [ 2 ] = rtB . gbdjjsqnje ; rtB . iv241rxjgr [ 3
] = rtB . pfgq40ccxy ; rtB . iv241rxjgr [ 4 ] = rtB . nemq2hjter ; rtB .
iv241rxjgr [ 5 ] = rtB . dhsswuc42m ; } rtB . kowqnwte5g = rtB . afl4hqinfn -
rtB . ozoet0a4nu ; rtB . pscr3snzpm = rtB . kowqnwte5g * rtB . kowqnwte5g ;
sumAntecedentOutputs = rtP . SignalGenerator_Frequency * ssGetT ( rtS ) ; if
( sumAntecedentOutputs - muDoubleScalarFloor ( sumAntecedentOutputs ) >= 0.5
) { rtB . nz0o15v2fr = rtP . SignalGenerator_Amplitude ; } else { rtB .
nz0o15v2fr = - rtP . SignalGenerator_Amplitude ; } UNUSED_PARAMETER ( tid ) ;
} void MdlUpdate ( int_T tid ) { if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtDW
. ibbcz5ezoa = rtB . afl4hqinfn ; rtDW . ksl24mocme = rtB . hjv5d3p4m1 ; rtDW
. isaloycosl = rtB . aph5oovzhh ; rtDW . p0measvac2 = rtB . nz0o15v2fr ; rtDW
. prp1tr1hgg = rtB . pfgq40ccxy ; rtDW . apz2qxtnrj = rtB . nemq2hjter ; } if
( ssIsSampleHit ( rtS , 2 , 0 ) ) { } UNUSED_PARAMETER ( tid ) ; } void
MdlUpdateTID3 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void
MdlDerivatives ( void ) { XDot * _rtXdot ; _rtXdot = ( ( XDot * ) ssGetdX (
rtS ) ) ; _rtXdot -> bjsnhwunkd [ 0 ] = 0.0 ; _rtXdot -> bjsnhwunkd [ 0 ] +=
rtP . TransferFcn_A [ 0 ] * rtX . bjsnhwunkd [ 0 ] ; _rtXdot -> bjsnhwunkd [
1 ] = 0.0 ; _rtXdot -> bjsnhwunkd [ 0 ] += rtP . TransferFcn_A [ 1 ] * rtX .
bjsnhwunkd [ 1 ] ; _rtXdot -> bjsnhwunkd [ 2 ] = 0.0 ; _rtXdot -> bjsnhwunkd
[ 0 ] += rtP . TransferFcn_A [ 2 ] * rtX . bjsnhwunkd [ 2 ] ; _rtXdot ->
bjsnhwunkd [ 1 ] += rtX . bjsnhwunkd [ 0 ] ; _rtXdot -> bjsnhwunkd [ 2 ] +=
rtX . bjsnhwunkd [ 1 ] ; _rtXdot -> bjsnhwunkd [ 0 ] += rtB . nz0o15v2fr ;
_rtXdot -> j5xa1qzpvy = rtB . pscr3snzpm ; } void MdlProjection ( void ) { }
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
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 2490509260U ) ;
ssSetChecksumVal ( rtS , 1 , 3199274809U ) ; ssSetChecksumVal ( rtS , 2 ,
3591690211U ) ; ssSetChecksumVal ( rtS , 3 , 1927858193U ) ; }
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
ModelSquareFCM_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive (
rtS , true ) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS ,
SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS , "ModelSquareFCM" ) ;
ssSetPath ( rtS , "ModelSquareFCM" ) ; ssSetTStart ( rtS , 0.0 ) ;
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
ozoet0a4nu ) , ( NULL ) } } ; ssSetSolverRelTol ( rtS , 0.0001 ) ;
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
ssSetChecksumVal ( rtS , 0 , 2490509260U ) ; ssSetChecksumVal ( rtS , 1 ,
3199274809U ) ; ssSetChecksumVal ( rtS , 2 , 3591690211U ) ; ssSetChecksumVal
( rtS , 3 , 1927858193U ) ; { static const sysRanDType rtAlwaysEnabled =
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
