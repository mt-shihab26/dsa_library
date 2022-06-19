#include <iostream>
#include <string>
#include <utility>
using namespace std;

int main(void) {
    pair <string, int> p;

    p = make_pair("Roger Federer", 37);

    cout << p.first << " - " << p.second << endl;

    return 0;
}