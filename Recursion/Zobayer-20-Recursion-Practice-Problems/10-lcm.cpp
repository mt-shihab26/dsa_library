/*
Problem 10:

Write a recursive solution to compute lcm of two integers. You must not use the formula lcm(a,b) = (a x b) / gcd(a,b); find lcm from scratch...

Input:
23 488
Output:
11224
*/

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    int rem = a % b;
    if (rem == 0)
        return b;
    return gcd(b, rem);
}

int lcm(double a, double b) {
    return a / gcd(a, b) * b;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << lcm(a, b) << "\n";
}