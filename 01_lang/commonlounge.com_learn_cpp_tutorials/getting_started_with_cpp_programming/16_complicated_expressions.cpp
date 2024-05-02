#include <iostream>
using namespace std;

int main() {
    int a = 30;
    int b = 15;
    int sum = a + b;

    /*
        inside C++
           a + b 
        => 30 + b   <-- C++ looks up the value stored in variable "a"
        => 30 + 15  <-- C++ looks up the value stored in variable "b"
        => 45
    */

    cout << sum << endl;
    return 0;
}