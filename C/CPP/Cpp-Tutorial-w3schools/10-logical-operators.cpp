#include <iostream>
using namespace std;

int main() {
    // and operator
    int x = 5;
    cout <<boolalpha <<(x > 3 && x <10) <<" ";
    cout <<boolalpha <<(x > 3 and x <10) <<"\n";

    // or operator
    int y = 5;
    cout <<boolalpha <<(y > 3 || y < 4) <<" ";
    cout <<boolalpha <<(y > 3 or y < 4) <<"\n";

    // not operator
    int z = 5;
    cout << (!(z > 3 and z < 10)) <<" ";
    cout << (not(z > 3 and z < 10)) <<"\n";

    return 0;
}