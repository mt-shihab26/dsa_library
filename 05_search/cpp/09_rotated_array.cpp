#include <bits/stdc++.h>
using namespace std;

int find_min(vector<int> &nums)
{
    int n = nums.size();
    int low = 0, high = n - 1, mid;
    while (low < high)
    {
        mid = low + (high - low) / 2;
        if (nums[mid] > nums[n - 1])
            low = mid + 1;
        else
            high = mid;
    }
    return nums[low];
}

int search_in_rotated_array(vector<int> &nums, int target)
{
    int n = nums.size();
    int low = 0, high = n - 1, mid;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (nums[mid] == target)
            return mid;
        if ((nums[mid] > nums[n - 1] && target > nums[n - 1]) || (nums[mid] <= nums[n - 1] && target <= nums[n - 1]))
        {
            if (nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        else
        {
            if (nums[mid] > nums[n - 1])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return -1;
}