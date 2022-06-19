#include <iostream>
using namespace std;

int main() {
    // Convert float to int
    float f = 4.2;
    cout << (int) f << endl;

    // Convert int ot float
    int x = 5;
    int y = 2;
    // Convert int x to float, then divide by y
    cout << ((float) x) / y << endl; // outputs 2.5
    cout << x / y << endl; // outputs 2 (integer division)

    return 0;
}