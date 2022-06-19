#include <bits/stdc++.h>
using namespace std;

void print_vec(vector<pair<int, int>> var) {
    cout <<"Size : " <<var.size() <<"\n";
    for (int i = 0; i < var.size(); i++) {
        cout <<var[i].first <<" " <<var[i].second <<"\n";
    }
    cout <<"\n";
}

int main(void) {
    // vector<pair<int, int>> v = {{1, 2}, {2, 3}, {4, 5}};
    // print_vec(v);

    vector<pair<int, int>> v2;
    int n;
    cin >>n;
    int x, y, i;
    for (i = 0; i < n; i++) {
        cin >>x >>y;
        v2.push_back({x, y});
    }
    print_vec(v2);
}