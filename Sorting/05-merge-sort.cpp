#include <bits/stdc++.h>
using namespace std;

#define GLOBAL_ARRAY_SIZE 10000005
#define LOCAL_ARRAY_SIZE 100005
#define PI acos(-1.0)
#define EPS 1e-9
#define MOD 1000000007

vector<int> get_randoms(int amount, int first, int last)
{
    vector<int> tmp;
    srand(time(0));
    for (int i = 0; i < amount; i++)
        tmp.push_back(first + ((rand() % (last - first + 1))));
    return tmp;
}
template <typename Tp>
void print(const Tp &vc)
{
    for (auto &ith : vc)
        cout << ith << " ";
    cout << '\n';
}

// not in place
// takes extra O(n) memory
// slower performance due to memory mang
// fixed expected performance
// stable

void marge_sort(vector<int> &arr, int s, int e)
{
    if (s == e)
        return;

    int mid = s + (e - s) / 2;

    marge_sort(arr, s, mid);
    marge_sort(arr, mid + 1, e);

    // s to mid, mid+1 to e
    int len = e - s + 1;
    int merged[len];

    int first_half = s, second_half = mid + 1;

    for (int i = 0; i < len; i++)
    {
        if (first_half > mid)
            merged[i] = arr[second_half++];
        else if (second_half > e)
            merged[i] = arr[first_half++];
        else if (arr[first_half] < arr[second_half])
            merged[i] = arr[first_half++];
        else
            merged[i] = arr[second_half++];
    }

    for (int i = 0, j = s; i < len; i++, j++)
        arr[j] = merged[i];
}

int main(void)
{
    vector<int> nums = get_randoms(10, 0, 55);
    print(nums);
    marge_sort(nums, 0, nums.size() - 1);
    print(nums);

    return 0;
}
