// Given a number find it's all prime factors
#include <bits/stdc++.h>
using namespace std;

template <typename tp>
void print(vector<tp> &vc)
{
    for (auto &ith : vc)
        cout << ith << " ";
    cout << '\n';
}

vector<int> prime_factors2(int n)
{
    vector<int> rs;
    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            rs.push_back(i);
            n /= i;
        }
    }
    return rs;
    // O(n)
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

void testing(int n)
{
    vector<int> a = prime_factors2(n);
    cout << n << ": ";
    print(a);
}

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

int main()
{
    testing(12);
    testing(18);
    testing(25);
    testing(6);
    testing(35);

    cout << "Testing prime_factors:"
         << "\n";
    prime_factors_testing(12);
    prime_factors_testing(18);
    prime_factors_testing(25);
    prime_factors_testing(6);
    prime_factors_testing(35);
    cout << "\n";
}