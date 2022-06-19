#include <bits/stdc++.h>
using namespace std;

void print(const map<string, string> &m) {
    cout <<m.size() <<endl;
    for (auto &pr : m) { // n * O(log(n))
        cout <<pr.first <<" " <<pr.second <<endl; 
    }
}

int main(void) {
    map<string, string> m;

    m["abcd"] = "dcba"; // len_of_key * log(n)
    
    print(m);
}