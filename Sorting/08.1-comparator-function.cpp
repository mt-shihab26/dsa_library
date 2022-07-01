#include <bits/stdc++.h>
using namespace std;

template <typename Tp>
void print(Tp &a)
{
    for (auto &ith : a)
        cout << ith << " ";
    cout << '\n';
}

bool cmp(int a, int b)
{
    if (a < b)
        return true;
    return false;
}

void insertion_sort(vector<int> &arr)
{
    int i, j, n = arr.size();
    for (i = 1; i < n; i++)
    {
        for (j = i - 1; j >= 0; j--)
        {
            if (cmp(arr[j], arr[j + 1]))
            {
                swap(arr[j], arr[j + 1]);
            }
            else
            {
                break;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    insertion_sort(a);

    print(a);
}