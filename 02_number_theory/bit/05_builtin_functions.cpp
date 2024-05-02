#include <bits/stdc++.h>
using namespace std;

int _log2(int n)
{
    return 31 - __builtin_clz(n);
    // 0(1)
}

int main()
{
    cout << __builtin_popcount(11) << "\n";
    // 1 0 1 1

    // check is n power of 2
    int n = 16;
    if ((n & (n - 1)) == 0)
    {
        cout << n << " is power 2"
             << "\n";
    }
    /*
        16 -> 1 0 0 0 0
        15 -> 0 1 1 1 1
        ^
        ----------------
              0 0 0 0 0
    */

    // log2(n)
    cout << _log2(9) << "\n";
    cout << _log2(16) << "\n";
}
