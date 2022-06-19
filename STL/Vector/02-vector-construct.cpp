#include <bits/stdc++.h>
using namespace std;

void print_vec(vector<int> v) {
    cout <<"Size: " <<v.size() <<endl;
    // v.size() -> O(1);
    for (int i = 0; i < v.size(); i++) {
        cout <<v[i] <<" ";
    }
    cout <<"\n";
}

int main(void) {
    vector<int> v(10);
    v.push_back(7);
    print_vec(v);

    vector<int> fill_v(10, 3);
    print_vec(fill_v);
}