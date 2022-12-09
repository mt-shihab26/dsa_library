#include <bits/stdc++.h>
using namespace std;

int gcd_loop(int a, int b)
{
    int rem;
    while (true)
    {
        rem = a % b;
        if (rem == 0)
            return b;
        a = b;
        b = rem;
    }
}

int gcd(int a, int b)
{
    int rem = a % b;
    if (rem == 0)
        return b;
    return gcd(b, rem);
}

int main()
{
    cout << gcd_loop(18, 4) << "\n";
    cout << gcd(18, 4) << "\n";
}