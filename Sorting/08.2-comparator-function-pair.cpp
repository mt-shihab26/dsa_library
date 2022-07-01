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
    return a.first == b.first && a.second < b.second;
    // if (a.first == b.first) {
    //     // if (a.second < b.second) {
    //     //     return true;
    //     // } else {
    //     //     return false;
    //     // }
    // }

    return a.first > b.first;
    // if (a.first > b.first) {
    //     return true;
    // } else {
    //     return false;
    // }
}

void insertion_sort(vector<pair<int, int>> &arr)
{
    int i, j, n = arr.size();
    for (i = 1; i < n; i++)
    {
        for (j = i - 1; j >= 0; j--)
        {
            if (cmp(arr[j], arr[j + 1]))
            {
                swap(arr[j], arr[j + 1]);
            }
            else
            {
                break;
            }
        }
    }
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

    insertion_sort(a);

    print(a);
}