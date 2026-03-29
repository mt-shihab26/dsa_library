#include <bits/stdc++.h>
using namespace std;

template <typename tp>
ostream &operator<<(ostream &ostream, const vector<tp> &v)
{
    int len = v.size();
    for (int i = 0; i < len; i++)
        cout << v[i] << " ";
    return ostream;
}

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

vector<int> operation(vector<int> a, vector<int> b, int (*func)(int, int))
{
    vector<int> res;
    int len = min(a.size(), b.size()), i;
    for (i = 0; i < len; i++)
    {
        res.push_back(func(a[i], b[i]));
    }
    for (; i < a.size(); i++)
    {
        res.push_back(a[i]);
    }
    for (; i < b.size(); i++)
    {
        res.push_back(b[i]);
    }
    return res;
}

int main()
{
    auto fpointer = add;
    cout << fpointer(2, 3) << " ";

    auto fpointer2 = &add;
    cout << fpointer2(2, 3) << " ";

    int (*fpointer3)(int, int);
    fpointer3 = add;
    cout << fpointer3(2, 3) << " ";

    int (*fpointer4)(int, int) = add;
    cout << fpointer4(2, 3) << "\n";

    vector<int> a = {1, 2, 3, 4, 5, 6};
    vector<int> b = {6, 5, 4, 3, 2};

    vector<int> res = operation(a, b, add);
    cout << res << "\n";

    vector<int> res2 = operation(a, b, sub);
    cout << res2 << "\n";

    vector<int> res3 = operation(a, b, [](int a, int b)
                                 { return a * b; });
    cout << res3 << "\n";

    typedef int (*fptype)(int, int);
    fptype fpointer5 = sub;
    cout << fpointer5(3, 1) << "\n";
}