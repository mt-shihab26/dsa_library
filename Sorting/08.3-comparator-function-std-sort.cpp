#include <bits/stdc++.h>
using namespace std;

void print(vector<pair<int, int>> &a)
{
    for (auto &ith : a)
        cout << ith.first << " " << ith.second << "\n";
    cout << '\n';
}

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
    {
        if (a.second < b.second)
        {
            return false;
        }
        else
        {
            return true;
        }
    }

    if (a.first > b.first)
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool cmp2(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
    {
        return a.second < b.second;
    }
    return a.first > b.first;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }

    sort(a.begin(), a.end(), cmp2);

    print(a);
}

/*
6
4 3
5 5
5 3
25 6
7 9
8 5
*/
