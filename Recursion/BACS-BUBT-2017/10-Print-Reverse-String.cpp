#include <bits/stdc++.h>
using namespace std;

void reverse(string &st, int n) {
    if (n == 0) {
        return;
    }

    cout << (st[n-1]);

    reverse(st, n-1);
}


int main() {
    string st;
    cin >> st;

    reverse(st, st.length());
    cout << "\n";
}