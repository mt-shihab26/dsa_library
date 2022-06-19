void __bubble_sort__(int a[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                swapped = true;
            }
        if (swapped = false)
            break;
    }
}
