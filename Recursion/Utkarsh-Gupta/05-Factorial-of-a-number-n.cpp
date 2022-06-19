#include <bits/stdc++.h>
using namespace std;

int facto(int n) {
    if (n == 0) {
        return 1;
    }
    return facto(n-1) * n;
}

int main() {
    cout << facto(10) << "\n";
}