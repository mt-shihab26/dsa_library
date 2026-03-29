#include <bits/stdc++.h>
using namespace std;

int power(int a, int b, int mod)
{
    int res = 1;
    while (b)
    {
        if (b & 1)
            res = (1LL * res * a) % mod;
        a = (1LL * a * a) % mod;
        cerr << a << " " << res << "\n";
        b >>= 1;
    }
    return res;
}

/*
    There are n children and k toffees. k < n,
    count the number of ways to distribute
    toffee among n students such that each
    children get 1 toffees only
    -> nCk, % m, m = 10^9 + 7
    -> n < 10^6, k < n < 10^6
    // (n! / ((n-k)! * k!)) % m
*/

int main()
{
    int n = 1e6 + 10;
    const int m = 1e9 + 7;

    vector<int> fac(n);
    fac[0] = 1;
    for (int i = 1; i < n; i++)
        fac[i] = (fac[i - 1] * 1LL * i) % m;

    int q, n, k, ans, den;
    cin >> q;
    while (q--)
    {
        cin >> n >> k;
        int den = (fac[n - k] * 1LL * fac[k]) % m;
        ans = fac[n] * power(den, m - 2, m);
        cout << ans << "\n";
    }
}