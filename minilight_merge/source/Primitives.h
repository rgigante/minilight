/*------------------------------------------------------------------------------

   MiniLight tools C : Supplementary tools for MiniLight
   Harrison Ainsworth / HXA7241 : 2013

   http://www.hxa.name/minilight

------------------------------------------------------------------------------*/


#ifndef Primitives_h
#define Primitives_h


#include <limits.h>
#include <float.h>




/* types -------------------------------------------------------------------- */

/* for GCC 4.2 */

typedef  signed   int    bool;
typedef  unsigned int    intu;

/*typedef  signed   char   byte;*/
typedef  unsigned char   byteu;
/*typedef  signed   short  short16;*/
/*typedef  unsigned short  short16u;*/
typedef  signed   int    int32;
typedef  unsigned int    int32u;
/*typedef  signed   long   long64;*/
/*typedef  unsigned long   long64u;*/

typedef  float           real32;
typedef  double          real64;




/* constants ---------------------------------------------------------------- */

#define false  0
#define true   1


#define BYTEU_MIN 0
#define BYTEU_MAX UCHAR_MAX

#define INT32_MIN  INT_MIN
#define INT32_MAX  INT_MAX
#define INT32U_MIN 0
#define INT32U_MAX UINT_MAX


/*#define REAL32_MIN_POS ((real32)( FLT_MIN))*/
/*#define REAL32_MIN_NEG ((real32)(-FLT_MAX))*/
/*#define REAL32_MAX     ((real32)(FLT_MAX))*/

/*#define REAL64_MIN_POS ((real64)( DBL_MIN))*/
/*#define REAL64_MIN_NEG ((real64)(-DBL_MAX))*/
#define REAL64_MAX     ((real64)(DBL_MAX))




#endif
