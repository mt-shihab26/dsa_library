#include <bits/stdc++.h>
using namespace std;
template <typename tp>
void print(vector<tp> &vc)
{
    for (auto &ith : vc)
        cout << ith << " ";
    cout << '\n';
}

vector<int> divisors(int n)
{
    vector<int> a;
    int root = sqrt(n);
    for (int i = 1; i <= root; i++)
    {
        if (n % i == 0)
        {
            a.push_back(i);
            if (n / i != i)
                a.push_back(n / i);
        }
    }
    return a;
    // O(sqrt(n))
}

void divisors_testing(int n)
{
    vector<int> a = divisors(n);
    cout << n << ": ";
    print(a);
}

int32_t main()
{
    cout << "Testing Divisors:"
         << "\n";
    divisors_testing(12);
    divisors_testing(18);
    divisors_testing(25);
    cout << "\n";
}