#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    int tmp;
    while (true)
    {
        if (b == 0)
            return a;
        tmp = a;
        a = b;
        b = tmp % b;
    }
    // O(log n)
}

int lcm(int a, int b)
{
    return a / gcd(a, b) * b;
    // O(1)
}

int32_t main()
{
    
}