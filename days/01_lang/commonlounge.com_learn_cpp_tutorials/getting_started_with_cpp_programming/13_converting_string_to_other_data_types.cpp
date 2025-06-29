#include <iostream>
#include <string>
using namespace std;

int main() {
    int a = 304023;
    
    cout << to_string(a).length() << endl;
    // Output 6
    /* inside C++ it's execute like that
           to_string(a).length()
        => to_string(304023).length()
        => "304023".length()
        => 6
    */
    return 0;
}