#include <stdio.h>
#include <math.h>
/*#include "udf.h" (used for FLUENT UDF)*/

#define doulbe_precision 1

#if (double_precision==1)
  #define real double
#else
  #define real single
#endif

#define AIR_VISOCOSITY 1.83e-5 /*based on 300K */
#define AIR_DEN 1.225
