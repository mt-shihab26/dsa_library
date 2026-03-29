#include <bits/stdc++.h>
using namespace std;

void print_reverse(string &st, int n)
{
    if (n == 0)
    {
        return;
    }
    cout << (st[n - 1]);
    print_reverse(st, n - 1);
}

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

    print_reverse(st, st.length());
    cout << "\n";

    cout << reverse(st, st.length());
    cout << "\n";
}