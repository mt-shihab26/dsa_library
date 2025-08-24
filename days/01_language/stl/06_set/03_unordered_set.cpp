#include <bits/stdc++.h>
using namespace std;

void print(unordered_set<string> &s) {
    for (const string &value : s) {
        cout <<value <<endl;
    }
}

int main(void) {
    unordered_set<string> s;
    s.insert("abc"); // O(1)
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("abc");

    // auto it = s.find("abc"); // O(1);
    // if (it != s.end()) {
    //     s.erase(it);
    // }
    s.erase("bcd"); // O(1)

    print(s);
}