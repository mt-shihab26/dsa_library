/*
Given T test cases and in each test case a number N.
print its factorial
for each test case % m;
where = M = 10^9+7;

Constranints
1 <= T <= 10^5
1 <= N <= 10^5
*/

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
const int M = 1e9+7;

long long fact[N];

void pre_compute_fact() {
    fact[0] = fact[1] = 1;
    for (int i = 2; i < N; i++) {
        fact[i] = fact[i-1] * i;    
    }
} 

int main(void) {
    int t;
    cin >>t;
    while(t--) {
        int n;
        cin >>n;
        cout <<fact[n] <<endl;
    }

    // O[T*N] = 10^10 OLD
    // O[N] + O[T] = 10^5 + 10^5 = 2*10^5 = 2*O[N] = O[N]
    
}