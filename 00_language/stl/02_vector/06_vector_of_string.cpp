#include <bits/stdc++.h>
using namespace std;

void print_vec(vector<string> &vec) {
    cout <<"Size: " <<vec.size() <<endl;
    for (auto x : vec) {
        cout <<x <<" ";
    }
    cout <<"\n";
}

int main(void) {
    vector<string> v;
    string temp;
    int n;
    cin >>n;
    for (int i = 0; i < n; i++) {
        cin >>temp;
        v.push_back(temp);
    }
    print_vec(v);
}