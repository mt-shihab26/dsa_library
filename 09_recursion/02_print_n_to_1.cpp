#include <bits/stdc++.h>
using namespace std;

void func(int n)
{
    if (n == 0)
        return;
    cout << n << "\n";
    func(n - 1);
}

int main(void)
{
    func(5);
}