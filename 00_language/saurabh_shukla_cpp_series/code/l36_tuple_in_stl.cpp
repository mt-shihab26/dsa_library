#include <iostream>
#include <tuple>
using namespace std;

int main(void) {
    tuple <string, int, int, int> t1;
    t1 = make_tuple("Shihab", 23, 324, 23);

    cout << get<0>(t1) << " ";
    cout << get<1>(t1) << " ";
    cout << get<2>(t1) << " ";
    cout << get<3>(t1) << endl;

    return 0;
}