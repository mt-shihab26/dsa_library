#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int n = nums.size();
        int low = 0, high = n - 1, mid;
        while (low <= high)
        {
            mid = low + (high - low) / 2;
            if ((mid == 0 || nums[mid - 1] < nums[mid]) && (mid == n - 1 || nums[mid] > nums[mid + 1]))
            {
                return mid;
            }
            if (mid > 0 && nums[mid - 1] > nums[mid])
            {
                high = mid - 1;
            }
            else if (mid < n - 1 && nums[mid] < nums[mid + 1])
            {
                low = mid + 1;
            }
        }
        return -1;
    }
};

int main()
{
    vector<int> v = {3, 4, 6, 7, 5, 8, 2, 4, 5, 4, 5, 4, 2, 3};
}