/*
Problem 14:
Implement binary search recursively, i.e. given an array of sorted integers, find a query integer from it. Input format: first n, the number of elements. Then n integers. Then, q, number of query, then q integers. Output format: for each of the q integers, print its index (within 0 to n-1) in the array or print 'not found', whichever is appropriate.
Input:
5
1 2 3 4 5
2
3 -5
Output:
2
not found
*/

#include <bits/stdc++.h>
using namespace std;

int binary_search_recursively(vector<int> &a, int item, int low, int high) {
    if (low > high) {
        return -1;
    }

    int mid = low + ((high - low) / 2);

    if (a[mid] == item) {
        return mid;
    } else if (a[mid] < item) {
        return binary_search_recursively(a, item, mid+1, high);
    } else {
        return binary_search_recursively(a, item, low, mid-1);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int q, tmp, indx;
    cin >> q;
    while (q--) {
        cin >> tmp;
        indx = binary_search_recursively(a, tmp, 0, n-1);

        cout << tmp << ": ";
        if (indx == -1) {
            cout << "not found" << "\n";
        } else {
            cout << indx << "\n";
        }
    }
}