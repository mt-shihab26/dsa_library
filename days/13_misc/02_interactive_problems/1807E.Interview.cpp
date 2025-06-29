#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define ll long long int
#define vec vector
#define str string
#define xbe(x) x.begin(), x.end()

template <typename T>
void print(ostream &stream, const vec<T> &v)
{
    for (const auto &e : v)
        stream << e << gp;
    stream << ed;
}

void solve()
{
    int n;
    scanf("%d", &n);
    vec<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);

    int i = 1, j = n;

    while (i < j)
    {
        int mid = i + (j - i) / 2;
        int k = mid - i + 1;
        printf("? %d", k);
        ll calc = 0;
        for (int x = i; x <= mid; x++)
        {
            printf(" %d", x);
            calc += a[x];
        }
        printf("\n");
        fflush(stdout);

        ll w;
        scanf("%lld", &w);
        if (w > calc)
        {
            j = mid;
        }
        else
        {
            i = mid + 1;
        }
    }
    printf("! %d\n", i);
    fflush(stdout);
}

int32_t main()
{
    int t;
    scanf("%d", &t);
    while (t--)
        solve();

    return 0;
}

// github.com/p-nerd (Shihab Mahamud)
//