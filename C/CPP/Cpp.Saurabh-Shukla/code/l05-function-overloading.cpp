#include <iostream>
using namespace std;

int area(int, int);
float area(int);

int main(void) {
    int r;
    cout << "Enter radius of a circle: ";
    cin >> r;
    float A = area(r);
    cout << "Area of Circle is " << A << endl;
    int l, b, a;
    cout << "Enter length and breadth of rectangle: ";
    cin >> l  >> b;
    a = area(l, b);
    cout << "Area of Rectangle is " << a << endl;
    return 0;  
}

float area(int R) {
    return 3.1416 * R * R;
}

int area(int L, int B) {
    return L*B;
}