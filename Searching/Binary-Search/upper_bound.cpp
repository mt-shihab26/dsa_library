#include <bits/stdc++.h>
using namespace std;

int main(void) {
    vector<int> v = { 10, 20, 30, 30, 30, 40, 50};
    
    auto it = upper_bound(v.begin(), v.end(), 20);
    cout << *it << "\n";

    it = upper_bound(v.begin(), v.end(), 25);
    cout << *it << "\n";

    it = upper_bound(v.begin(), v.end(), 30);
    cout << *it << "\n";

    it = upper_bound(v.begin(), v.end(), 50);
    if (it == v.end())
        cout << "Not found" << "\n";
    else 
        cout << *it << "\n";

    it = upper_bound(v.begin(), v.end(), 55);
    if (it == v.end())
        cout << "Not found" << "\n";
    else 
        cout << *it << "\n";
}