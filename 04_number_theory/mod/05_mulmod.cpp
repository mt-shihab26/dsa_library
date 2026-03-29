#include <bits/stdc++.h>
using namespace std;

// Find x \* y mod 10^18 where x <= 10^18 and y <= 10^18.
// Solve it in O(log(min(x, y)))

int mulmod(const int a, const int b, const int mod)
{
    if (b == 1)
        return a % mod;

    int res = mulmod(a, b / 2, mod);

    res = res + res % mod;
    if (b % 2 == 1)
        res = (res + a) % mod;

    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int result = mulmod(3, 4, 1e9 + 7);

    cout << result << "\n";

    return 0;
}
