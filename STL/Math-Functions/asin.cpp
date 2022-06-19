/*
     double asin (double x);
      float asin (float x);
long double asin (long double x);
     double asin (T x);           // additional overloads for integral types
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
    
    return 0;
}
