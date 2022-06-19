// Given a number find its all divisors
#include <bits/stdc++.h>
using namespace std;
template <typename tp>
void print(vector<tp> &vc) {
    for (auto &ith : vc)
        cout << ith << " ";
    cout << '\n';}


vector<int> divisors(int n) {
    vector<int> a;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) a.push_back(i);
    }
    return a;
    // O(n)
}


vector<int> divisors2(int n) {
    vector<int> a;
    for (int i = 1; i <= n/2; i++) {
        if (n % i == 0) a.push_back(i);
    }
    a.push_back(n);
    return a;
    // O(n/2) -> O(n)
}


vector<int> divisors3(int n) {
    vector<int> a;
    int root = sqrt(n);
    for (int i = 1; i <= root; i++) {
        if (n % i == 0) {
            a.push_back(i);
            if (n/i != i) a.push_back(n/i);
        }
    }
    return a;
    // O(sqrt(n))
}


void testing(int n) {
    vector<int> a = divisors3(n);
    cout << n << ": ";
    print(a);
}
int main() {
    testing(12);
    testing(18);
    testing(25);
}