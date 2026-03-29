#include <bits/stdc++.h>
using namespace std;

int main(void) {
    map<pair<string, string>, vector<int>> m;
    int n;
    cin >>n;
    for (int i = 0; i < n; i++) {
        string fn, ln;
        int ct;
        cin >>fn >>ln >>ct;
        for (int j = 0; j < ct; j++) {
            int x;
            cin >>x;
            m[{fn, ln}].push_back(x);
        }
    }
    for (auto &element : m) {
        auto &full_name = element.first;
        auto &list = element.second;

        cout << full_name.first <<" " <<full_name.second <<endl;
        cout << list.size() <<endl;
        for (auto &mem : list) {
            cout <<mem <<" ";
        }
        cout <<endl;
    }
}