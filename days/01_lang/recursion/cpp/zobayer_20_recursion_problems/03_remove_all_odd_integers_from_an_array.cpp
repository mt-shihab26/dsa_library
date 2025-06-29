/*
Problem 3:
Write a recursive program to remove all odd integers from an array. You must not use any extra array or print anything in the function. Just read input, call the recursive function, then print the array in main().
Input:
6
1 54 88 6 55 7
Output:
54 88 6
*/

#include <bits/stdc++.h>
using namespace std;

#define endn '\n'

template <typename Tp> void print(Tp arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";cout << '\n'; }
template <typename Tp> void print(const Tp &vc) {
    for (auto &ith : vc) cout << ith << " "; cout << '\n'; }
template <typename Tp, typename Tp2> void print(const map<Tp, Tp2> mp) {
    for (auto &ith : mp) cout << ith.first << ": " << ith.second << "\n";}

void remove_odds(vector<int> &a, vector<int> &r, int i) {
    if (i == 0) {
        return;
    }
    if (a[i-1] % 2 == 0) {
        r.push_back(a[i-1]);
    }

    remove_odds(a, r, i-1);
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> r;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    remove_odds(a, r, int(a.size()));

    int len = r.size();

    for (int i = 0; i < len; i++) {
        cout << r[i] << " ";
    }
    cout << endn;
}