#include <bits/stdc++.h>
using namespace std;

int main(void) {
    vector<int> v = {2, 3, 5, 6, 7};
    for (int i = 0; i < v.size(); i++) {
        cout <<v[i] <<" ";
    }
    cout <<endl;
    
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++) {
        cout << (*it) <<" ";
    }
    cout <<endl;

    for (int value : v) {
        cout << value << " ";
    }
    cout <<endl;

    // Reference
    for (int &value : v) {
        value++;
    }
    for (const int &value : v) {
        cout << value << " ";
    }

}