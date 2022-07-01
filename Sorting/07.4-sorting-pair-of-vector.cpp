#include <bits/stdc++.h>
using namespace std;

void print(const vector<pair<int, int>> t)
{
    for (auto &element : t)
    {
        cout << element.first << " " << element.second << "\n";
    }
    cout << "\n";
}

bool cmp(pair<int, int> a, pair<int, int> b)
{
    // if (a.first == b.first) {
    //     return a.second > b.second;
    // }
    return a.first > b.first;
}

int main(void)
{
    vector<pair<int, int>> pv, pv2;
    pv = {{3, 34}, {2, 3}, {4, 53}, {8, 63}, {3, 23}};
    pv2 = {{3, 34}, {2, 3}, {4, 53}, {8, 63}, {3, 23}};
    print(pv);

    sort(pv.begin(), pv.end());
    print(pv);

    sort(pv.begin(), pv.end(), cmp);
    print(pv);
    cout << "\n";

    print(pv2);
    sort(pv2.begin(), pv2.end(), greater<pair<int, int>>());
    print(pv2);
}