#include <bits/stdc++.h>
using namespace std;

int main() {
    char str[] = "hello World";
    int len = strlen(str);
    for (int i = len-1; i >= 0; i--) {
        cout << str[i];
    }
    cout << "\n";
}