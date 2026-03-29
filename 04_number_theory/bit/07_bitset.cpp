// Problem: You are given 1000 sets where each set contains integers from 1 to 1000. Find a pair of sets such that the number of integers that exist in both pairs is maximized. Can you solve it in less than 11 sec?
#include <bits/stdc++.h>
using namespace std;

void solution_for_1_to_30_intergers_limit()
{
    set<int> se[1010];
    int mask[1010], n = 2, i, j, ct, ans;

    se[0] = set<int>({1, 2, 3, 6});
    se[1] = set<int>({1, 3, 5});

    for (int i = 0; i < n; i++)
    {
        mask[i] = 0;
        for (int ith : se[i])
            mask[i] |= 1 << ith;
    }

    ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            ct = __builtin_popcount(mask[i] & mask[j]);
            ans = max(ans, ct);
        }
    }

    // O(n^2)

    cout << ans << "\n";
}

void solution_for_1_to_1000_intergers_limit()
{
    set<int> se[1010];
    bitset<1010> mask[1010];
    int n = 2, i, j, ct, ans;

    // bitset<20> b(11), c("1101");

    // cout << b << "\n";
    // cout << c << "\n";
    // cout << (b & c) << "\n";
    // cout << b[1] << "\n";
    // cout << b.count() << "\n";

    se[0] = set<int>({1, 2, 3, 6});
    se[1] = set<int>({1, 3, 5});

    for (int i = 0; i < n; i++)
    {
        mask[i] = 0;
        for (int ith : se[i])
            mask[i][ith] = 1;
    }

    ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            ct = (mask[i] & mask[j]).count();
            ans = max(ans, ct);
        }
    }

    // O(n^2 * size / 32)

    cout << ans << "\n";
}

int main()
{
    // solution_for_1_to_30_intergers_limit();
    solution_for_1_to_1000_intergers_limit();
}