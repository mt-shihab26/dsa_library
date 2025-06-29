#include <bits/stdc++.h>
using namespace std;

int binary_search(const vector<int> &arr, int tg)
{
    int low = 0, high = arr.size() - 1, mid;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (arr[mid] == tg)
            return mid;
        if (arr[mid] > tg)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 23, 13, 22, 55, 29};
    cout << binary_search(arr, 13) << '\n';
}
