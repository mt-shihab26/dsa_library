/*
Problem 13:

Implement linear search recursively, i.e. given an array of integers, find a specific value from it.
Input format: first n, the number of elements. Then n integers. Then, q, number of query, then q integers. Output format: for each of the q integers, print its index (within 0 to n-1) in the array or print 'not found', whichever is appropriate.

Input:
5
2 9 4 7 6
2
5 9
Output:
not found
1
*/

#include <bits/stdc++.h>
using namespace std;

int linear_search(int arr[], int vl, int i) {
    if (i == -1) return -1;
    if (arr[i] == vl) return i;
    return linear_search(arr, vl, i-1);
}

int main() {
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int q, vl; cin >> q;
    while (q--) {
        cin >> vl;
        int indx = linear_search(arr, vl, n);
        if (indx == -1) cout << "not found\n";
        else cout << indx << "\n";
    }
}