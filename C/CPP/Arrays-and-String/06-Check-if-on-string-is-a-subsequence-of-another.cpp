#include <bits/stdc++.h>
using namespace std;
#define endn '\n'

int main() {
    string main_str, str;
    cin >> main_str >> str;

    int len = str.length();
    int it = 0;
    for (int i = 0; main_str[i] != '\0'; i++) {
        if (str[it] == main_str[i]) {
            it++;
        }
    }
    if (it == len) {
        cout << "YES" << endn;
    }
    else {
        cout << "NO" << endn;
    }
}