/*
  Given array a of N integers. Given Q queries and in each query given a number x, print count of that number in array.

  Constraints
  1 <= N <= 10^5
  1 <= a[i] <= 10^7
  1 <= Q <= 10^5
*/

#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >>n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int q, ct;
    cin >>q;
    int num;
    while (q--) {
        cin >>num;
        ct = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == num) {
                ct++;
            }
        }
        cout <<ct <<endl;
    }
    // O(N) + O(Q*N) = 10^10 = O(N^2)
}