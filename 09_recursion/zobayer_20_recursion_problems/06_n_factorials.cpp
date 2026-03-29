/*
Problem 6:

Write a recursive program to compute n!

Input:
5
Output:
120

*/


#include <bits/stdc++.h>
using namespace std;

long long factorial(int n) {
    if (n == 0)
        return 1;
    return factorial(n-1) * n;
}

int main() {
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    long long facto = factorial(n);
    cout << facto << "\n";
}

/*
Time Complexity
1. Number of Function calls -> n
2. What is complexity of each function -> O(1)

So, Total Complexity: O(n)
*/