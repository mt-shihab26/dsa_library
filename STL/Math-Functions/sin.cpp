/*
     double sin (double x); // here x is radian angle
      float sin (float x);
long double sin (long double x);
     double sin (T x);           // additional overloads for integral types
*/


#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
    double PI = acos(-1);

    // [Mathematics] sin x = sin(x) [In C++ Programming]
    cout <<"sin 30 degre or sin PI/6 radian = " <<sin(PI/6) <<"\n";
}