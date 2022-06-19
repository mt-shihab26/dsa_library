/*
Problem 12:
Write a recursive solution to find the second maximum number from a given set of integers.
Input:
5
5 8 7 9 3
Output:
8
*/

#include <bits/stdc++.h>
using namespace std;


vector<int> get_randoms(int amount, int first, int last) {
    vector<int> tmp; srand(time(0)); for (int i = 0; i < amount; i++)
    tmp.push_back(first + ((rand() % (last - first + 1))));return tmp; }
template <typename Tp> void print(Tp arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";cout << '\n'; }
template <typename Tp> void print(const Tp &vc) {
    for (auto &ith : vc) cout << ith << " "; cout << '\n'; }
template <typename Tp, typename Tp2> void print(const map<Tp, Tp2> mp) {
    for (auto &ith : mp) cout << ith.first << ": " << ith.second << "\n";}



int find_second_maximum(vector<int> &a, int i, int &fele, int &sele) {

    if (i == 0) {
        return sele;
    }

    if (sele > a[i-1]) {
        sele = a[i];
    }

    find_second_maximum(a, i-1, fele, sele);

    if (a[i-1] > fele) {
        sele = fele;
        fele = a[i-1];
    } else if (a[i-1] > sele) {
        sele = a[i-1];
    }

    return sele;
}

int main() {
    // int n;
    // cin >> n;
    // vector<int> a(n);
    // for (int i = 0; i < n; i++) {
    //     cin >> a[i];
    // }


    auto a = get_randoms(10, 1, 100);

    int fele, sele;
    fele = sele = a[0];


    int var = find_second_maximum(a, int(a.size()), fele, sele);

    sort(a.begin(), a.end());

    print(a);

    cout << "The second element is: " << var << "\n";

    // int fele, sele;
    // fele = sele = a[0];
    // auto var = find_second_maximum(a, int(a.size()), fele, sele);

    // cout << var << " " << sele << endl;
}