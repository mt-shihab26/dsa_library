#include <bits/stdc++.h>
using namespace std;

string reverse(string st, int n)
{
    if (n == 0)
    {
        return "";
    }
    return st[n - 1] + reverse(st, n - 1);
}

int main()
{
    string st;
    cin >> st;

    cout << reverse(st, st.length());
    cout << "\n";
}