#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

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
}