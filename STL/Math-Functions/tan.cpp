/*
     double tan (double x);
      float tan (float x);
long double tan (long double x);
     double tan (T x);           // additional overloads for integral types
*/


#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
    double PI = acos(-1.0);

    // [Mathematics] tan x = tan(x) [In C++ Programming]
    cout <<"tan 30 degre or tan PI/6 radian = " <<tan(PI/6) <<"\n";

}