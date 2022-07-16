#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << INT_MAX << "\n";
    int a = (1LL << 31) - 1; // 1 << n -> 2 ^ n
    cout << a << "\n";

    unsigned int b = (1ll << 32) - 1;
    cout << b << "\n";
}