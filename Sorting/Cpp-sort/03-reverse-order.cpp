#include <bits/stdc++.h>
using namespace std;

void print(const vector<int> &a) {
    for (auto & value : a) {
        cout << value << " ";
    }
    cout << "\n";
}

bool cmp(int a, int b) {
    return a > b;
}

int main(void) {
    vector<int> v = {1, 2 , 34, 23, 23, 5, 6};
    vector<int> v2 = {1, 2 , 34, 23, 23, 5, 6};
    print(v);

    sort(v.begin(), v.end());
    print(v);

    sort(v.begin(), v.end(), cmp);
    print(v);

    cout << "\n";
    
    print(v2);

    sort(v2.begin(), v2.end(), greater<int>());
    print(v2);

}