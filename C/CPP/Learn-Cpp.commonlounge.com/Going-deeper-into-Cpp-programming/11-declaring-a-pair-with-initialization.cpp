#include <iostream>
#include <string>
#include <utility>
using namespace std;

int main(void) {
    
    pair <int, char> p2(1, 'a');
    pair <int, int> p3(1, 10);
    pair <int, int> p4(p3);

    cout << p2.first << " - " << p2.second << endl;
    cout << p3.first << " - " << p3.second << endl;
    cout << p4.first << " - " << p4.second << endl;

    return 0;
}