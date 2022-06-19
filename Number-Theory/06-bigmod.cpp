#include <bits/stdc++.h>
using namespace std;
using lli = long long int;


lli pow_with_mod(lli x, lli p, lli m) {
    if (p == 1) return x % m;
    lli rs = pow_with_mod(x, p / 2, m);
    rs *= rs;
    if (p % 2 == 1) {
        rs %= m;
        rs *= x;
    }
    return rs % m;
    // O(log(p))
}


int main() {
    cout << pow_with_mod(2, 10, 1e9) << "\n";
}