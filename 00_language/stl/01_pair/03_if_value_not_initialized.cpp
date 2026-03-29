// C++ program to illustrate
// auto-initializing of pair STL
#include <iostream>
#include <utility>
using namespace std;

int main(void) {
    pair<int, double> p;
    // it is initialized to 0;
    cout <<p.first <<" ";
    // it is initialized to 0
    cout <<p.second <<endl;

    pair <string, char> p2;
    // it prints noting i.e NULL
    cout <<p2.first <<" ";
    // it prints nothing i.e NULL
    cout <<p2.second <<endl;
}