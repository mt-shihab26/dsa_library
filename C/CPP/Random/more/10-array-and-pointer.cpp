#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int a[10];
    a[0] = 2;
    a[1] = 4;
    cout << "a: " << a << endl;
    cout << "&a[0]: " << a << endl;
    cout << "*a: " << *a << endl;
    cout << "a + 1: " << a + 1 << endl;
    cout << "&a[1]: " << &a[1] << endl;
    cout << "*(a+1): " << *(a+1) << endl;
}