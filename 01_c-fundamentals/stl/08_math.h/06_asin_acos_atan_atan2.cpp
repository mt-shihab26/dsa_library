#include <bits/stdc++.h>

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
     cout << "acos(.25) = " << acos(.25) << "\n";

     // [Mathematics] tan-1x = atan(x) [In C++ Programming];
     cout << "atan(.25) = " << atan(.25) << "\n";

     // atan2
     double x = 10.0, y = 10.0, result;
     result = atan2(y, x);

     std::cout << "atan2(y/x) = " << result << " radians" << std::endl;

     double PI = acos(-1);
     std::cout << "atan2(y/x) = " << result * 180 / PI << " degrees" << std::endl;

     return 0;
}
