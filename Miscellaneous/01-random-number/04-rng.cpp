#include <bits/stdc++.h>
using namespace std;


class Rng
{
    using lli = long long int;

    const lli a = INT_MAX;
    const lli b = LLONG_MAX;
    const lli m = 1000000007;
    lli state;

public:
    Rng(lli seed)
    {
        this->state = seed;
    }

    lli rand(void)
    {
        state = ((state * a) + b) % m;
        if (state < 0)
            state *= -1;
        return state;
    }
};

int main()
{
    Rng rng(time(NULL));

    for (int i = 0; i < 10; i++)
    {
        cout << rng.rand() % 100 << " ";
    }
    cout << "\n";
}
