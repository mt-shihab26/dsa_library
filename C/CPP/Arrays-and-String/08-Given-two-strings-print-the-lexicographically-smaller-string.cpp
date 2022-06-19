#include <bits/stdc++.h>
using namespace std;

int main() {
    string st1, st2;
    cin >> st1 >> st2;
    int min_len = min(st1.size(), st2.size());
    for (int i = 0; i < min_len; i++) {
        if (st1[i] > st2[i]) {
            cout << st2;
            break;
        }
        else if (st1[i] < st2[i]) {
            cout << st1;
            break;
        }
    }
}