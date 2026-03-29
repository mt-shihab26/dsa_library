/*
Problem 11:

Suppose you are given an array of integers in an arbitrary order. Write a recursive solution to find the maximum element from the array.

Input:
5
7 4 9 6 2
Output:
9
*/

#include <bits/stdc++.h>
using namespace std;

int find_max(int arr[], int i) {
    if (i == 0) return arr[0];
    return max(find_max(arr, i-1), arr[i]);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << find_max(arr, n-1) << endl;
}