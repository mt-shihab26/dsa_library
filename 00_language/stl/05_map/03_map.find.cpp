#include <bits/stdc++.h>
using namespace std;

void print(const map<int, string> &m) {
    cout <<m.size() <<endl;
    for (auto &pr : m) { // n * O(log(n))
        cout <<pr.first <<" " <<pr.second <<endl; 
    }
}

int main(void) {
    map<int, string> m;
    m[1] = "abc";   
    m[5] = "cdc";
    m[3] = "acd";
    m[6] = "a";
    m[5] = "cde";

    auto it = m.find(7); // O(log(n));
    m.erase(3); // O(log(n))
    
    it != m.end() ? m.erase(it) : m.end();

    // if (it == m.end()) {
    //     cout <<"No value" <<"\n";
    // }
    // else {
    //     cout <<it->first <<" " <<it->second <<endl;
    // }
    print(m);

    m.clear();
    print(m);
}