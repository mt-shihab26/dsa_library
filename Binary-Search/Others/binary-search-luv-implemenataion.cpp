#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int to_find;
    cin >> to_find;
    int lo = 0, hi = n-1, mid;
    while (hi - lo > 1) {
        mid = (hi + lo) / 2;
        if (v[mid] < to_find) {
            lo = mid + 1;
        }
        else {
            hi = mid;
        }
    }
    if (v[lo] == to_find) {
        cout << lo << endl;
    }
    else if (v[hi] == to_find) {
        cout << hi << endl;
    }
    else {
        cout << "Not found" << endl;
    }
}