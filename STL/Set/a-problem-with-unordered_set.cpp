/*
Given N strings and Q queries
In each query you are given a string prit
yes if string is present
else print no.

N <= 10^6
|S| <= 100
Q <= 10^6
*/

#include <bits/stdc++.h>
using namespace std;

int main(void) {
    unordered_set<string> value;
    int n;
    cin >>n;
    string temp;
    for (int i = 0; i < n; i++) {
        cin >>temp;
        value.insert(temp);
    }

    int q;
    cin >>q;

    while (q--) {
        cin >>temp;
        if (value.find(temp) == value.end()) {
            cout <<"no" <<endl;
        }
        else {
            cout <<"yes" <<endl;
        }
    }
}
