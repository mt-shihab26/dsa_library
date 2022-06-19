#include <iostream>
#include <bitset>
#include <vector>
#include <cmath>
#include <utility>
using namespace std;

// sieve
#define mx 100
bitset<mx> mark;
vector<int> primes;
void sieve() {
    primes.push_back(2);
    int i, j;
    int root = sqrt(int(mx));
    for (i = 3; i <= root; i += 2)
        if (mark[i] == false) {
            primes.push_back(i);
            for (j = i*i; j <= mx; j += 2*i)
                mark[j] = true;
        }
    for ( ; i <= mx; i += 2)
        if (mark[i] == false)
            primes.push_back(i);
}

//  Comlexity: N*log(log(N))

// main primes factorization code
vector<pair<int, int>> primes_facto(int num) {
    vector<pair<int, int>> factors;
    int root = sqrt(num);
    for (int i = 0; primes[i] <= root; i++) {
        int ct = 0;
        if (num % primes[i] == 0) {
            while (num % primes[i] == 0) {
                ct++;
                num /= primes[i];
                root = sqrt(num); 
            }
            factors.push_back({primes[i], ct});
        }
    }
    if (num > 1) {
        factors.push_back({num, 1});
    }
    return factors;
}
// end

int main(void) {

    sieve();

    int num;
    while (cin >> num) {
        auto rs = primes_facto(num);
        for (int i = 0; i < rs.size(); i++) {
            cout << rs[i].first;
            if (rs[i].second != 1) 
                cout <<"^" <<rs[i].second;
            if (i != rs.size()-1) 
                cout <<" x ";
        }
        cout << "\n\n";
    }  
}
