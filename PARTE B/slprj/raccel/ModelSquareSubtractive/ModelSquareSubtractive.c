#include "__cf_ModelSquareSubtractive.h"
#include "rt_logging_mmi.h"
#include "ModelSquareSubtractive_capi.h"
#include <math.h>
#include "ModelSquareSubtractive.h"
#include "ModelSquareSubtractive_private.h"
#include "ModelSquareSubtractive_dt.h"
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
"slprj//raccel//ModelSquareSubtractive//ModelSquareSubtractive_Jpattern.mat"
; const int_T gblNumRootInportBlks = 0 ; const int_T gblNumModelInputs = 0 ;
extern rtInportTUtable * gblInportTUtables ; extern const char *
gblInportFileName ; const int_T gblInportDataTypeIdx [ ] = { - 1 } ; const
int_T gblInportDims [ ] = { - 1 } ; const int_T gblInportComplex [ ] = { - 1
} ; const int_T gblInportInterpoFlag [ ] = { - 1 } ; const int_T
gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [ ] = { 1 , 1 , 1
, 1 } ;
#include "simstruc.h"
#include "fixedpoint.h"
B rtB ; X rtX ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS =
& model_S ; static real_T mmqfu2h3rk ( real_T x ) ; static real_T mmqfu2h3rki
( real_T x ) ; static real_T mmqfu2h3rkiz ( real_T x ) ; static real_T
mmqfu2h3rkiz3 ( real_T x ) ; static real_T mmqfu2h3rkiz35 ( real_T x ) ;
static real_T mmqfu2h3rkiz35k ( real_T x ) ; static real_T mcdfxndsyn (
real_T x ) ; static real_T j0223btxck ( real_T x ) ; static real_T mbs4nix1mn
( real_T x ) ; static real_T itb01lnoas ( real_T x ) ; static real_T
nuqqnyj3eo ( real_T x ) ; static real_T j1fmhnu4sm ( real_T x ) ; static
real_T kxebdylqjv ( real_T x ) ; static real_T fballg2myh ( real_T x ) ;
static real_T ew1vwlel2b ( real_T x ) ; static real_T gnrzhc52mu ( real_T x )
; static real_T k4ktdtxfqv ( real_T x ) ; static real_T kl3znqyewx ( real_T x
) ; static real_T jx0qfhpjjm ( real_T x ) ; static real_T eoqgqmifmb ( real_T
x ) ; static real_T kfwx0hqbpz ( real_T x ) ; static real_T cgaa0vrqd5 (
real_T x ) ; static real_T ool1q3wrrm ( real_T x ) ; static real_T e5xkeze2hc
( real_T x ) ; static real_T nsnm10y41r ( real_T x ) ; static real_T
mhytlahnis ( real_T x ) ; static real_T cnysmcqjj3 ( real_T x ) ; static
real_T iy1z23ryli ( real_T x ) ; static real_T m5qgyvj3li ( real_T x ) ;
static real_T dgndnoortl ( real_T x ) ; static real_T kk0iz5ncup ( real_T x )
; static real_T c02rfx3zoq ( real_T x ) ; static real_T pbjuulk4jn ( real_T x
) ; static real_T mau50zxrcu ( real_T x ) ; static real_T opygp0herz ( real_T
x ) ; static real_T m42pkdkupu ( real_T x ) ; static real_T gcsis4gmnv (
real_T x ) ; static real_T nrg1qs5nkj ( real_T x ) ; static real_T nzq1ezuzw2
( real_T x ) ; static real_T bbu1naw12f ( real_T x ) ; static real_T
lwr0xqdfbf ( real_T x ) ; static real_T hcz0zt23fw ( real_T x ) ; static
real_T cybpay4kzg ( real_T x ) ; static real_T fam1s5av4d ( real_T x ) ;
static real_T bko0k3qstz ( real_T x ) ; static real_T jm1yswfaaf ( real_T x )
; static real_T ilfkitnbh2 ( real_T x ) ; static real_T ih0lfue41s ( real_T x
) ; static real_T gkr5nau5cj ( real_T x ) ; static real_T gr10gonb0t ( real_T
x ) ; static real_T nxcr3csoki ( real_T x ) ; static real_T ifwm4eazzr (
real_T x ) ; static real_T efhsas3w45 ( real_T x ) ; static real_T fu3yc5xfju
( real_T x ) ; static real_T hbaglipcpj ( real_T x ) ; static real_T
cipu2z1g5o ( real_T x ) ; static real_T onun34ycxe ( real_T x ) ; static
real_T cfvfzwjkpb ( real_T x ) ; static real_T hnp4dwpusw ( real_T x ) ;
static real_T hpewhgu0iy ( real_T x ) ; static real_T bvfxl5pvzt ( real_T x )
; static real_T ezbg3mwhzr ( real_T x ) ; static real_T fndvjf1y4o ( real_T x
) ; static real_T ehh4fb0eqj ( real_T x ) ; static real_T iogwff2zo2 ( real_T
x ) ; static real_T pebx2jcoww ( real_T x ) ; static real_T cgb40q3o1s (
real_T x ) ; static real_T khe0k0drlj ( real_T x ) ; static real_T dl3u0l5ezs
( real_T x ) ; static real_T epfphcrtq1 ( real_T x ) ; static void ldqujhzsbu
( const real_T inputs [ 6 ] , real_T inputMFCache [ 102 ] ) ; static void
egyq2yy4j5 ( const real_T inputs [ 6 ] , real_T outputMFCache [ 17 ] ) ;
static int32_T jp0jw2y0rb ( int32_T x ) ; static real_T el4svmnatj ( const
real_T x [ 2 ] ) ; static real_T mmqfu2h3rk ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - - 0.37841100633453922 ) * ( x - -
0.37841100633453922 ) ) / 0.64876937649232835 ) ; } static real_T mmqfu2h3rki
( real_T x ) { return muDoubleScalarExp ( - ( ( x - 0.58943066676573941 ) * (
x - 0.58943066676573941 ) ) / 0.63782024674176119 ) ; } static real_T
mmqfu2h3rkiz ( real_T x ) { return muDoubleScalarExp ( - ( ( x -
0.13352697534844182 ) * ( x - 0.13352697534844182 ) ) / 0.64091525650083392 )
; } static real_T mmqfu2h3rkiz3 ( real_T x ) { return muDoubleScalarExp ( - (
( x - - 0.032978997657610365 ) * ( x - - 0.032978997657610365 ) ) /
0.65703676932614619 ) ; } static real_T mmqfu2h3rkiz35 ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - 0.26771202558691926 ) * ( x -
0.26771202558691926 ) ) / 0.64651936126394793 ) ; } static real_T
mmqfu2h3rkiz35k ( real_T x ) { return muDoubleScalarExp ( - ( ( x -
0.8349868281891738 ) * ( x - 0.8349868281891738 ) ) / 0.63794303511963191 ) ;
} static real_T mcdfxndsyn ( real_T x ) { return muDoubleScalarExp ( - ( ( x
- - 0.8411002316857803 ) * ( x - - 0.8411002316857803 ) ) /
0.64678473796273184 ) ; } static real_T j0223btxck ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - 0.54869166533764235 ) * ( x -
0.54869166533764235 ) ) / 0.65289773742080648 ) ; } static real_T mbs4nix1mn
( real_T x ) { return muDoubleScalarExp ( - ( ( x - - 0.32469517582302004 ) *
( x - - 0.32469517582302004 ) ) / 0.64075647830545723 ) ; } static real_T
itb01lnoas ( real_T x ) { return muDoubleScalarExp ( - ( ( x - -
0.922896121360346 ) * ( x - - 0.922896121360346 ) ) / 0.61828688518577246 ) ;
} static real_T nuqqnyj3eo ( real_T x ) { return muDoubleScalarExp ( - ( ( x
- 0.70121919525834542 ) * ( x - 0.70121919525834542 ) ) / 0.66032050680809828
) ; } static real_T j1fmhnu4sm ( real_T x ) { return muDoubleScalarExp ( - (
( x - 0.655595237986864 ) * ( x - 0.655595237986864 ) ) / 0.63308014342293606
) ; } static real_T kxebdylqjv ( real_T x ) { return muDoubleScalarExp ( - (
( x - 0.044566528645786134 ) * ( x - 0.044566528645786134 ) ) /
0.6467100346050989 ) ; } static real_T fballg2myh ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - 0.53108254941471533 ) * ( x -
0.53108254941471533 ) ) / 0.650942256375343 ) ; } static real_T ew1vwlel2b (
real_T x ) { return muDoubleScalarExp ( - ( ( x - - 1.7744654099591923 ) * (
x - - 1.7744654099591923 ) ) / 0.63234043552122465 ) ; } static real_T
gnrzhc52mu ( real_T x ) { return muDoubleScalarExp ( - ( ( x - -
1.1859692681383158 ) * ( x - - 1.1859692681383158 ) ) / 0.652537813479148 ) ;
} static real_T k4ktdtxfqv ( real_T x ) { return muDoubleScalarExp ( - ( ( x
- - 1.0484442586880354 ) * ( x - - 1.0484442586880354 ) ) /
0.64300553396254367 ) ; } static real_T kl3znqyewx ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - 0.09100024620929939 ) * ( x -
0.09100024620929939 ) ) / 0.65978281237667413 ) ; } static real_T jx0qfhpjjm
( real_T x ) { return muDoubleScalarExp ( - ( ( x - 0.33871129372349656 ) * (
x - 0.33871129372349656 ) ) / 0.648565335514309 ) ; } static real_T
eoqgqmifmb ( real_T x ) { return muDoubleScalarExp ( - ( ( x - -
0.69438649101610561 ) * ( x - - 0.69438649101610561 ) ) / 0.64793432356335223
) ; } static real_T kfwx0hqbpz ( real_T x ) { return muDoubleScalarExp ( - (
( x - 0.65005738212500441 ) * ( x - 0.65005738212500441 ) ) /
0.64824278103229072 ) ; } static real_T cgaa0vrqd5 ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - - 0.12321599035696743 ) * ( x - -
0.12321599035696743 ) ) / 0.63860121520857716 ) ; } static real_T ool1q3wrrm
( real_T x ) { return muDoubleScalarExp ( - ( ( x - 0.12281972718416147 ) * (
x - 0.12281972718416147 ) ) / 0.63751356338117438 ) ; } static real_T
e5xkeze2hc ( real_T x ) { return muDoubleScalarExp ( - ( ( x - -
0.6515960321881844 ) * ( x - - 0.6515960321881844 ) ) / 0.63125599314652947 )
; } static real_T nsnm10y41r ( real_T x ) { return muDoubleScalarExp ( - ( (
x - - 1.0577719791794657 ) * ( x - - 1.0577719791794657 ) ) /
0.64780723164181908 ) ; } static real_T mhytlahnis ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - 0.79910143722475 ) * ( x - 0.79910143722475 ) )
/ 0.64288878281238537 ) ; } static real_T cnysmcqjj3 ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - 0.66006294824573031 ) * ( x -
0.66006294824573031 ) ) / 0.60983392899753008 ) ; } static real_T iy1z23ryli
( real_T x ) { return muDoubleScalarExp ( - ( ( x - 1.1040682213355373 ) * (
x - 1.1040682213355373 ) ) / 0.64812199150881611 ) ; } static real_T
m5qgyvj3li ( real_T x ) { return muDoubleScalarExp ( - ( ( x -
0.8401058169094574 ) * ( x - 0.8401058169094574 ) ) / 0.63493682211399638 ) ;
} static real_T dgndnoortl ( real_T x ) { return muDoubleScalarExp ( - ( ( x
- 0.52516368393451984 ) * ( x - 0.52516368393451984 ) ) / 0.66020876060928857
) ; } static real_T kk0iz5ncup ( real_T x ) { return muDoubleScalarExp ( - (
( x - 0.65855378782496832 ) * ( x - 0.65855378782496832 ) ) /
0.65206924559048485 ) ; } static real_T c02rfx3zoq ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - - 0.041525840688916425 ) * ( x - -
0.041525840688916425 ) ) / 0.646794243339769 ) ; } static real_T pbjuulk4jn (
real_T x ) { return muDoubleScalarExp ( - ( ( x - 0.9014574705737054 ) * ( x
- 0.9014574705737054 ) ) / 0.62941041688548127 ) ; } static real_T mau50zxrcu
( real_T x ) { return muDoubleScalarExp ( - ( ( x - - 1.5679925867687179 ) *
( x - - 1.5679925867687179 ) ) / 0.6358083556873062 ) ; } static real_T
opygp0herz ( real_T x ) { return muDoubleScalarExp ( - ( ( x - -
0.15706795864009981 ) * ( x - - 0.15706795864009981 ) ) / 0.65796672551558777
) ; } static real_T m42pkdkupu ( real_T x ) { return muDoubleScalarExp ( - (
( x - 0.36360577397779636 ) * ( x - 0.36360577397779636 ) ) /
0.62448291184653992 ) ; } static real_T gcsis4gmnv ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - 0.37047505412118092 ) * ( x -
0.37047505412118092 ) ) / 0.64667063048916817 ) ; } static real_T nrg1qs5nkj
( real_T x ) { return muDoubleScalarExp ( - ( ( x - 0.3715992811742998 ) * (
x - 0.3715992811742998 ) ) / 0.6326311144605461 ) ; } static real_T
nzq1ezuzw2 ( real_T x ) { return muDoubleScalarExp ( - ( ( x -
0.52483618205203941 ) * ( x - 0.52483618205203941 ) ) / 0.64552779597293619 )
; } static real_T bbu1naw12f ( real_T x ) { return muDoubleScalarExp ( - ( (
x - - 0.906857406734334 ) * ( x - - 0.906857406734334 ) ) /
0.61058627008363531 ) ; } static real_T lwr0xqdfbf ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - 0.27076488396119913 ) * ( x -
0.27076488396119913 ) ) / 0.62207471590130836 ) ; } static real_T hcz0zt23fw
( real_T x ) { return muDoubleScalarExp ( - ( ( x - - 0.98402420807248614 ) *
( x - - 0.98402420807248614 ) ) / 0.64877528933694317 ) ; } static real_T
cybpay4kzg ( real_T x ) { return muDoubleScalarExp ( - ( ( x - -
0.66431281023885647 ) * ( x - - 0.66431281023885647 ) ) / 0.608189428070693 )
; } static real_T fam1s5av4d ( real_T x ) { return muDoubleScalarExp ( - ( (
x - 0.40333770669876556 ) * ( x - 0.40333770669876556 ) ) / 0.629626940300011
) ; } static real_T bko0k3qstz ( real_T x ) { return muDoubleScalarExp ( - (
( x - 0.10138178591676658 ) * ( x - 0.10138178591676658 ) ) /
0.62644492816132413 ) ; } static real_T jm1yswfaaf ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - 0.13307481714421965 ) * ( x -
0.13307481714421965 ) ) / 0.6985156018826798 ) ; } static real_T ilfkitnbh2 (
real_T x ) { return muDoubleScalarExp ( - ( ( x - 0.23269951008573525 ) * ( x
- 0.23269951008573525 ) ) / 0.662465077580213 ) ; } static real_T ih0lfue41s
( real_T x ) { return muDoubleScalarExp ( - ( ( x - - 1.0476891941939095 ) *
( x - - 1.0476891941939095 ) ) / 0.66121446208286461 ) ; } static real_T
gkr5nau5cj ( real_T x ) { return muDoubleScalarExp ( - ( ( x - -
0.51397903652227017 ) * ( x - - 0.51397903652227017 ) ) / 0.63467509673586453
) ; } static real_T gr10gonb0t ( real_T x ) { return muDoubleScalarExp ( - (
( x - 1.4542188139815917 ) * ( x - 1.4542188139815917 ) ) /
0.5983174848028916 ) ; } static real_T nxcr3csoki ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - 1.1571208335328933 ) * ( x - 1.1571208335328933
) ) / 0.63815734162728233 ) ; } static real_T ifwm4eazzr ( real_T x ) {
return muDoubleScalarExp ( - ( ( x - - 0.33788757514563805 ) * ( x - -
0.33788757514563805 ) ) / 1.23618862117937 ) ; } static real_T efhsas3w45 (
real_T x ) { return muDoubleScalarExp ( - ( ( x - 0.40208618470417 ) * ( x -
0.40208618470417 ) ) / 1.2594808520153262 ) ; } static real_T fu3yc5xfju (
real_T x ) { return muDoubleScalarExp ( - ( ( x - 1.1326255028834069 ) * ( x
- 1.1326255028834069 ) ) / 1.2622215757970132 ) ; } static real_T hbaglipcpj
( real_T x ) { return muDoubleScalarExp ( - ( ( x - 0.56079426143253108 ) * (
x - 0.56079426143253108 ) ) / 1.2610425445785485 ) ; } static real_T
cipu2z1g5o ( real_T x ) { return muDoubleScalarExp ( - ( ( x - -
0.97877170873971375 ) * ( x - - 0.97877170873971375 ) ) / 1.2649315420744602
) ; } static real_T onun34ycxe ( real_T x ) { return muDoubleScalarExp ( - (
( x - 0.73520547662068214 ) * ( x - 0.73520547662068214 ) ) /
1.1736776061955323 ) ; } static real_T cfvfzwjkpb ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - 0.31181249034474279 ) * ( x -
0.31181249034474279 ) ) / 1.3536257750602159 ) ; } static real_T hnp4dwpusw (
real_T x ) { return muDoubleScalarExp ( - ( ( x - - 0.046551201710201419 ) *
( x - - 0.046551201710201419 ) ) / 1.2806319530827279 ) ; } static real_T
hpewhgu0iy ( real_T x ) { return muDoubleScalarExp ( - ( ( x -
0.58872206191944043 ) * ( x - 0.58872206191944043 ) ) / 1.1949178439799353 )
; } static real_T bvfxl5pvzt ( real_T x ) { return muDoubleScalarExp ( - ( (
x - - 0.68576972074045306 ) * ( x - - 0.68576972074045306 ) ) /
1.3064878318612407 ) ; } static real_T ezbg3mwhzr ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - - 0.51323638680790407 ) * ( x - -
0.51323638680790407 ) ) / 1.2621205680021703 ) ; } static real_T fndvjf1y4o (
real_T x ) { return muDoubleScalarExp ( - ( ( x - - 2.3737874116676108 ) * (
x - - 2.3737874116676108 ) ) / 1.2971350422506007 ) ; } static real_T
ehh4fb0eqj ( real_T x ) { return muDoubleScalarExp ( - ( ( x -
2.0161810839422714 ) * ( x - 2.0161810839422714 ) ) / 1.2735216423473699 ) ;
} static real_T iogwff2zo2 ( real_T x ) { return muDoubleScalarExp ( - ( ( x
- - 0.27669057874139374 ) * ( x - - 0.27669057874139374 ) ) /
1.2745514105280471 ) ; } static real_T pebx2jcoww ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - 1.1657287990860934 ) * ( x - 1.1657287990860934
) ) / 1.1988504035649961 ) ; } static real_T cgb40q3o1s ( real_T x ) { return
muDoubleScalarExp ( - ( ( x - 0.026412686824490623 ) * ( x -
0.026412686824490623 ) ) / 1.2834555525073177 ) ; } static real_T khe0k0drlj
( real_T x ) { return muDoubleScalarExp ( - ( ( x - 1.121060691368736 ) * ( x
- 1.121060691368736 ) ) / 1.2742035486875107 ) ; } static real_T dl3u0l5ezs (
real_T x ) { return muDoubleScalarExp ( - ( ( x - - 0.55493518848417556 ) * (
x - - 0.55493518848417556 ) ) / 1.2695399875771178 ) ; } static real_T
epfphcrtq1 ( real_T x ) { return muDoubleScalarExp ( - ( ( x -
0.75768525131592945 ) * ( x - 0.75768525131592945 ) ) / 1.2627417852511362 )
; } static void ldqujhzsbu ( const real_T inputs [ 6 ] , real_T inputMFCache
[ 102 ] ) { inputMFCache [ 0 ] = mmqfu2h3rk ( inputs [ 0 ] ) ; inputMFCache [
1 ] = mmqfu2h3rki ( inputs [ 0 ] ) ; inputMFCache [ 2 ] = mmqfu2h3rkiz (
inputs [ 0 ] ) ; inputMFCache [ 3 ] = mmqfu2h3rkiz3 ( inputs [ 0 ] ) ;
inputMFCache [ 4 ] = mmqfu2h3rkiz35 ( inputs [ 0 ] ) ; inputMFCache [ 5 ] =
mmqfu2h3rkiz35k ( inputs [ 0 ] ) ; inputMFCache [ 6 ] = mcdfxndsyn ( inputs [
0 ] ) ; inputMFCache [ 7 ] = j0223btxck ( inputs [ 0 ] ) ; inputMFCache [ 8 ]
= mbs4nix1mn ( inputs [ 0 ] ) ; inputMFCache [ 9 ] = itb01lnoas ( inputs [ 0
] ) ; inputMFCache [ 10 ] = nuqqnyj3eo ( inputs [ 0 ] ) ; inputMFCache [ 11 ]
= j1fmhnu4sm ( inputs [ 0 ] ) ; inputMFCache [ 12 ] = kxebdylqjv ( inputs [ 0
] ) ; inputMFCache [ 13 ] = fballg2myh ( inputs [ 0 ] ) ; inputMFCache [ 14 ]
= ew1vwlel2b ( inputs [ 0 ] ) ; inputMFCache [ 15 ] = gnrzhc52mu ( inputs [ 0
] ) ; inputMFCache [ 16 ] = k4ktdtxfqv ( inputs [ 0 ] ) ; inputMFCache [ 17 ]
= kl3znqyewx ( inputs [ 1 ] ) ; inputMFCache [ 18 ] = jx0qfhpjjm ( inputs [ 1
] ) ; inputMFCache [ 19 ] = eoqgqmifmb ( inputs [ 1 ] ) ; inputMFCache [ 20 ]
= kfwx0hqbpz ( inputs [ 1 ] ) ; inputMFCache [ 21 ] = cgaa0vrqd5 ( inputs [ 1
] ) ; inputMFCache [ 22 ] = ool1q3wrrm ( inputs [ 1 ] ) ; inputMFCache [ 23 ]
= e5xkeze2hc ( inputs [ 1 ] ) ; inputMFCache [ 24 ] = nsnm10y41r ( inputs [ 1
] ) ; inputMFCache [ 25 ] = mhytlahnis ( inputs [ 1 ] ) ; inputMFCache [ 26 ]
= cnysmcqjj3 ( inputs [ 1 ] ) ; inputMFCache [ 27 ] = iy1z23ryli ( inputs [ 1
] ) ; inputMFCache [ 28 ] = m5qgyvj3li ( inputs [ 1 ] ) ; inputMFCache [ 29 ]
= dgndnoortl ( inputs [ 1 ] ) ; inputMFCache [ 30 ] = kk0iz5ncup ( inputs [ 1
] ) ; inputMFCache [ 31 ] = c02rfx3zoq ( inputs [ 1 ] ) ; inputMFCache [ 32 ]
= pbjuulk4jn ( inputs [ 1 ] ) ; inputMFCache [ 33 ] = mau50zxrcu ( inputs [ 1
] ) ; inputMFCache [ 34 ] = opygp0herz ( inputs [ 2 ] ) ; inputMFCache [ 35 ]
= m42pkdkupu ( inputs [ 2 ] ) ; inputMFCache [ 36 ] = gcsis4gmnv ( inputs [ 2
] ) ; inputMFCache [ 37 ] = nrg1qs5nkj ( inputs [ 2 ] ) ; inputMFCache [ 38 ]
= nzq1ezuzw2 ( inputs [ 2 ] ) ; inputMFCache [ 39 ] = bbu1naw12f ( inputs [ 2
] ) ; inputMFCache [ 40 ] = lwr0xqdfbf ( inputs [ 2 ] ) ; inputMFCache [ 41 ]
= hcz0zt23fw ( inputs [ 2 ] ) ; inputMFCache [ 42 ] = cybpay4kzg ( inputs [ 2
] ) ; inputMFCache [ 43 ] = fam1s5av4d ( inputs [ 2 ] ) ; inputMFCache [ 44 ]
= bko0k3qstz ( inputs [ 2 ] ) ; inputMFCache [ 45 ] = jm1yswfaaf ( inputs [ 2
] ) ; inputMFCache [ 46 ] = ilfkitnbh2 ( inputs [ 2 ] ) ; inputMFCache [ 47 ]
= ih0lfue41s ( inputs [ 2 ] ) ; inputMFCache [ 48 ] = gkr5nau5cj ( inputs [ 2
] ) ; inputMFCache [ 49 ] = gr10gonb0t ( inputs [ 2 ] ) ; inputMFCache [ 50 ]
= nxcr3csoki ( inputs [ 2 ] ) ; inputMFCache [ 51 ] = ifwm4eazzr ( inputs [ 3
] ) ; inputMFCache [ 52 ] = efhsas3w45 ( inputs [ 3 ] ) ; inputMFCache [ 53 ]
= fu3yc5xfju ( inputs [ 3 ] ) ; inputMFCache [ 54 ] = hbaglipcpj ( inputs [ 3
] ) ; inputMFCache [ 55 ] = cipu2z1g5o ( inputs [ 3 ] ) ; inputMFCache [ 56 ]
= onun34ycxe ( inputs [ 3 ] ) ; inputMFCache [ 57 ] = cfvfzwjkpb ( inputs [ 3
] ) ; inputMFCache [ 58 ] = hnp4dwpusw ( inputs [ 3 ] ) ; inputMFCache [ 59 ]
= hpewhgu0iy ( inputs [ 3 ] ) ; inputMFCache [ 60 ] = bvfxl5pvzt ( inputs [ 3
] ) ; inputMFCache [ 61 ] = ezbg3mwhzr ( inputs [ 3 ] ) ; inputMFCache [ 62 ]
= fndvjf1y4o ( inputs [ 3 ] ) ; inputMFCache [ 63 ] = ehh4fb0eqj ( inputs [ 3
] ) ; inputMFCache [ 64 ] = iogwff2zo2 ( inputs [ 3 ] ) ; inputMFCache [ 65 ]
= pebx2jcoww ( inputs [ 3 ] ) ; inputMFCache [ 66 ] = cgb40q3o1s ( inputs [ 3
] ) ; inputMFCache [ 67 ] = khe0k0drlj ( inputs [ 3 ] ) ; inputMFCache [ 68 ]
= dl3u0l5ezs ( inputs [ 4 ] ) ; inputMFCache [ 69 ] = epfphcrtq1 ( inputs [ 4
] ) ; inputMFCache [ 70 ] = muDoubleScalarExp ( - ( ( inputs [ 4 ] -
0.35046283883319312 ) * ( inputs [ 4 ] - 0.35046283883319312 ) ) /
1.26531723676263 ) ; inputMFCache [ 71 ] = muDoubleScalarExp ( - ( ( inputs [
4 ] - - 0.17885839915323806 ) * ( inputs [ 4 ] - - 0.17885839915323806 ) ) /
1.2742845878159943 ) ; inputMFCache [ 72 ] = muDoubleScalarExp ( - ( ( inputs
[ 4 ] - 0.41328680232815884 ) * ( inputs [ 4 ] - 0.41328680232815884 ) ) /
1.2706632989189008 ) ; inputMFCache [ 73 ] = muDoubleScalarExp ( - ( ( inputs
[ 4 ] - 1.124436856214647 ) * ( inputs [ 4 ] - 1.124436856214647 ) ) /
1.2596316328450494 ) ; inputMFCache [ 74 ] = muDoubleScalarExp ( - ( ( inputs
[ 4 ] - - 1.0252295903826385 ) * ( inputs [ 4 ] - - 1.0252295903826385 ) ) /
1.2728646021028396 ) ; inputMFCache [ 75 ] = muDoubleScalarExp ( - ( ( inputs
[ 4 ] - 0.98384233297907731 ) * ( inputs [ 4 ] - 0.98384233297907731 ) ) /
1.2764683205402096 ) ; inputMFCache [ 76 ] = muDoubleScalarExp ( - ( ( inputs
[ 4 ] - - 0.64183290431704842 ) * ( inputs [ 4 ] - - 0.64183290431704842 ) )
/ 1.2631315393575691 ) ; inputMFCache [ 77 ] = muDoubleScalarExp ( - ( (
inputs [ 4 ] - - 1.4401218151386947 ) * ( inputs [ 4 ] - - 1.4401218151386947
) ) / 1.2351491223643407 ) ; inputMFCache [ 78 ] = muDoubleScalarExp ( - ( (
inputs [ 4 ] - 0.74563388606557046 ) * ( inputs [ 4 ] - 0.74563388606557046 )
) / 1.2793749667979504 ) ; inputMFCache [ 79 ] = muDoubleScalarExp ( - ( (
inputs [ 4 ] - 0.733174880108074 ) * ( inputs [ 4 ] - 0.733174880108074 ) ) /
1.2595655209894441 ) ; inputMFCache [ 80 ] = muDoubleScalarExp ( - ( ( inputs
[ 4 ] - - 0.051451059783969841 ) * ( inputs [ 4 ] - - 0.051451059783969841 )
) / 1.271246153157483 ) ; inputMFCache [ 81 ] = muDoubleScalarExp ( - ( (
inputs [ 4 ] - 0.58057660809125178 ) * ( inputs [ 4 ] - 0.58057660809125178 )
) / 1.2735690403504925 ) ; inputMFCache [ 82 ] = muDoubleScalarExp ( - ( (
inputs [ 4 ] - - 2.4856085548263445 ) * ( inputs [ 4 ] - - 2.4856085548263445
) ) / 1.2552746298572297 ) ; inputMFCache [ 83 ] = muDoubleScalarExp ( - ( (
inputs [ 4 ] - - 1.8230736127659239 ) * ( inputs [ 4 ] - - 1.8230736127659239
) ) / 1.2768045174711129 ) ; inputMFCache [ 84 ] = muDoubleScalarExp ( - ( (
inputs [ 4 ] - - 1.0983069796320197 ) * ( inputs [ 4 ] - - 1.0983069796320197
) ) / 1.2670172112735765 ) ; inputMFCache [ 85 ] = muDoubleScalarExp ( - ( (
inputs [ 5 ] - 0.14823305907778217 ) * ( inputs [ 5 ] - 0.14823305907778217 )
) / 1.2783587702768653 ) ; inputMFCache [ 86 ] = muDoubleScalarExp ( - ( (
inputs [ 5 ] - 0.39537428719775891 ) * ( inputs [ 5 ] - 0.39537428719775891 )
) / 1.2711347239088187 ) ; inputMFCache [ 87 ] = muDoubleScalarExp ( - ( (
inputs [ 5 ] - - 1.0617822272417279 ) * ( inputs [ 5 ] - - 1.0617822272417279
) ) / 1.2719231958608215 ) ; inputMFCache [ 88 ] = muDoubleScalarExp ( - ( (
inputs [ 5 ] - 0.81959786093351494 ) * ( inputs [ 5 ] - 0.81959786093351494 )
) / 1.2696044418091714 ) ; inputMFCache [ 89 ] = muDoubleScalarExp ( - ( (
inputs [ 5 ] - - 0.27235606562895848 ) * ( inputs [ 5 ] - -
0.27235606562895848 ) ) / 1.2648011385889342 ) ; inputMFCache [ 90 ] =
muDoubleScalarExp ( - ( ( inputs [ 5 ] - 0.37732475819809824 ) * ( inputs [ 5
] - 0.37732475819809824 ) ) / 1.262087137564273 ) ; inputMFCache [ 91 ] =
muDoubleScalarExp ( - ( ( inputs [ 5 ] - - 0.97720863110134093 ) * ( inputs [
5 ] - - 0.97720863110134093 ) ) / 1.2602087254415455 ) ; inputMFCache [ 92 ]
= muDoubleScalarExp ( - ( ( inputs [ 5 ] - - 1.2687615717961511 ) * ( inputs
[ 5 ] - - 1.2687615717961511 ) ) / 1.2746601532676249 ) ; inputMFCache [ 93 ]
= muDoubleScalarExp ( - ( ( inputs [ 5 ] - 1.2461449771545923 ) * ( inputs [
5 ] - 1.2461449771545923 ) ) / 1.2666972588051242 ) ; inputMFCache [ 94 ] =
muDoubleScalarExp ( - ( ( inputs [ 5 ] - 0.86761415497159833 ) * ( inputs [ 5
] - 0.86761415497159833 ) ) / 1.2402670299414305 ) ; inputMFCache [ 95 ] =
muDoubleScalarExp ( - ( ( inputs [ 5 ] - 1.512661969719604 ) * ( inputs [ 5 ]
- 1.512661969719604 ) ) / 1.2672018399446519 ) ; inputMFCache [ 96 ] =
muDoubleScalarExp ( - ( ( inputs [ 5 ] - 1.1267795613836984 ) * ( inputs [ 5
] - 1.1267795613836984 ) ) / 1.2691535789470358 ) ; inputMFCache [ 97 ] =
muDoubleScalarExp ( - ( ( inputs [ 5 ] - 0.702570910102805 ) * ( inputs [ 5 ]
- 0.702570910102805 ) ) / 1.2818313199773868 ) ; inputMFCache [ 98 ] =
muDoubleScalarExp ( - ( ( inputs [ 5 ] - 1.1216293509254136 ) * ( inputs [ 5
] - 1.1216293509254136 ) ) / 1.2700137158554627 ) ; inputMFCache [ 99 ] =
muDoubleScalarExp ( - ( ( inputs [ 5 ] - 0.039805517895426461 ) * ( inputs [
5 ] - 0.039805517895426461 ) ) / 1.2700560793068862 ) ; inputMFCache [ 100 ]
= muDoubleScalarExp ( - ( ( inputs [ 5 ] - 0.93260532118974016 ) * ( inputs [
5 ] - 0.93260532118974016 ) ) / 1.2704598442242889 ) ; inputMFCache [ 101 ] =
muDoubleScalarExp ( - ( ( inputs [ 5 ] - - 2.4467500396613624 ) * ( inputs [
5 ] - - 2.4467500396613624 ) ) / 1.2561114613202931 ) ; } static void
egyq2yy4j5 ( const real_T inputs [ 6 ] , real_T outputMFCache [ 17 ] ) {
real_T y ; int32_T i ; static const real_T b [ 7 ] = { 0.05134459094510023 ,
0.024438440869348276 , 0.0015574350901021796 , 0.72312951774745493 ,
0.073625597115444558 , - 0.045340169874603049 , 0.010540927980755805 } ;
static const real_T c [ 7 ] = { 0.028426945763419136 , 0.047574574262814306 ,
0.04910041647690689 , 0.69292391618549787 , 0.036757168857351141 , -
0.016540705295765512 , 0.034507186637963892 } ; static const real_T d [ 7 ] =
{ 0.07041084100184343 , - 0.011272746279514977 , - 0.00079632437682354475 ,
0.72579942000895 , 0.099076939820203977 , 0.0085489742072922259 , -
0.027080107367056794 } ; static const real_T e [ 7 ] = { 0.018109076424305121
, 0.065131275868133692 , 0.0081285096420668362 , 0.73188984012350833 ,
0.016218462156962835 , 0.031917926798830813 , - 0.12890946843370707 } ;
static const real_T f [ 7 ] = { 0.052757181273438494 , - 0.024295473360634486
, 0.027544914943767783 , 0.7018069724904985 , 0.07483330997239733 ,
0.016127065970700856 , - 0.028819814641368582 } ; static const real_T g [ 7 ]
= { 0.035019596944018225 , - 0.051300383816853062 , 0.00836914706485592 ,
0.51324872164228286 , 0.06147002628884355 , - 0.08300044605593139 ,
0.23794186951688989 } ; static const real_T h [ 7 ] = { 0.074481634752800507
, - 0.034071830089764506 , 0.037899193537958648 , 0.73308914965830507 ,
0.11077665046334004 , - 0.03350830001710383 , - 0.020365494804964614 } ;
static const real_T j [ 7 ] = { 0.051191172755740831 , - 0.026069977086432765
, - 0.0083033866081488623 , 0.71048627005951115 , 0.077157582999242927 , -
0.032163280352196871 , - 0.08173159564396143 } ; static const real_T k [ 7 ]
= { 0.1104166212921866 , 0.0026545801750481181 , - 0.093907063604191682 ,
0.56244193494305383 , 0.15264147400597572 , 0.019916903844629366 ,
0.067317905872222292 } ; static const real_T l [ 7 ] = { 0.041205161212289523
, 0.014151884766780368 , - 0.066432601270100547 , 0.78527256939450574 ,
0.0619872710210959 , - 0.064151899712445851 , 0.081698168059676529 } ; static
const real_T m [ 7 ] = { 0.10686497753118579 , - 0.037402080852832358 ,
0.078799061095216325 , 0.688735754690628 , 0.15806371520585238 , -
0.050253392227042185 , 0.023890667331695772 } ; static const real_T n [ 7 ] =
{ - 0.13703765531517054 , - 0.16543741118261196 , - 0.10642529607185384 ,
0.46548057524233438 , - 0.15980747704886594 , - 0.18498456187308554 ,
0.059994352607480636 } ; static const real_T o [ 7 ] = { 0.065725631583543775
, 0.00618676076238543 , - 0.056681366317381153 , 0.53145530098432314 ,
0.090069403331225553 , 0.015718493039070754 , 0.36415749242694551 } ; static
const real_T p [ 7 ] = { 0.10559464980967828 , 0.042595233518666877 ,
0.022481442443046319 , 0.63415950145778577 , 0.14009575701720134 ,
0.043400454031220143 , - 0.16024741011699484 } ; static const real_T q [ 7 ]
= { - 0.013382209560426702 , 0.018045146732151122 , 0.027288491952666985 ,
0.027778925368990161 , - 0.022209556991159219 , 0.019531287233558983 ,
0.019463365759948149 } ; static const real_T r [ 7 ] = { 0.038929223650259331
, - 0.033012945338677969 , - 0.141626165171426 , 0.35647706892920977 ,
0.060000154751189916 , - 0.027302273695670953 , - 0.012827131946319402 } ;
static const real_T s [ 7 ] = { - 0.13165187449487775 , 0.084746335596752154
, 0.12038927844267641 , 0.46342722289560662 , - 0.2005328744319308 ,
0.088839554270573343 , - 0.00846202644077701 } ; y = 0.0 ; for ( i = 0 ; i <
6 ; i ++ ) { y += inputs [ i ] * b [ i ] ; } outputMFCache [ 0 ] = y +
0.010540927980755805 ; y = 0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { y += inputs [
i ] * c [ i ] ; } outputMFCache [ 1 ] = y + 0.034507186637963892 ; y = 0.0 ;
for ( i = 0 ; i < 6 ; i ++ ) { y += inputs [ i ] * d [ i ] ; } outputMFCache
[ 2 ] = y + - 0.027080107367056794 ; y = 0.0 ; for ( i = 0 ; i < 6 ; i ++ ) {
y += inputs [ i ] * e [ i ] ; } outputMFCache [ 3 ] = y + -
0.12890946843370707 ; y = 0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { y += inputs [
i ] * f [ i ] ; } outputMFCache [ 4 ] = y + - 0.028819814641368582 ; y = 0.0
; for ( i = 0 ; i < 6 ; i ++ ) { y += inputs [ i ] * g [ i ] ; }
outputMFCache [ 5 ] = y + 0.23794186951688989 ; y = 0.0 ; for ( i = 0 ; i < 6
; i ++ ) { y += inputs [ i ] * h [ i ] ; } outputMFCache [ 6 ] = y + -
0.020365494804964614 ; y = 0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { y += inputs [
i ] * j [ i ] ; } outputMFCache [ 7 ] = y + - 0.08173159564396143 ; y = 0.0 ;
for ( i = 0 ; i < 6 ; i ++ ) { y += inputs [ i ] * k [ i ] ; } outputMFCache
[ 8 ] = y + 0.067317905872222292 ; y = 0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { y
+= inputs [ i ] * l [ i ] ; } outputMFCache [ 9 ] = y + 0.081698168059676529
; y = 0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { y += inputs [ i ] * m [ i ] ; }
outputMFCache [ 10 ] = y + 0.023890667331695772 ; y = 0.0 ; for ( i = 0 ; i <
6 ; i ++ ) { y += inputs [ i ] * n [ i ] ; } outputMFCache [ 11 ] = y +
0.059994352607480636 ; y = 0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { y += inputs [
i ] * o [ i ] ; } outputMFCache [ 12 ] = y + 0.36415749242694551 ; y = 0.0 ;
for ( i = 0 ; i < 6 ; i ++ ) { y += inputs [ i ] * p [ i ] ; } outputMFCache
[ 13 ] = y + - 0.16024741011699484 ; y = 0.0 ; for ( i = 0 ; i < 6 ; i ++ ) {
y += inputs [ i ] * q [ i ] ; } outputMFCache [ 14 ] = y +
0.019463365759948149 ; y = 0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { y += inputs [
i ] * r [ i ] ; } outputMFCache [ 15 ] = y + - 0.012827131946319402 ; y = 0.0
; for ( i = 0 ; i < 6 ; i ++ ) { y += inputs [ i ] * s [ i ] ; }
outputMFCache [ 16 ] = y + - 0.00846202644077701 ; } static int32_T
jp0jw2y0rb ( int32_T x ) { int32_T y ; if ( x < 0 ) { if ( x <= MIN_int32_T )
{ y = MAX_int32_T ; } else { y = - x ; } } else { y = x ; } return y ; }
static real_T el4svmnatj ( const real_T x [ 2 ] ) { return x [ 0 ] * x [ 1 ]
; } void MdlInitialize ( void ) { rtX . nhmi4prcvx [ 0 ] = 0.0 ; rtX .
nhmi4prcvx [ 1 ] = 0.0 ; rtX . nhmi4prcvx [ 2 ] = 0.0 ; rtDW . f5s2v1yc2g =
rtP . UnitDelay3_InitialCondition ; rtDW . mil4uej4ik = rtP .
UnitDelay4_InitialCondition ; rtDW . jbwnzpi0mc = rtP .
UnitDelay5_InitialCondition ; rtDW . hbvixmjm01 = rtP .
UnitDelay_InitialCondition ; rtDW . pawxfsspfz = rtP .
UnitDelay1_InitialCondition ; rtDW . n4gupxbez1 = rtP .
UnitDelay2_InitialCondition ; rtX . e0ez3jbg4s = rtP . Integrator_IC ; } void
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
"ModelSquareSubtractive/To Workspace" ; rtDW . nzm5chfiwj . LoggedData =
rt_CreateStructLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) ,
ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "performance" ,
1 , 0 , 1 , 0.0 , & rt_ToWksSignalInfo , rt_ToWksBlockName ) ; if ( rtDW .
nzm5chfiwj . LoggedData == ( NULL ) ) return ; } MdlInitialize ( ) ; } void
MdlOutputs ( int_T tid ) { int_T iy ; real_T sumAntecedentOutputs ; real_T
inputMFCache [ 102 ] ; int32_T inputID ; static const int8_T b [ 102 ] = { 1
, 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 1 ,
2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 1 , 2
, 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 1 , 2 ,
3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 1 , 2 , 3
, 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 1 , 2 , 3 ,
4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 } ; real_T
aggregatedOutputs ; real_T outputMFCache [ 17 ] ; real_T cjmbdwlftv [ 17 ] ;
real_T tmp [ 6 ] ; real_T il4wcmi21h [ 2 ] ; int32_T q0 ; int32_T q1 ; rtB .
hhamu5jxzd = 0.0 ; rtB . hhamu5jxzd += rtP . TransferFcn_C [ 0 ] * rtX .
nhmi4prcvx [ 0 ] ; rtB . hhamu5jxzd += rtP . TransferFcn_C [ 1 ] * rtX .
nhmi4prcvx [ 1 ] ; rtB . hhamu5jxzd += rtP . TransferFcn_C [ 2 ] * rtX .
nhmi4prcvx [ 2 ] ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . mlee2axljm =
rtDW . f5s2v1yc2g ; rtB . jxmvhhsgtx = rtDW . mil4uej4ik ; rtB . m5pohldjrs =
rtDW . jbwnzpi0mc ; rtB . frqtarnoto = rtDW . hbvixmjm01 ; rtB . nbjqft15mn =
rtDW . pawxfsspfz ; rtB . llklvxrv2s = rtDW . n4gupxbez1 ; if ( ssIsSampleHit
( rtS , 1 , 0 ) ) { sumAntecedentOutputs = 0.0 ; tmp [ 0 ] = rtB . mlee2axljm
; tmp [ 1 ] = rtB . jxmvhhsgtx ; tmp [ 2 ] = rtB . m5pohldjrs ; tmp [ 3 ] =
rtB . frqtarnoto ; tmp [ 4 ] = rtB . nbjqft15mn ; tmp [ 5 ] = rtB .
llklvxrv2s ; ldqujhzsbu ( tmp , inputMFCache ) ; aggregatedOutputs = 0.0 ;
tmp [ 0 ] = rtB . mlee2axljm ; tmp [ 1 ] = rtB . jxmvhhsgtx ; tmp [ 2 ] = rtB
. m5pohldjrs ; tmp [ 3 ] = rtB . frqtarnoto ; tmp [ 4 ] = rtB . nbjqft15mn ;
tmp [ 5 ] = rtB . llklvxrv2s ; egyq2yy4j5 ( tmp , outputMFCache ) ; for ( iy
= 0 ; iy < 17 ; iy ++ ) { cjmbdwlftv [ iy ] = 1.0 ; for ( inputID = 0 ;
inputID < 6 ; inputID ++ ) { q0 = jp0jw2y0rb ( 17 * inputID ) ; il4wcmi21h [
0 ] = cjmbdwlftv [ iy ] ; q1 = b [ 17 * inputID + iy ] ; if ( ( q0 < 0 ) && (
q1 < MIN_int32_T - q0 ) ) { q0 = MIN_int32_T ; } else if ( ( q0 > 0 ) && ( q1
> MAX_int32_T - q0 ) ) { q0 = MAX_int32_T ; } else { q0 += q1 ; } il4wcmi21h
[ 1 ] = inputMFCache [ q0 - 1 ] ; cjmbdwlftv [ iy ] = el4svmnatj ( il4wcmi21h
) ; } sumAntecedentOutputs += cjmbdwlftv [ iy ] ; aggregatedOutputs +=
outputMFCache [ iy ] * cjmbdwlftv [ iy ] ; } if ( sumAntecedentOutputs == 0.0
) { rtB . msxxuiybs1 = - 0.1526961 ; } else { rtB . msxxuiybs1 = 1.0 /
sumAntecedentOutputs * aggregatedOutputs ; } } } rtB . cd4ygbvexn = rtX .
e0ez3jbg4s ; { double locTime = ssGetTaskTime ( rtS , 0 ) ; ; if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 0 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateStructLogVar ( (
StructLogVar * ) rtDW . nzm5chfiwj . LoggedData , & locTime , & rtB .
cd4ygbvexn ) ; } } } } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { } if (
ssIsSampleHit ( rtS , 1 , 0 ) && ssIsSampleHit ( rtS , 2 , 0 ) ) { rtB .
hjdaerqunh [ 0 ] = rtB . mlee2axljm ; rtB . hjdaerqunh [ 1 ] = rtB .
jxmvhhsgtx ; rtB . hjdaerqunh [ 2 ] = rtB . m5pohldjrs ; rtB . hjdaerqunh [ 3
] = rtB . frqtarnoto ; rtB . hjdaerqunh [ 4 ] = rtB . nbjqft15mn ; rtB .
hjdaerqunh [ 5 ] = rtB . llklvxrv2s ; } rtB . ahwzdqlhvs = rtB . hhamu5jxzd -
rtB . msxxuiybs1 ; rtB . jt2j2r22xy = rtB . ahwzdqlhvs * rtB . ahwzdqlhvs ;
sumAntecedentOutputs = rtP . SignalGenerator_Frequency * ssGetT ( rtS ) ; if
( sumAntecedentOutputs - muDoubleScalarFloor ( sumAntecedentOutputs ) >= 0.5
) { rtB . n0yihokmaq = rtP . SignalGenerator_Amplitude ; } else { rtB .
n0yihokmaq = - rtP . SignalGenerator_Amplitude ; } UNUSED_PARAMETER ( tid ) ;
} void MdlUpdate ( int_T tid ) { if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtDW
. f5s2v1yc2g = rtB . hhamu5jxzd ; rtDW . mil4uej4ik = rtB . mlee2axljm ; rtDW
. jbwnzpi0mc = rtB . jxmvhhsgtx ; rtDW . hbvixmjm01 = rtB . n0yihokmaq ; rtDW
. pawxfsspfz = rtB . frqtarnoto ; rtDW . n4gupxbez1 = rtB . nbjqft15mn ; } if
( ssIsSampleHit ( rtS , 2 , 0 ) ) { } UNUSED_PARAMETER ( tid ) ; } void
MdlUpdateTID3 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void
MdlDerivatives ( void ) { XDot * _rtXdot ; _rtXdot = ( ( XDot * ) ssGetdX (
rtS ) ) ; _rtXdot -> nhmi4prcvx [ 0 ] = 0.0 ; _rtXdot -> nhmi4prcvx [ 0 ] +=
rtP . TransferFcn_A [ 0 ] * rtX . nhmi4prcvx [ 0 ] ; _rtXdot -> nhmi4prcvx [
1 ] = 0.0 ; _rtXdot -> nhmi4prcvx [ 0 ] += rtP . TransferFcn_A [ 1 ] * rtX .
nhmi4prcvx [ 1 ] ; _rtXdot -> nhmi4prcvx [ 2 ] = 0.0 ; _rtXdot -> nhmi4prcvx
[ 0 ] += rtP . TransferFcn_A [ 2 ] * rtX . nhmi4prcvx [ 2 ] ; _rtXdot ->
nhmi4prcvx [ 1 ] += rtX . nhmi4prcvx [ 0 ] ; _rtXdot -> nhmi4prcvx [ 2 ] +=
rtX . nhmi4prcvx [ 1 ] ; _rtXdot -> nhmi4prcvx [ 0 ] += rtB . n0yihokmaq ;
_rtXdot -> e0ez3jbg4s = rtB . jt2j2r22xy ; } void MdlProjection ( void ) { }
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
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 3647628146U ) ;
ssSetChecksumVal ( rtS , 1 , 3298329176U ) ; ssSetChecksumVal ( rtS , 2 ,
3509673088U ) ; ssSetChecksumVal ( rtS , 3 , 407949015U ) ; }
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
ModelSquareSubtractive_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"ModelSquareSubtractive" ) ; ssSetPath ( rtS , "ModelSquareSubtractive" ) ;
ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal ( rtS , 500.0 ) ; { static RTWLogInfo
rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval = NULL ;
ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { rtliSetLogXSignalInfo (
ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; rtliSetLogT ( ssGetRTWLogInfo ( rtS )
, "tout" ) ; rtliSetLogX ( ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal
( ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogVarNameModifier (
ssGetRTWLogInfo ( rtS ) , "none" ) ; rtliSetLogFormat ( ssGetRTWLogInfo ( rtS
) , 4 ) ; rtliSetLogMaxRows ( ssGetRTWLogInfo ( rtS ) , 1000 ) ;
rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS ) , 1 ) ; rtliSetLogY (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogYSignalInfo ( ssGetRTWLogInfo (
rtS ) , ( NULL ) ) ; rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL
) ) ; } { static struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS ,
& statesInfo2 ) ; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssSolverInfo slvrInfo ; static boolean_T contStatesDisabled [ 4 ] ; static
real_T absTol [ 4 ] = { 1.0000000000000001E-7 , 1.0000000000000001E-7 ,
1.0000000000000001E-7 , 1.0000000000000001E-7 } ; static uint8_T
absTolControl [ 4 ] = { 0U , 0U , 0U , 0U } ; static ssNonContDerivSigInfo
nonContDerivSigInfo [ 1 ] = { { 1 * sizeof ( real_T ) , ( char * ) ( & rtB .
msxxuiybs1 ) , ( NULL ) } } ; ssSetSolverRelTol ( rtS , 0.0001 ) ;
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
ssSetChecksumVal ( rtS , 0 , 3647628146U ) ; ssSetChecksumVal ( rtS , 1 ,
3298329176U ) ; ssSetChecksumVal ( rtS , 2 , 3509673088U ) ; ssSetChecksumVal
( rtS , 3 , 407949015U ) ; { static const sysRanDType rtAlwaysEnabled =
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
