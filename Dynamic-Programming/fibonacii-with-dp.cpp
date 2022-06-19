#include <bits/stdc++.h>
using namespace std;

#define MAX_N 20
#define EMPTY_VALUE -1

int memo[MAX_N + 1];

int f(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    if (memo[n] != EMPTY_VALUE) {
        return memo[n];
    }

    memo[n] = f(n-1) + f(n-2);
    return memo[n];
}

void init() {
    for (int i = 0; i <= MAX_N; i++) {
        memo[i] = EMPTY_VALUE;
    }
}

int main() {
    init();

    cout << f(10) << endl;
}