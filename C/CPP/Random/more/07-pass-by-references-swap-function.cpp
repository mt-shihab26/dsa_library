#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main(void) {
    int x, y;
    x = 3, y = 8;

    swap(x, y);

    cout << "x = " << x << " y = " << y << endl;

}