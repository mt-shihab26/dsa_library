#include <iostream>
using namespace std;

string joined_str(string first, string last) {
    return first + last;
}

int main() {
    string final = joined_str("Shihab ", "Mahamud");

    cout << final << endl;
}