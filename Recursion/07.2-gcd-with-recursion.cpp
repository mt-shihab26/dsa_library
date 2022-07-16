#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    int rem = a % b;
    if (rem == 0)
        return b;
    return gcd(b, rem);
}

int main()
{
    cout << gcd(18, 4) << "\n";
}