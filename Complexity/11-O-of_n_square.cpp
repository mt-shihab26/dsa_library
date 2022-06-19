#include <iostream>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; i++) {
          cout << a[i];
        }
    }
}

//    O(1) + O(1) + O(n^2)
// => O(n^2)
