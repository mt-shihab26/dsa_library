#include <iostream>
using namespace std;

int main() {
    cout << 14.0 / 5.0 << endl;
    cout << 7.2 / 2.5 << endl;
    cout << 7.0 / 3 << endl;
    /* in side c++ it's happen
           7.0 / 3
        => 7.0 / 3.0
        => 2.33333
    */
    cout << 7 / 3.0 << endl; 
    return 0;
}