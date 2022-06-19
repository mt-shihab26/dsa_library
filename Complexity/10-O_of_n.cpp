#include <iostream>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
      cout << a[i];
    }
    for (int i = 0; i < n; i++) {
      cout << a[i];
    }
    for (int i = 0; i < n; i++) {
      cout << a[i];
    }
    for (int i = 0; i < n; i++) {
      cout << a[i];
    }
}

//    O(1) + O(1) + O(n) + O(n) + O(n) + O(n) 
// => O(n)
