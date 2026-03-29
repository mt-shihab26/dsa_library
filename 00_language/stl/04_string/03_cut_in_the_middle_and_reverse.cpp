#include <bits/stdc++.h>
using namespace std;

#define endn '\n'

string approch_1(string str) {
    int len = str.size();
    int half_len = len / 2;
    for (int i = 0, j = half_len-1; i < half_len/2; i++, j--) {
        swap(str[i], str[j]);
    }
    int k = 1;
    for (int i = half_len, j = len-1; k <= half_len/2; i++, k++, j--) {
        swap(str[i], str[j]);
    }
    return str;
}

string approch_2(string str) {
    int len = str.size();
    int half_len = len/2;
    for (int i = 0, j = half_len-1; i < j; i++, j--) {
        swap(str[i], str[j]);
    }
    for (int i = half_len, j = len-1; i < j; i++, j--) {
        swap(str[i], str[j]);
    }
    return str;
}

int main() {
    string str;
    cin >> str;
    cout << approch_2(str) << endn;
}