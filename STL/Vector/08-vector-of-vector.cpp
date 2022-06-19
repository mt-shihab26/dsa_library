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
    vector<vector<int>> v;
    for (int i = 0; i < N; i++) {
        int n;
        cin >>n;
        vector<int> temp;
        for (int j = 0; j <n; j++) {
            int x;
            cin >>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    v[0].push_back(10);
    for (int i = 0; i < v.size(); i++) {
        print_vec(v[i]);
    }
    cout << v[0][1];
    
}