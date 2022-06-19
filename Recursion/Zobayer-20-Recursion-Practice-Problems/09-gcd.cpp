/*
Problem 9:

Write a recursive function that finds the gcd of two non-negative integers.

Input:
25 8895
Output:
5
*/

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    int rem = a % b;
    if (rem == 0)
        return b;
    return gcd(b, rem);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << "\n";
}