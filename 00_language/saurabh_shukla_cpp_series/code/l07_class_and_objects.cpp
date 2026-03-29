#include <iostream>
using namespace std;

class Complex {
    int a, b;

public:
    void set_data(int, int);
    void show_data() {
        cout << "a = " << a << " b = " << b << endl;
    }
};

void Complex::set_data(int x, int y) {
    a = x;
    b = y;
}

int main(void) {
    Complex c1;
    c1.set_data(3, 4);
    c1.show_data();
    return 0;
}