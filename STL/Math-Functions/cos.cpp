/*
     double cos (double x);
      float cos (float x);
long double cos (long double x);
     double cos (T x);           // additional overloads for integral types
*/


#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
    double PI = acos(-1);

    // [Mathematics] cos x = cos(x) [In C++ Programming]
    cout <<"cos 30 degre or cos PI/6 radian = " <<cos(PI/6) <<"\n";
    
}