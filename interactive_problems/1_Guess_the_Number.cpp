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
    int i = 1, j = 1000000;
    while (i != j)
    {
        int mid = (i + j + 1) / 2;
        printf("%d\n", mid);
        fflush(stdout);

        char s[3];
        scanf("%s", s);

        if (strcmp(s, "<") == 0)
            j = mid - 1;
        else
            i = mid;
    }
    printf("! %d\n", i);
    fflush(stdout);
}

int32_t main()
{
    solve();

    return 0;
}

// github.com/p-nerd (Shihab Mahamud)
//