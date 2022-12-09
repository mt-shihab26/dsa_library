/*
Given array a of N integers. Given Q queries and in each query given a number x, print count of that number in array.

Constraints
1 <= N <= 10^5
1 <= a[i] <= 10^7
1 <= Q <= 10^5
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e7+10;

int hsh[N];

int main(void) {
    int n;
    cin >>n;
    int tmp;
    while (n--) {
        cin >> tmp;
        hsh[tmp]++;
    }

    int q;
    cin >>q;
    while (q--) {
        int x;
        cin >>x;
        cout <<hsh[x] <<endl;
    }
    // O(N) + O(A) = 10^5 = O(N)
}