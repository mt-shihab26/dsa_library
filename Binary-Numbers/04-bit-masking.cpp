#include <bits/stdc++.h>
using namespace std;

/*
Given n and k. then given a array of n length.
find all subset of array a that sum is equal to k
*/

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int subset_ct = 1 << n, sum, ans_ct = 0; // 1 * 2 ^ k;

    for (int mask = 0; mask <= subset_ct; mask++)
    {
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            if ((mask >> i) & 1)
                sum += a[i];
        }
        if (sum == k)
            ans_ct++;
    }

    cout << ans_ct << "\n";
}

/*
input:
3 4
1 1 3

expected:
2
*/
