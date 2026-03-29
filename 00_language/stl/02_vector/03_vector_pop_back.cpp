#include <bits/stdc++.h>
using namespace std;

void print_vec(vector<int> v) {
    cout <<"Size: " <<v.size() <<endl;
    for (auto x : v) {
        cout <<x <<" ";
    }
    cout <<"\n";
}

int main(void) {
    vector<int> v;
    v.push_back(7);
    v.push_back(8);

    print_vec(v);

    v.pop_back(); // v.pop_back() -> O(1)

    print_vec(v);   
}