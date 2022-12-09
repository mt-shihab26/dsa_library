#include <bits/stdc++.h>
using namespace std;
// Macros
typedef long long int lli;
typedef long double ld;
#define endn "\n"
// Functions
// print vector all element in one line
template <typename T> inline void print_vector(vector<T> &vac) {
for (int ele : vac) cout << ele << " "; cout << endn; }


// Solve
void test(void) {
    int n;
    cin >> n;
    int last_digits, digis_sum = 0;
    while (n > 0) {
        last_digits = n % 10;
        n = n / 10;
        // cout << last_digits << endn;
        digis_sum += last_digits;
    }
    cout << digis_sum << endn;

    // Approach
    // 12342 % 10 && 12342 / 10
    // 1234 % 10  && 1234 / 10
    // 123 % 10   && 123 / 10
    // 12 % 10    && 12 / 10
    // 1 % 10     && 1 / 10
}

int main(void) {
    int t;
    cin >> t;
    while (t--) 
        test();
    return 0;
}
// shihab4t
// Date: Monday, June 07, 2021 | 06:24:08 PM (+06)
