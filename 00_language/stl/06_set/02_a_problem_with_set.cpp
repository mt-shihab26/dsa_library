/*
Given N strings, print unique strings
in lexiographical order
N <= 10 ^ 5
|S| <= 100000
*/

#include <bits/stdc++.h>
using namespace std;

int main(void) {
    set<string> s;
    int n;
    cin >>n;
    string temp;
    for (int i = 0; i < n; i++) {
        cin >>temp;
        s.insert(temp);
    }
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << (*it) <<endl;
    }
}