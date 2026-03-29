#include <bits/stdc++.h>
using namespace std;

// VERY IMPORTANT: base case


// TRUST the function -> Recursive Leap of Faith
/*
print:
hello 1
hello 2
hello 3
hello 4
.
.
.
hello n-1
hello n
*/

void say_hello(int n) {
    if (n == 0) {
        return;
    }
    say_hello(n - 1); // first n - 1 times
    cout << "hello " << n << "\n";
}

int main() {
    say_hello(10); 
}
