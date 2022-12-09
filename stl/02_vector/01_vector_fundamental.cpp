#include <bits/stdc++.h>
using namespace std;

// Maximum vector Size limit in OJ
// Local vector size is 10^5
// Global vector size is 10^7

void print_vec(vector<int> v) {
    cout <<"Size: " <<v.size() <<endl;
    // v.size() -> O(1);
    for (int i = 0; i < v.size(); i++) {
        cout <<v[i] <<" ";
    }
    cout <<"\n";
}

int main(void) {
    vector<int> v;
    int n;
    cin >>n;
    int x;
    for (int i = 0; i < n; i++) {
        cin >>x;
        print_vec(v);
        v.push_back(x);
        // v.push_back() -> O(1)
    }
    print_vec(v);
}