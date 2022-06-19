#include <iostream>
using namespace std;

int add(int , int, int = 0);

int main(void) {
    int a, b;
    cout << "Enter two number: ";
    cin >> a >> b;
    cout << "Sum is: " << add (a, b) << endl;
    int c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    cout << "Sum is " << add(a, b, c) << endl;
 	return 0;
}

int add(int x, int y, int z) {
    return x + y + z;
}