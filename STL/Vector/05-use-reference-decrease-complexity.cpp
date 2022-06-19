#include <bits/stdc++.h>
using namespace std;

void print_vec(vector<int> &vec) { //now O(1)
    cout <<"Size: " <<vec.size() <<endl;
    for (auto x : vec) {
        cout <<x <<" ";
    }
    vec.push_back(2);
    cout <<"\n";
}

int main(void) {
    vector<int> v;
    v.push_back(7);
    v.push_back(8);


    vector<int> &v2 = v; // O(n)

    v2.push_back(5);

    print_vec(v);
    print_vec(v);
    print_vec(v2);   
}