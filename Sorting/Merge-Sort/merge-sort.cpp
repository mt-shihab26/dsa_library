#include <bits/stdc++.h>
using namespace std;

#define GLOBAL_ARRAY_SIZE 10000005
#define LOCAL_ARRAY_SIZE 100005
#define PI acos(-1.0)
#define EPS 1e-9
#define MOD 1000000007

vector<int> get_randoms(int amount, int first, int last) {
    vector<int> tmp;
    srand(time(0));
    for (int i = 0; i < amount; i++)
        tmp.push_back(first + ((rand() % (last - first + 1))));
    return tmp;
}
template <typename Tp>
void print(const Tp &vc) {
    for (auto &ith : vc)
        cout << ith << " ";
    cout << '\n';
}


// not in place
// takes extra O(n) memory
// slower performance due to memory mang
// fixed expected performance
// stable
void marge_sort(vector<int> &nums, int start, int end) {
    if (start == end) return;
    int mid = start + ((end - start) / 2);

    marge_sort(nums, start, mid);
    marge_sort(nums, mid + 1, end);

    // start to mid, mid+1 to end
    int len = end - start + 1, merged[len];
    int first_half = start, second_half = mid + 1;

    for (int i = 0; i < len; i++) {
        if (first_half > mid) merged[i] = nums[second_half++];
        else if (second_half > end) merged[i] = nums[first_half++];
        else if (nums[first_half] < nums[second_half]) merged[i] = nums[first_half++];
        else merged[i] = nums[second_half++];
    }

    for (int i = 0, j = start; i < len; i++, j++) nums[j] = merged[i];
}


int main(void) {
    vector<int> nums = get_randoms(10, 0, 55);
    print(nums);
    marge_sort(nums, 0, nums.size() - 1);
    print(nums);

    return 0;
}
