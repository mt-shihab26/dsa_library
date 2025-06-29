#include <iostream>
using namespace std;

class Complex {
    int a, b;
public:
    Complex() {} //default constructor
    Complex(int k) {
        a = k;
        b = 0;
    }
    void set_data(int x, int y) {
        a = x;
        b = y;
    }
    void show_data() {
        cout << "a = " << a << " b = " << b << endl;
    }
};

int main(void) {
    Complex c1;
    int x = 5;
    c1 = x; // c1.Complex(x)
    c1.show_data(); // a = 5 b = 0

    return 0;

}