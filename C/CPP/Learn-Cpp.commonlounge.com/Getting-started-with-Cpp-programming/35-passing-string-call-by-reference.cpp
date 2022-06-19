#include <iostream>
using namespace std;

void modify_string(string &s) {
    s[0] = 'b';
}

void cant_modify_string(string s) {
    s[0] = 'c';
}

int main() {
    string s(10000, 'a'); // s = 'aaaaa.....aaaa' (length 10000)
    cout << s.substr(0, 5) << endl;
    // output - aaaaa
    modify_string(s);
    cout << s.substr(0, 5) << endl;
    // Output - baaaa
    cant_modify_string(s);
    cout << s.substr(0, 5) << endl;
    // Ouput - baaaa
    return 0;
}