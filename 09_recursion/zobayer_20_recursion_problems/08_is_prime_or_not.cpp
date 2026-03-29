/*
Problem 8:

Write a recursive program to determine whether a given integer is prime or not.

Input:
49
999983
1
Output:
not prime
prime
not prime
*/

#include <bits/stdc++.h>
using namespace std;

bool is_prime(int &n, int &sqrt_n, int i) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0) return false;
    if (n % i == 0) return false;
    if (sqrt_n <= i) return true;
    return is_prime(n, sqrt_n, i+2);
}

int main() {
    int n;
    while (cin >> n) {
        int sqrt_n = sqrt(n);
        if (is_prime(n, sqrt_n, 3)) cout << "prime" << "\n";
        else cout << "not prime\n";
    }
}