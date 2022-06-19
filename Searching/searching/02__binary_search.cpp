template <typename Tp>
int __binary_search(const vector<Tp> &arr, Tp tg)
{
    int low = 0, high = arr.size() - 1, mid;

    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (arr[mid] == tg)
        {
            return mid;
        }
        if (arr[mid] > tg)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}
