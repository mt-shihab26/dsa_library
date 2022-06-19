#include <iostream>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    while (n > 0) {
        n = n / 2;
    }
}
//    O(1) + O(1) + O(log(n))
// => O(log(n))
