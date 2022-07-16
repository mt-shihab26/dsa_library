#include <bits/stdc++.h>
using namespace std;

void print_vec(vector<int> v) { // O(n)
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

    vector<int> v2 = v; // O(n)

    v2.push_back(5);

    print_vec(v);
    print_vec(v2);
}