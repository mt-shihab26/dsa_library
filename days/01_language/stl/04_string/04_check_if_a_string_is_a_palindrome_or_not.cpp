#include <bits/stdc++.h>
using namespace std;

#define endn '\n'

bool is_palindrome(string str) {
    int len = str.length();
    int half_len = len/2;
    for (int i = 0, j = len-1; i < half_len; i++, j--)
        if (str[i] != str[j])
            return false;
    return true;
}

bool is_palindrome_approch_2(string str) {
    for (int i=0, j=str.size()-1; i < j; i++, j--)
        if (str[i] != str[j]) 
            return false;
    return true;
}

int main() {
    string str;
    cin >> str;
    cout << "\""<< str << "\" is ";
    if (is_palindrome_approch_2(str)) {
        cout << "Palindrome";
    }
    else {
        cout << "Not Palindrome";
    }
    cout << endn;
}