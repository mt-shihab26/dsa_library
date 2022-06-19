#include <bits/stdc++.h>
using namespace std;

string _to_binary(int x)
{
    string s;
    while (x > 0)
    {
        s += (x % 2 ? '1' : '0');
        x /= 2;
    }
    reverse(s.begin(), s.end());
    return s;
}

string _to_binary2(int x)
{
    string s;
    for (int i = 30; i >= 0; i--)
    {
        if ((x & (1 << i)) != 0)
            s += '1';
        else
            s += '0';
    }
    return s;
}

string _to_binary3(int x)
{
    string s = "";
    for (int i = 30; i >= 0; i--)
    {
        if ((x & (1 << i)) != 0)
            s += '1';
        else if (s.size() >= 1)
            s += '0';
    }
    return s;
}

int32_t main()
{
    cout << "13 = " << _to_binary(13) << "\n";
    cout << "13 = " << _to_binary2(13) << "\n";
    cout << "13 = " << _to_binary3(13) << "\n";
}