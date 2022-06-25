#include <bits/stdc++.h>
using namespace std;

int lower_bound(const vector<int> &arr, int x)
{
    int low = 0, hight = arr.size() - 1, ans = arr.size(), mid;
    while (low <= hight)
    {
        mid = low + (hight - low) / 2;
        if (arr[mid] >= x)
        {
            ans = mid;
            hight = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> v = {10, 20, 30, 30, 30, 40, 50};
    cout << lower_bound(v, 20) << '\n';
    cout << lower_bound(v, 25) << '\n';
}