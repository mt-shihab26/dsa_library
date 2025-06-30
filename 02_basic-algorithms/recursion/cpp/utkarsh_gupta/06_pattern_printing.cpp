#include <bits/stdc++.h>
using namespace std;

void pattern_print(int n) {
    if (n == 0) {
        return;
    }

    pattern_print(n - 1);

    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << "\n";
}

int main() {
    pattern_print(8);
}