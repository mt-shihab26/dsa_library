// Bigmod
// Given 3 integers A,B,M
// Calculate A^B % M

// Hint
// 7^8 = 7^4 * 7^4
// 5^57 = 5^28 * 5^28 * 5

#include <bits/stdc++.h>
using namespace std;

#define int32 int
#define int64 long long int

int64 bigmod(int64 a, int64 b, int64 m)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a % m;

    int64 res = bigmod(a, b / 2, m);
    res = (res * res) % m;

    if (b % 2 == 1)
        res = (res * (a % m)) % m;

    return res;
}

int main()
{
    int64 a, b, m;
    cin >> a >> b >> m;

    int64 res = bigmod(a, b, m);
    cout << res << "\n";
}