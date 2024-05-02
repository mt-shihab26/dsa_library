#include <iostream>
using namespace std;

int main(void) {
    int *p = new int; // request memory
    *p = 5; // store value

    cout << *p << endl; // use value

    delete p; // free up the memory

    // dangling pointers
    p = new int; // reuse for a new address

    // NULL Pointers
    int *ptr = NULL;
    cout << ptr << endl;
    // Output 0

    // cout << *ptr << endl;
    // error - Runtime Error!

    // Dynamically memory allocation for arrays
    int *q = new int[20];

    cout << q << endl;
    cout << &q[0] << endl;

    // Iterating over arrays using pointers
    for (int i = 0; i < 20; i++) {
        cout << p + i << endl;
    }
    for (int i = 0; i < 20; i++) {
        cout << *(p + i) << endl;
    }
    return 0;
}