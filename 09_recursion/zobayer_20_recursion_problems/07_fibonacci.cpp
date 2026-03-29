/*
Problem 7:

Write a recursive program to compute nth fibonacci number. 1st and 2nd fibonacci numbers are 1, 1.

Input:
6
Output:
8
*/

int fib(int n) {
    if (n <= 2) return 1;
    return fib(n-1) + fib(n-2);
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << fib(n) << endl;
}