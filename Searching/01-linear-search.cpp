#include <bits/stdc++.h>
using namespace std;

int linear_search(const vector<int> &arr, int x)
{
    int len = arr.size();
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 23, 13, 22, 55, 29};
    cout << linear_search(arr, 13) << '\n';
}
