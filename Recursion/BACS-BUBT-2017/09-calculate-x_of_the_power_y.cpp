#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;

llint cal_x_power_y(llint x, llint y, llint m) {
    llint sum = 1;
    for (llint i = 1; i <= y; i++) {
        sum = ((sum % m) * (x % m)) % m;
    }
    return sum;
}

int main(void) {
    llint x, y, m;
    x = 5;
    y = 8;
    m = 1e8;
    // calculate x^y
    cout << cal_x_power_y(x, y, m) << "\n";
}