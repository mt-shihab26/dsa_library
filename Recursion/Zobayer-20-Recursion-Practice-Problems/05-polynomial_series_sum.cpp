/*
Problem 5:

Write a recursive solution to evaluate the previous polynomial for any given x and n.
Like, when x=2 and n=5, we have 1 + x + x^2 + ................. + x^n-1 = 31

Input:
2 5
Output:
31
*/

#include <bits/stdc++.h>
using namespace std;

int func(int &x, int n) {
    if (n == 0) {
        return 1;
    }
    return func(x, n-1) + pow(x, n);
}

int main() {
    int x, n;
    cin >> x >> n;
    cout << func(x, n-1) << endl;
}