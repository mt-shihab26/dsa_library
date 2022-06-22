#include <bits/stdc++.h>
using namespace std;

int upper_bound(const vector<int> &arr, int x)
{
    int lw = 0, hi = arr.size() - 1, ans = arr.size(), mid;
    while (lw <= hi)
    {
        mid = (hi + lw) / 2;
        if (arr[mid] > x)
        {
            ans = mid;
            hi = mid - 1;
        }
        else
        {
            lw = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> v = {10, 20, 30, 30, 30, 40, 50};
    cout << upper_bound(v, 20) << '\n';
    cout << upper_bound(v, 25) << '\n';
}