#include <bits/stdc++.h>
using namespace std;

int main()
{
    // check k th bit on/off
    int n = 11;
    int k = 3;

    if (n & (1 << k))
        cout << k << " th bit is On (index started at 0)\n";
    else
        cout << k << " th bit is Off (index started at 0)\n";

    //   0 0 0 0 1 0 1 1
    // & 0 0 0 0 1 0 0 0
    // -----------------
    //   0 0 0 0 1 0 0 0

    // check k th bit on/off better way
    if ((n >> k) & 1)
        cout << k << " th bit is On (index started at 0)\n";
    else
        cout << k << " th bit is Off (index started at 0)\n";

    //   0 0 0 0 1 0 1 1
    //              >> 3
    // -----------------
    //   0 0 0 0 0 0 0 1
    // & 0 0 0 0 0 0 0 1
    // -----------------
    //   0 0 0 0 0 0 0 1

    // set k th bit
    n = 11;
    k = 2;
    cout << (n | (1 << k)) << "\n";

    // unset k th bit
    n = 11;
    k = 3;
    cout << (n ^ (1 << k)) << "\n";

    // unset k th bit another way
    n = 11;
    k = 3;
    cout << (n & (((1 << 30) - 1) - (1 << k))) << "\n";
}