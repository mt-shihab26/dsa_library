#include <bits/stdc++.h>
using namespace std;

int binary_search_recursive(const vector<int> &arr, int low, int hight, int tg)
{
    if (low > hight)
        return -1;
    int mid = low + ((hight - low) / 2);
    if (arr[mid] == tg)
        return mid;
    else if (arr[mid] < tg)
        return binary_search_recursive(arr, mid + 1, hight, tg);
    return binary_search_recursive(arr, low, mid - 1, tg);
}

int main()
{
    vector<int> arr = {1, 13, 22, 23, 29, 55};
    cout << binary_search_recursive(arr, 0, arr.size() - 1, 29) << '\n';
}
