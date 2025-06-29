#include <bits/stdc++.h>
using namespace std;

// there Defferince between map and unordered_map
// 1. inbluilt implementation
// 2. Time complexity
// 3. valid keys datatype

void print(unordered_map<int, string> m) {
    cout <<"Size: " <<m.size() <<endl; // O(1)
    for (auto it = m.begin(); it != m.end(); it++) {
        cout << it->first <<" " <<it->second <<endl;
    }
    cout <<"\n";
}

int main(void) {
    unordered_map<int, string> m;
    m[1] = "abc"; // O(1)
    m[5] = "cdc";
    m[3] = "acd";
    m[6] = "a";
    m[5] = "cde";

    auto it = m.find(7); // O(1)
    if (it != m.end()) {
        m.erase(it); // O(1)
    }
    // m.clear(); // O(1)
    if (it == m.end()) {
        cout <<"NO value";
    }
    else {
        cout << it->first <<" " << it->second <<"\n";
    }
    print(m);
}