#include <bits/stdc++.h>
using namespace std;
// VERY IMPORTANT: base case
// otherwise never stop


// TRUST
// return 1 + 2 + 3 + ....... + (n-1) + n
int sum_n(int n) {
    if (n == 1) {
        return 1;
    }

    int left_part = sum_n(n-1);
    return left_part + n;
}

int main() {
    cout << sum_n(10) << endl;
}