/*
Problem 17:

Write a recursive program that determines whether a given sentence is palindromic or not just considering the alpha-numeric characters ('a'-'z'), ('A'-'Z'), ('0'-'9').

Input:
madam, i'm adam
hulala

Output:
palindromic
not palindromic
*/


#include <bits/stdc++.h>
using namespace std;

bool is_palindromic(string &str, int a, int b) {
    if (a >= b) return true;
    if (str[a] != str[b]) return false;
    return is_palindromic(str, a+1, b-1); 
}

int main() {
    string str, valid_str;
    while (getline(cin, str)) {
        valid_str = "";
        int len = str.length();
        for (int i = 0; i < len; i++) {
            if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >='0' && str[i] <= '9')) {
                valid_str += str[i];
            }
        }
        if (is_palindromic(valid_str, 0, valid_str.size()-1)) cout << "palindromic" << "\n";
        else cout << "not palindromic" << "\n";
    }
}