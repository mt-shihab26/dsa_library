// Bigmod
// Given 3 integers x,p,m
// Calculate x^p % m

// Hint
// 7^8 = 7^4 * 7^4
// 5^57 = 5^28 * 5^28 * 5

#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

int power_recursive(int a, int b)
{
    if (b == 1)
        return a % mod;

    int res = power_recursive(a, b / 2);

    res = (1LL * res * res) % mod;
    if (b % 2 == 1)
        res = (1LL * res * a) % mod;

    return res;
    // O(log(p))
}

int power_iterative(int a, int b)
{
    int res = 1;
    while (b)
    {
        if (b & 1)
            res = (1LL * res * a) % mod;
        a = (1LL * a * a) % mod;
        cerr << a << " " << res << "\n";
        // b /= 2;
        b >>= 1;

        // 6 / 2
        // 6 >> 1
        // // 0110
        // // 0011 -> 3
    }

    return res;

    /*
        10 -> 001010
        0 -> x = 2,   res = 1
        1 -> x = 4,   res = 4
        0 -> x = 16,  res = 4
        1 -> x = 256, res = 1024

        3^13 -> 3^(001101)2
        1 -> x = 3,   res = 1
        0 -> x = 3^2, res = 1
        1 -> x = 3^4, res = 3^4
        1 -> x = 3^8, res = 3^12
    */

    /*
        p -> 10 -> 2 * 2, 1
        p -> 5  -> 4 * 4, 4
        p -> 2  -> 16 * 16, 4
        p -> 1  -> 256 * 256, 1024
    */
}

int power_bin(int a, int b)
{
    int res = 1;
    for (int i = 0; i <= 30; i++)
    {
        if ((b >> i) & 1)
            res = 1LL * res * a % mod;
        a = 1LL * a * a % mod;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a = 3, b = 1e9;

    cout << power_recursive(a, b) << "\n";
    cout << power_iterative(a, b) << "\n";
    cout << power_bin(a, b) << "\n";
}
