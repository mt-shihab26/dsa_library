#include <iostream>
#include <string>
using namespace std;

int main() {
    string a = "23.34520";
    cout << stof(a) + 1 << endl; // Ouput: 24.34520
    return 0;
}