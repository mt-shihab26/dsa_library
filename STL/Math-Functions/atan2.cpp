// C++ program to demonstrate the atane()
// function when both parameters are of
// same type
#include <iostream>
#include <cmath>
// using namespace std;

int main() {
    double x = 10.0, y = 10.0, result;
    result = atan2(y, x);

    std::cout << "atan2(y/x) = " <<result << " radians" << std::endl;

    double PI = acos(-1);
    std::cout << "atan2(y/x) = " << result * 180 / PI << " degrees" <<std::endl;

}