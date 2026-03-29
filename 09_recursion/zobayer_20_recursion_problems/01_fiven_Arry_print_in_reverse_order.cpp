/*
Problem 1:

You will be given an array of integers, write a recursive solution to print it in reverse order.

Input:
5
69 87 45 21 47
Output:
47 21 45 87 69
*/

#include <bits/stdc++.h>
using namespace std;

void rec(int *ara, int i) {
    cout << ara[i-1] << " ";
    if (i == 1) return;
    rec(ara, i-1);
    return;
}

int main() {
    int n;
    cin >> n;
    int ara[n];
    for (int i = 0; i < n; i++) {
        cin >> ara[i];
    }
    rec(ara, n);
    cout << "\n";
}