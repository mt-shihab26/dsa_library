#include <bits/stdc++.h>
using namespace std;

#define MAX_N 20

int memo[MAX_N + 1];

int f(int n) {
    memo[0] = 0;
    memo[1] = 1;
    for (int i = 2; i <= n; i++) {
        memo[i] = memo[i - 1] + memo[i - 2];
    }

    return memo[n];
}

int main() {
    cout << f(12) << endl;
}