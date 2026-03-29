// Topic: constexpr Function in C++11

// Notes:
// 1. Using constexpr specifier it is possible to evaluate the value of a
//    function or variable at compile time.

#include <bits/stdc++.h>
using namespace std;

constexpr int add(int a, int b) {
    return a + b;
}

int main() {
    // Example 2
    int a, b;
    cin >> a >> b;
    cout << add(a, b) << "\n";

    // Example 1
    cout << add(1, 2) << "\n";
    return 0;
}

/*
    It is not necessary that "constexpr" will always be called.
    There are few underlying rules which has to be followed.
    But I just wanted to convey the meaning and the reason to use "constexpr" so I have not included any of the rules.
    And "constexpr" functions can be called at both Compile and Run time.
*/