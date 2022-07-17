#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    int root = sqrt(n + 1);
    if (n % 2 == 0)
        return false;
    for (int i = 3; i <= root; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
    // O(sqrt(n)/2) -> O(sqrt(n))
}

void is_prime_testing(int n)
{
    cout << n << ": " << is_prime(n) << "\n";
}

int32_t main()
{
    cout << "Testing is_Prime: "
         << "\n";
    cout << boolalpha;
    is_prime_testing(15);
    is_prime_testing(1);
    is_prime_testing(-2);
    is_prime_testing(2);
    is_prime_testing(7);
    is_prime_testing(20);
    cout << "\n";
}