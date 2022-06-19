#include <bits/stdc++.h>
using namespace std;

int main(void) {
    vector<int> v = {2, 3, 5, 6, 7};
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << (*it) <<" ";
    }
    cout <<endl <<endl;

    vector<pair<int, int>> vp = {{1, 2}, {2, 3}};
    for (auto value : vp) {
        cout << value.first << " " << value.second <<endl;
    }
}