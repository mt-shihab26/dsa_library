/*
Problem 2:

Write a recursive function to print an array in the following order.
[0] [n-1]
[1] [n-2]
.........
.........
[(n-1)/2] [n/2]

Input:
5
1 5 7 8 9
Output:
1 9
5 8
7 7
*/

#include <bits/stdc++.h>
using namespace std;

#define endn '\n'

int i = 1;
void func(vector<int> &va, int a, int b, int n) {
    cout << va[a] << " " << va[b] << endn;
    if ((n-1)/2 == a || (n/2) == b) {
        return;
    }
    i++;
    func(va, a+1, n-i, n);
}

int main() {
    int n;
    cin >> n;
    vector<int> va(n);
    for (int i = 0; i < n; i++) {
        cin >> va[i];
    }
    func(va, 0, n-1, n);
}
