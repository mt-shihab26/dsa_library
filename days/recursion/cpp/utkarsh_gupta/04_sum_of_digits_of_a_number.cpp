#include <bits/stdc++.h>
using namespace std;
// VERY IMPORTANT: base case
// otherwise never stop


// TRUST
/*
n = 23145
return: 2 + 3 + 1 + 4
      -> sum_digits(231) + 4

23145 -> 2314 5
2314 -> 231 4
231 -> 23 1
23 -> 2 3
2 -> 0 2
*/

int sum_digits(int n) {
    if (n == 0) {
        return 0;
    }

    int last_digit = n % 10;
    int remaining_part = n / 10;
    cout << remaining_part << " " << last_digit << "\n";
    return sum_digits(remaining_part) + last_digit;
}

int main() {
    cout << sum_digits(12143) << "\n";
}