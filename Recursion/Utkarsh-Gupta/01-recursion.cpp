#include <bits/stdc++.h>
using namespace std;

// VERY IMPORTANT: base case


// TRUST the function
// print "hello" n times
void say_hello(int n) {
    if (n == 0) { // Stopping case or Base case or Initial case
        return;   // STOPPED
    }
    cout << "hello " << n << "\n"; // print onec already
    say_hello(n - 1); // n - 1 more times
}

int main() {
    say_hello(10); 
}
