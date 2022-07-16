#include <bits/stdc++.h>
using namespace std;

void print(set<string> &s) {
    for (const string &value : s) {
        cout <<value <<endl;
    }
}

int main(void) {
    set<string> s;
    s.insert("abc"); // O(log n)
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("abc");

    // auto it = s.find("abc"); // O(log n);
    // if (it != s.end()) {
    //     s.erase(it);
    // }
    s.erase("bcd"); // O(log n)

    print(s);
}