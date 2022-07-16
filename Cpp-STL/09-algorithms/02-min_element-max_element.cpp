#include <bits/stdc++.h>
using namespace std;
#define endn '\n';

int main()
{
    // min_elements
    vector<int> v = {2, 3, 1, 6, 7, 6};

    int min = *min_element(v.begin(), v.end());
    cout << min << " ";

    min = *min_element(v.begin() + 3, v.end());
    cout << min << endn;

    int ara[6] = {2, 3, 1, 6, 7, 6};

    min = *min_element(ara, ara + 6);
    cout << min << " ";

    min = *min_element(ara + 3, ara + 6);
    cout << min << endn;

    // max_elements
    vector<int> v = {2, 3, 1, 6, 7, 6};

    int max = *max_element(v.begin(), v.end());
    cout << max << " ";

    max = *max_element(v.begin() + 3, v.end());
    cout << max << endn;

    int ara[6] = {2, 3, 1, 6, 7, 6};

    max = *max_element(ara, ara + 6);
    cout << max << " ";

    max = *max_element(ara + 3, ara + 6);
    cout << max << endn;
}