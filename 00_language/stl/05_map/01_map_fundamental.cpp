#include <bits/stdc++.h>
using namespace std;

void print(const map<int, string> &m) {
    cout <<m.size() <<endl;
    for (auto &pr : m) {
        cout <<pr.first <<" " <<pr.second <<endl; 
    }
}

int main(void) {
    map<int, string> m;
    m[1] = "abc"; 
    m[5] = "cdc";
    m[3] = "acd";
    m.insert({4, "afg"});

    // map<int, string>::iterator it;
    // for (it = m.begin(); it != m.end(); it++) {
    //     cout <<(*it).first <<" " <<(*it).second <<endl;
    //     // cout <<it->first <<it->second <<endl;  
    // }
    print(m);
}