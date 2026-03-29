// Find all triplets with zero sum in given array

#include <bits/stdc++.h>
using namespace std;

vector<int> brute_force(vector<int> a) {
    int len = a.size(), i, j, k;
    for (i = 0; i < len; i++) {
        for (j = i+1; j < len; j++) {
            for (k = j+1; k < len; k++) {
                if (a[i]+a[j]+a[k] == 0) {
                    return {i, j, k};
                }
            }
        }
    }
    return {-1, -1, -1};
    // O(n^3)
}


void efficient(vector<int> a) {
    int len = a.size(), i, j, k, sum;
    for (i = 0; i < len; i++) {
        unordered_set<int> s;
        for (j = i+1; j < len; j++) {
            sum = -(a[i]+a[j]);
            if (s.find(sum) != s.end()) {
                cout << sum << " + " << a[i] << " + " << a[j] << "\n";
            }
            else {
                s.insert(a[j]);
            }
        }
    }
    // O(n^2)
}


int main() {
    vector<int> a = {-1, 0, 1, -1, -1 , 2, 0};
    // vector<int> ith = brute_force(a);
    // cout << a[ith[0]] << " + " << a[ith[1]];
    // cout << " + " <<  a[ith[2]] << " == 0\n";
    efficient(a);
}
