#include <bits/stdc++.h>
using namespace std;


#define MAX 10000007
bool is_prime[MAX+10];
void sieve() {
    for (int i = 1; i <= MAX; i++) is_prime[i] = true;
    is_prime[1] = false;

    for (int i = 2; i <= MAX; i++) {
        if (is_prime[i] == true) {
            for (int j = i+i; j <= MAX; j += i) {
                is_prime[j] = false;
            }
        }
    }
    // O(n*log(n))
}


#define MAX2 10000007
bool is_not_prime[MAX2+10];
void sieve2() {
    is_not_prime[1] = true;

    for (int i = 4; i <= MAX2; i += 2) is_not_prime[i] = true;
    
    int root = sqrt(MAX2);
    for (int i = 3; i <= root; i += 2) {
        if (is_not_prime[i] == false) {
            for (int j = i*i; j <= MAX2; j += 2*i) {
                is_not_prime[j] = true;
            }
        }
    }
}



#define MAX3 10000001
bool is_not_prime2[MAX3+10];
vector<long long int> primes;
void sieve3(int n) {
    int i, j;
    is_not_prime2[1] = true;

    primes.push_back(2);
    for (i = 4; i <= n; i += 2) is_not_prime2[i] = true;
    
    int root = sqrt(n);
    for (i = 3; i <= n; i += 2) {
        if (is_not_prime2[i] == false) {
            primes.push_back(i);
            if (i <= root) {
                for (j = i*i; j <= n; j += 2*i) {
                    is_not_prime2[j] = true;
                }
            }
        }
    }
    // O(n * log log n)
}



int Prime[300000], nPrime;
// ! if not prime, o if prime
int mark[1000002];
void sieve4(int n) {
    int i, j, limit = sqrt(n * 1.0) + 2;
    // 1 is not prime you also mark 0;
    mark[1] = 1;
    for (i = 4; i <= n; i += 2) {
        mark[i] = 1;
    }

    // 2 is prime
    Prime[nPrime++] = 2;
    // run loop for only odds
    for (i = 3; i <= n; i += 2) {
        // if not primem no need to do "multiple cutting"
        if (!mark[i]) {
            // i is prime
            Prime[nPrime++] = i;
            // if we don't do it. following
            // i * i may overflow
            if (i <= limit) {
                // loop through all odd multiples of i
                // greater than i * i
                for (j = i * i; j <= n; j += i * 2) {
                    // mark j not prime
                    mark[j] = 1;
                }
            }
        }
    }
    // O(n log log n)
}


int main() {
    sieve3(100);

    for (auto ith : primes) {
        cout << ith << " ";
    }
    cout << "\n";
}