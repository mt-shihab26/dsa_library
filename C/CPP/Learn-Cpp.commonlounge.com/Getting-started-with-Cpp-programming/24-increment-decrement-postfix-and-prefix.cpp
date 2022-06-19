#include<iostream>
using namespace std;

int main() {
    int x = 5;
    cout << ++x << endl; // Outputs 6
    cout << x << endl;   // Outputs 6
    cout << x++ << endl; // Outputs 6 (value of x after this statement is 7)
    cout << x << endl;   // Outputs 7
    return 0;
    /* 
    What's the difference between x++ (called postfix) and ++x (called prefix)?

    Postfix first uses the value, and then increases it by 1.
    Prefix first increased the value by 1, and then uses the value.
    */
}