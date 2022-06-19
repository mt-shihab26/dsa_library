/*
     double asin (double x);
      float asin (float x);
long double asin (long double x);
     double asin (T x);           // additional overloads for integral types
*/
/*
     double acos (double x);
      float acos (float x);
long double acos (long double x);
     double acos (T x);          // additional overloads for integral types
*/
/*
     double atan (double x);
      float atan (float x);
long double atan (long double x);
     double atan (T x);           // additional overloads for integral types    
*/


#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    // [Mathematics] sin^-1 x = asin(x) [In C++ Programming];
    double x = 0.25, result;
    result = asin(x);

    cout << "asin(x) = " << result << " radians" << endl;
    // result in degrees
    cout << "asin(x) = " << result * 180 / 3.1415 << " degrees" << endl;


    // [Mathematics] cos-1x = acos(x) [In C++ Programming];
    cout << "acos(.25) = " <<acos(.25) <<"\n";

    
    // [Mathematics] tan-1x = atan(x) [In C++ Programming];
    cout <<"atan(.25) = " <<atan(.25) << "\n";

    return 0;
}
