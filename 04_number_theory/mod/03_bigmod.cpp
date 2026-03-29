// Bigmod or Binary Exponentiation

/*
Given 3 integers x,p,m
Calculate x^p % m

Hint
7^8 = 7^4 * 7^4
5^57 = 5^28 * 5^28 * 5
*/

#include <bits/stdc++.h>
using namespace std;

int bigmod_re(int a, int b, int mod)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a % mod;

    int res = bigmod_re(a, b / 2, mod);

    res = (1LL * res * res) % mod;
    if (b % 2 == 1)
        res = (1LL * res * a) % mod;

    return res;
}

int bigmod_it(int a, int b, int mod)
{
    int res = 1;
    while (b)
    {
        if (b & 1)
            res = (1LL * res * a) % mod;
        a = (1LL * a * a) % mod;
        b >>= 1;
    }
    return res;
}

int bigmod_bn(int a, int b, int mod)
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

// O(log(p))

// b /= 2;

// 6 / 2
// 6 >> 1
// // 0110
// // 0011 -> 3
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

int main()
{
    int a = 3, b = 0, mod = 1e9 + 7;

    cout << bigmod_re(a, b, mod) << "\n";
    cout << bigmod_it(a, b, mod) << "\n";
    cout << bigmod_bn(a, b, mod) << "\n";
}
