#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int x = 4;
    int *p_x = &x;
    cout << "Addr x: " << &x << endl;
    cout << "Val p_x: " << p_x << endl;
    cout << "Val *p_x: " << *p_x << endl;
    *p_x = 5;
    cout << "x: " << x << endl;
    cout << "p_x + 1" << p_x + 1 << endl;
}