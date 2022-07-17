#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int a[N];

void merge(int l, int r, int mid)
{
    int l_len = mid - l + 1;
    int r_len = r - mid;

    int l_ara[l_len + 1], r_ara[r_len + 1];
    for (int i = 0; i < l_len; i++)
        l_ara[i] = a[i + l];
    for (int i = 0; i < r_len; i++)
        r_ara[i] = a[i + mid + 1];

    l_ara[l_len] = r_ara[r_len] = INT_MAX;
    int l_indx = 0, r_indx = 0;
    for (int i = l; i <= r; i++)
    {
        if (l_ara[l_indx] <= r_ara[r_indx])
        {
            a[i] = l_ara[l_indx];
            l_indx++;
        }
        else
        {
            a[i] = r_ara[r_indx];
            r_indx++;
        }
    }
}

void merge_sort(int l, int r)
{
    if (l == r)
        return;
    int mid = (l + r) / 2;
    merge_sort(l, mid);
    merge_sort(mid + 1, r);
    merge(l, r, mid);
}

int main()
{
    int n = 4;
    int b[] = {3, 1, 4, 2};
    for (int i = 0; i < n; i++)
    {
        a[i] = b[i];
    }
    merge_sort(0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
