/*
Problem 16:

Read a string from keyboard and print it in reversed order. You must not use any array to store the characters. Write a recursive solutions to solve this problem.

Input:
helloo
Output:
oolleh
*/

#include <bits/stdc++.h>
using namespace std;

string rev(string str) {
    auto last = str.back();
    string last_str;
    last_str += last;
    str.erase(str.end()-1);
    if (str.size() == 0) return last_str;
    return last_str + rev(str);
}

int main() {
    string str;
    cin >> str;
    cout << rev(str) << "\n";
}