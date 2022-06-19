void __marge_sort__(vector<int> &a, int s, int e)
{
    if (s == e)
        return;

    int mid = s + ((e - s) / 2);

    __marge_sort__(a, s, mid);
    __marge_sort__(a, mid + 1, e);

    // s to mid, mid+1 to e
    int len = e - s + 1;
    int merged[len];

    int first_half = s, second_half = mid + 1;

    for (int i = 0; i < len; i++)
    {
        if (first_half > mid)
            merged[i] = a[second_half++];
        else if (second_half > e)
            merged[i] = a[first_half++];
        else if (a[first_half] < a[second_half])
            merged[i] = a[first_half++];
        else
            merged[i] = a[second_half++];
    }

    for (int i = 0, j = s; i < len; i++)
    {
        a[j++] = merged[i];
    }
}
