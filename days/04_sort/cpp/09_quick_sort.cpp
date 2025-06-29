#include <bits/stdc++.h>
using namespace std;
vector<int> get_randoms(int, int, int);
template <typename Tp>
void print(Tp &);

int partition(vector<int> &a, int low, int high)
{
    int pivot = a[high], i, j;
    for (i = low - 1, j = low; j < high; j++)
    {
        if (a[j] < pivot)
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    i++;
    swap(a[i], a[j]);
    return i;
}

void quick_sort(vector<int> &a, int low, int high)
{
    if (low >= high)
        return;

    int p = partition(a, low, high);

    quick_sort(a, low, p - 1);
    quick_sort(a, p + 1, high);
}

int main()
{
    vector<int> a = get_randoms(10, 1, 20);

    print(a);

    quick_sort(a, 0, a.size() - 1);

    print(a);
}

vector<int> get_randoms(int amount, int first, int last)
{
    vector<int> t;
    srand(time(0));
    for (int i = 0; i < amount; i++)
        t.push_back(first + ((rand() % (last - first + 1))));
    return t;
}
template <typename Tp>
void print(Tp &a)
{
    for (auto &ith : a)
        cout << ith << " ";
    cout << '\n';
}