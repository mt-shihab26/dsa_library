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
    friend Complex operator-(Complex);
};

// overloading operator as friend function defination
Complex operator-(Complex x) {
    Complex temp;
    temp.a = -x.a;
    temp.b = -x.b;
    return temp;
}

int main(void) {
    Complex c1, c2;
    c1.set_data(3, 4);
    c2 = -c1; 
    // c3 = operator-(c1);
    c2.show_data();
    return 0;
}