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
    // overloading operator as friend function decleration
    friend Complex operator+(Complex, Complex);
};

// overloading operator as friend function defination
Complex operator+(Complex x, Complex y) {
    Complex temp;
    temp.a = x.a + y.a;
    temp.b = x.b + y.b;
    return temp;
}

int main(void) {
    Complex c1, c2, c3;
    c1.set_data(3, 4);
    c2.set_data(5, 6);
    c3 = c1+c2; 
    // c3 = operator+(c1, c2);
    c3.show_data();
    return 0;
}
