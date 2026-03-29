#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> values = {3, 5, 1, 4, 2};

    sort(values.begin(), values.end(), greater<int>());

    for (int value : values)
    {
        cout << value << " ";
    }

    cout << "\n";
}