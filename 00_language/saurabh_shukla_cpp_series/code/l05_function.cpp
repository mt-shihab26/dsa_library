#include <iostream>
using namespace std;

int sum(int, int);

int main(void) {
    int a = 5, b = 6;
    int s = sum(a, b);
    cout << "Sum is " << s << endl; 
}

int sum (int x, int y) {
    return (x + y);
}