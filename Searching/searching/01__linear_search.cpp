template <typename Tp>
int __linear_search(const vector<Tp> &arr, Tp x)
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
