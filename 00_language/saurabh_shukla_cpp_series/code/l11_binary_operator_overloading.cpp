#include <iostream>
using namespace std;

class Complex {
    int a, b;
public:
    void set_data(int x, int y) {
        a = x;
        b = y;
    }
    void show_data() {
        cout << "\na = " << a << " b = " << b << "\n";
    }
    Complex operator+(Complex c) {
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }
};

int main(void) {
    Complex c1, c2, c3;
    c1.set_data(3, 4);
    c2.set_data(5, 6);
    // c3 = c1 + c2; // We make new + operator dafinition
    c3 = c1.operator +(c2); // also we call this
    c3.show_data();
    return 0;
}