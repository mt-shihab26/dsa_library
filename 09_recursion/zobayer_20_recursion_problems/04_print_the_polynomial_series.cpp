/*
Problem 4:

Write a recursive solution to print the polynomial series for any input n:
1 + x + x^2 + ................. + x^n-1

Input:
5
Output:
1 + x + x^2 + x^3 + x^4
*/

#include <bits/stdc++.h>
using namespace std;

void func(int &n, int pt) {
    cout << " + x^" << pt;
    if (n-1 == pt) {
        return;
    }
    func(n, pt+1);
}

int main() {
    int n;
    cin >> n;
    cout << "1 + x";
    func(n, 2);
    cout << "\n";
}