// Overloading of insetion and Extraction opeators
#include <iostream>
using namespace std;

class Complex {
public:
int a, b;
    void set_data(int x, int y) {
        a = x;
        b = y;
    }
    void show_data() {
        cout << "a = " << a << " b = " << b << endl;
    }
    friend ostream& operator<<(ostream&, Complex);
    friend istream& operator>>(istream&, Complex&);
};

ostream& operator<<(ostream &dout, Complex c) {
    cout << "a = " << c.a << " b = ", c.b;
    return dout;
}
istream& operator>>(ostream &din, Complex &x) {
    cin >> x.a >> x.b;
    return din;
}

int main(void) {
    Complex c1;
    cout << "Enter a Complex number: ";
    cin >> c1;
    cout << "You enterd ";
    cout << c1; // operator <<(cout, c1)
    return 0;
}