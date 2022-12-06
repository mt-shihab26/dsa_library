// Sort String of Array in Lexicographical Order with C++
#include <bits/stdc++.h>
using namespace std;

void print(vector<string> &a)
{
    for (auto &ith : a)
        cout << ith << "\n";
    cout << '\n';
}

bool cmp(string a, string b)
{
    int len_a = a.size(), len_b = b.size();
    for (int i = 0; i < min(len_a, len_b); i++)
    {
        if (a[i] > b[i])
            return true;
        if (a[i] < b[i])
            return false;
    }
    return len_a > len_b;
}

bool cmp2(string a, string b)
{
    return !cmp(a, b);
}

void insertion_sort(vector<string> &arr)
{
    int i, j, n = arr.size();
    for (i = 0; i < n; i++)
    {
        for (j = i - 1; j >= 0; j--)
        {
            if (cmp(arr[j], arr[j + 1]))
                swap(arr[j], arr[j + 1]);
            else
                break;
        }
    }
}

int main()
{
    vector<string> strs{"ab", "aaab", "aa", "bac", "acb"};

    print(strs);

    insertion_sort(strs);
    // sort(strs.begin(), strs.end(), cmp2);

    print(strs);
}
// by Shihab Mahamud (github.com/shihab4t)
