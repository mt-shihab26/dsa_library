/*
     double sqrt (double x);
      float sqrt (float x);
long double sqrt (long double x);
     double sqrt (T x);           // additional overloads for integral types
*/

/* sqrt example */
#include <cstdio>      /* printf */
#include <cmath>       /* sqrt */

int main ()
{
  double param, result;

  param = 1024.0;

  result = sqrt (param);

  printf ("sqrt(%f) = %f\n", param, result );
  return 0;
}