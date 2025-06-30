#include <bits/stdc++.h>
using namespace std;
#define endn '\n';

bool is_anagram(const string &str, const string &str2) {
    int len = str.length(), len2 = str2.length();
    if (len != len2) return false;

    map<char, int> mp, mp2;
    for (int i = 0; i < len; i++)
        mp[str[i]]++, mp2[str2[i]]++;
        
    auto it = mp.begin(), mp_end = mp.end(), it2 = mp2.begin();
    while (it != mp_end) {
        if (it->first != it2->first || it->second != it2->second)
            return false;
        it++, it2++;
    }
    return true;
}

int main() {
    string str, str2;
    cin >> str >> str2;
    cout << (is_anagram(str, str2) ? "YES" : "NO") << endn;
}
