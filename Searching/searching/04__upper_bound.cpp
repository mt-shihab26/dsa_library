template <typename Tp>
int __upper_bound(const vector<Tp> &arr, Tp x)
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
