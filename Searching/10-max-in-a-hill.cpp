#include <bits/stdc++.h>
using namespace std;

int peakIndexInMountainArray(vector<int> &arr)
{
    int n = arr.size();
    int low = 0, high = n - 1, mid;
    while (low < high)
    {
        mid = low + (high - low) / 2;
        if (arr[mid] > arr[mid + 1])
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}

// https://leetcode.com/problems/peak-index-in-a-mountain-array/
