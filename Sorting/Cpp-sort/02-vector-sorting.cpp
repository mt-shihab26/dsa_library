#include <bits/stdc++.h>
using namespace std;

void print(vector<int> a) {
    for (auto & value : a) {
        cout << value << " ";
    }
    cout << "\n";
}

int main(void) {
    vector<int> a = {1, 5, 7, 2, 3, 8, 10};

    print(a);
    sort(a.begin(), a.end());
    print(a);
}