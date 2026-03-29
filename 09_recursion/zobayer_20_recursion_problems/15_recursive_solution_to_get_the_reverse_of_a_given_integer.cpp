/*
Problem 15:
Write a recursive solution to get the reverse of a given integer. Function must return an int
Input:
123405
Output:
504321
*/

#include <bits/stdc++.h>
using namespace std;

int reversed(int n, int x) {
    if (n == 0) {
        return x;
    }

    x = (x * 10) + (n % 10);

    return reversed(n/10, x);
}

int reversed2(int n) {
    if (n == 0) return 0;
    int value = (n % 10 * pow(10, int(log10(n))) + reversed2(n/10));
    return value;
}
 
int main() {
    int n;
    cin >> n;

    bool is_negative = n < 0;

    if (is_negative) {
        n *= -1;
    }

    int result = reversed2(n);

    if (is_negative) {
        n *= -1;
        result *= -1;
    }

    cout << "The reversed of:\n" << n << " Is " << result << "\n";
}