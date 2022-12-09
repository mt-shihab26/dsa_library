/*
Given a number x. print its factorial
1 <= x <= 100;
print ans module m 
where m = 47
*/

#include <bits/stdc++.h>
using namespace std;

using lli = long long int;

lli factorial(lli x, lli m) {
    lli fac = 1 % m;
    for (int i = 2; i <= x; i++) {
        fac *= i;
        fac %= m;
    }
    return fac;
}

int main() {
    int m =  47;
    cout << factorial(5, m) << "\n";
    cout << factorial(19, m) << "\n";
    cout << factorial(20, m) << "\n";
    cout << factorial(21, m) << "\n";
}