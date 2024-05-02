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

int interact(int l, int r)
{
    cout << "? " << l << gp << r << endl;
    int x;
    cin >> x;
    return x;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << fixed;
    cout << setprecision(10);
    cerr << boolalpha;
    cout << boolalpha;

    int n;
    cin >> n;

    int a = interact(1, 3);
    int b = interact(2, 3);
    int c = interact(1, 2);

    int first = a - b;
    int third = a - c;
    int second = a - (first + third);

    vec<int> num(n);
    num[0] = first;
    num[1] = second;
    num[2] = third;

    for (int i = 3; i < n; i++)
    {
        int next = interact(i, i + 1);
        num[i] = next - num[i - 1];
    }

    cout << "! ";

    for (int e : num)
        cout << e << gp;
    return 0;
}

// github.com/p-nerd (Shihab Mahamud)
// Thursday, April 20, 2023 | 02:36:57 PM (+06)
