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
        cout << "a = " << a << " b = " << b << "\n";
    }
    Complex operator-() {
        Complex temp;
        temp.a = -a;
        temp.b = -b;
        return temp;
    }
};

int main(void) {
    Complex c1, c2;
    c1.set_data(3, 4);

    // c2 = -c1;
    c2 = c1.operator-();
    
    c2.show_data();

    return 0;
}