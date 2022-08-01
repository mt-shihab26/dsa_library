#include <bits/stdc++.h>
using namespace std;

#define endn '\n'

int gcd_recursively(int a, int b)
{
    if (b == 0)
        return a;
    return gcd_recursively(b, a % b);
    // O(log n)
}

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
    return a / __gcd(a, b) * b;
    // O(log n)
}

int main()
{
    cout << gcd(18, 12) << endn;
    cout << gcd(12, 18) << endn;

    cout << gcd_recursively(18, 12) << endn;
    cout << gcd_recursively(12, 18) << endn;

    cout << __gcd(18, 12) << endn;
    cout << __gcd(12, 18) << endn;

    cout << lcm(18, 12) << endn;
    cout << lcm(12, 18) << endn;
}