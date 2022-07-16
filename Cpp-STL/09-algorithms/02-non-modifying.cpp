#include <bits/stdc++.h>
using namespace std;

bool is_positive(int x) {
    return x > 0;
}

int main(void) {
    // any_of()
    vector<int> v = {2, -4, -5};

    cout << boolalpha;
    cout << any_of(v.begin(), v.end(),
        [](int x){return x > 0;}) << "\n";
    
    
    vector<int> v2 = {-2, -4, -5};
    cout << any_of(v2.begin(), v2.end(), 
        [](int x){return x > 0;}) << "\n";
    
    // all_of()
    vector<int> v = {2, 4, 5};

    cout <<boolalpha;
    cout << all_of(v.begin(), v.end(), 
            [](int x){return x > 0;}) << "\n";

    vector<int> v2 = {2, -4, 5};

    cout << all_of(v2.begin(), v2.end(), 
            [](int x){return x > 0;}) << "\n";

    cout << all_of(v2.begin(), v2.end(), is_positive) << "\n";

    // count()
    vector<int> v = {2, 3, 1, 6, 7, 6};

    int ct = count(v.begin(), v.end(), 2);
    cout << ct << " ";
    ct = count(v.begin(), v.end(), 6);
    cout << ct << " ";
    ct = count(v.begin(), v.end(), 8);
    cout << ct << "\n";


    int ara[6] = {2, 3, 1, 6, 7, 6};

    ct = count(ara, ara+6, 2);
    cout << ct << " ";
    ct = count(ara, ara+6, 6);
    cout << ct << " ";
    ct = count(ara, ara+6, 8);
    cout << ct << "\n";

    // find()
    vector<int> v = {2, 3, 1, 6, 7, 6};

    auto it = find(v.begin(), v.end(), 6);
    if (it != v.end()) {
        cout << *it << "\n";
    }
    else {
        cout << "Not found" << "\n";
    }

    int ara[6] = {2, 3, 1, 6, 7, 6};

    int *i = find(ara, ara+6, 6);
    if (i != ara+6) {
        cout << *i << "\n";
    }
    else {
        cout << "Not found" << "\n";
    }

    // none_of
    vector<int> v = {2, -4, -5};

    cout << boolalpha;
    cout << none_of(v.begin(), v.end(),
        [](int x){return x > 0;}) << "\n";
    
    vector<int> v2 = {-2, -4, -5};

    cout << none_of(v2.begin(), v2.end(), 
        [](int x){return x > 0;}) << "\n";

}