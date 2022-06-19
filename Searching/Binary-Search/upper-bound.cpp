#include <bits/stdc++.h>
using namespace std;


int upper_bound(const vector<int> &v, int x) {
    int lw = 0, hi = v.size()-1, ans = v.size(), mid;
    while (lw <= hi) {
        mid = (hi + lw) / 2;
        if (v[mid] > x) {
            ans = mid;
            hi = mid-1;
        }
        else {
            lw = mid+1;
        }
    }
    return ans;
}


void pt(vector<int> &a, int vl) {
    int tmp = upper_bound(a, vl);
    cout << "Upper Bound: " << tmp << " ";
    if (tmp == a.size()) {
        cout << "none" << '\n';
    }
    else {
        cout << a[tmp] << '\n';
    }
}

int main() {

    vector<int> a = {1, 2, 3, 3, 3, 5, 6, 8, 9, 10};

 
    pt(a, 3);

    pt(a, 10);
    pt(a, 11);

    pt(a, 1);
    
}