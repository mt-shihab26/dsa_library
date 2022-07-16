#include <bits/stdc++.h>
using namespace std;
template <typename tp>
void print(vector<tp> &vc)
{
    for (auto &ith : vc)
        cout << ith << " ";
    cout << '\n';
}

vector<int> prime_factors(int n)
{
    vector<int> rs;
    int root = sqrt(n);
    for (int i = 2; i <= root; i++)
    {
        while (n % i == 0)
        {
            rs.push_back(i);
            n /= i;
        }
        root = sqrt(n);
    }
    if (n > 1)
        rs.push_back(n);
    return rs;
    // O(sqrt(n))
}

void prime_factors_testing(int n)
{
    vector<int> a = prime_factors(n);
    cout << n << ": ";
    print(a);
}

int32_t main()
{
    cout << "Testing prime_factors:"
         << "\n";
    prime_factors_testing(12);
    prime_factors_testing(18);
    prime_factors_testing(25);
    prime_factors_testing(6);
    prime_factors_testing(35);
    cout << "\n";
}