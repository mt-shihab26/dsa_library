/*
     double ceil (double x);
      float ceil (float x);
long double ceil (long double x);
     double ceil (T x);           // additional overloads for integral types
*/

/* ceil example */
#include <cstdio>      /* printf */
#include <cmath>       /* ceil */
#include <bits/stdc++.h>
using namespace std;

int main () {
  printf ( "ceil of 2.3 is %.1f\n", ceil(2.3) );
  printf ( "ceil of 3.8 is %.1f\n", ceil(3.8) );
  printf ( "ceil of -2.3 is %.1f\n", ceil(-2.3) );
  printf ( "ceil of -3.8 is %.1f\n", ceil(-3.8) );

  return 0;
}
