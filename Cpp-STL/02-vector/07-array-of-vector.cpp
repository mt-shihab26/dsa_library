#include <bits/stdc++.h>
using namespace std;

void print_vec(vector<int> &v) {
    cout <<"Size: " <<v.size() <<"\n";
    for (int x: v) {
        cout <<x <<" ";
    }
    cout <<"\n";
}

int main(void) {
    int N;
    cin >>N;
    vector<int> v[N];
    for (int i = 0; i < N; i++) {
        int n;
        cin >>n;
        for (int j = 0; j < n; j++) {
            int x;
            cin >>x;
            v[i].push_back(x);
        }
    }
    for (int i = 0; i < N; i++) {
        print_vec(v[i]);
    }
}