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
        cout << "a = " << a << " b = " << b << endl;
    }
    operator int () { // casting operator
        return a;
    }
};

int main(void) {
    Complex c1;
    c1.set_data(3, 4);
    c1.show_data();
    int x;
    x = c1; // x = c1.operator int()
    cout << x << endl;
    return 0;
}   