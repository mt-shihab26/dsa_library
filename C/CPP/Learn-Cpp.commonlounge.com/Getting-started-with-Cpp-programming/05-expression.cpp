#include <iostream>
using namespace std;

int main() {
    cout << (5 + 2) * (7 - 1) / 3 << endl;
    /*
        inside c++ it's happen
           (5 + 2) * (7 - 1) / 3
        => (7) * (7 - 1) / 3
        => 7 * (7 - 1) / 3
        => 7 * (6) / 3
        => 7 * 6 / 3
        => 42 / 3
        => 14
    */
    return 0;
}