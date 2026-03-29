#include <bits/stdc++.h>
using namespace std;

void counting_sort(vector<int> &arr, int mx)
{
    int len = arr.size();
    vector<int> cnt(mx, 0);

    for (int i = 0; i < len; i++)
        cnt[arr[i]]++;

    for (int i = 1; i <= mx; i++)
        cnt[i] += cnt[i - 1];

    vector<int> ans(len);
    for (int i = 0; i < len; i++)
    {
        ans[cnt[arr[i]] - 1] = arr[i];
        cnt[arr[i]]--;
    }
    for (int i = 0; i < len; i++)
        arr[i] = ans[i];
    // O(mx + len)
}

int main()
{
    vector<int> arr = {2, 3, 1, 3, 22, 5, 2, 5, 1, 5, 1};

    counting_sort(arr, 102);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}