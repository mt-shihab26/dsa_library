#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> x, pair<int, int> y)
{
    if (x.first == y.first)
    {
        return x.second > y.second; // x.second >= y.second is not correct
    }
    return x.first < y.first;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<pair<int, int>> a({{1, 3}, {4, 5}, {1, 2}});
    sort(a.begin(), a.end(), cmp);
    for (auto [x, y] : a)
    {
        cout << x << ' ' << y << '\n';
    }
    return 0;
}