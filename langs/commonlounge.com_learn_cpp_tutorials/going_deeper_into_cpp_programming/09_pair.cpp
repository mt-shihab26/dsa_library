#include <iostream>
#include <string>
#include <utility>
using namespace std;

int main(void) {
    pair <string, int> p;

    p.first = "Roger Federer";
    p.second = 37;

    cout << p.first << " - " << p.second << endl;

    return 0;
}