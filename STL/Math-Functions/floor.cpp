/*
     double ceil (double x);
      float ceil (float x);
long double ceil (long double x);
     double ceil (T x);           // additional overloads for integral types
*/

/*
     double floor (double x);
      float floor (float x);
long double floor (long double x);
     double floor (T x);           // additional overloads for integral types
*/

#include <cstdio>      /* printf */
#include <cmath>       /* ceil */
#include <bits/stdc++.h>
using namespace std;

int main () {
  printf ( "floor of 2.3 is %.1f\n", floor(2.3) );
  printf ( "floor of 3.8 is %.1f\n", floor(3.8) );
  printf ( "floor of -2.3 is %.1f\n", floor(-2.3) );
  printf ( "floor of -3.8 is %.1f\n", floor(-3.8) );
  return 0;
}
