template <typename T>
void __insertion_sort__(vector<T> &a)
{
    int i, j, n = a.size();
    for (i = 0; i < n; i++)
    {
        j = i - 1;
        while (j >= 0 && a[j] > a[j + 1])
        {
            swap(a[j], a[j + 1]);
            j--;
        }
    }
}