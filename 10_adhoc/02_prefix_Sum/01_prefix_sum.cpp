/*
Given array a of N integers. Give Q queries 
and in cash query given L and R print usm of
array elements from index L to R (L, R included)

Constraints
1 <= N <= 10^5
1 <= a[i] <= 10^9
1 <= A <= 10^5
1 <= L, R <= N
*/
const int N = 1e5+10;
int a[N];

#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >>n;
    for (int i =1; i <= n; i++) {
        cin >>a[i];
    }

    int q, j;
    cin >>q;
    for (int i = 0; i <q; i++) {
        int l, r;
        cin >>l >>r;
        long long int sum = 0;
        for (j = l; j <= r; j++) {
            sum += a[j];
        }
        cout <<sum <<"\n";
    }

    // O(N) + O(N*Q) -> O(N^2)
}

/*
Given array a of N integers. Give Q queries 
and in cash query given L and R print usm of
array elements from index L to R (L, R included)

Constraints
1 <= N <= 10^5
1 <= a[i] <= 10^9
1 <= A <= 10^5
1 <= L, R <= N
*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int prefix_sum[N];

int main(void) {
    int n;
    cin >>n;
    int temp;
    for (int i = 1; i <= n; i++) {
        cin >>temp;
        prefix_sum[i] += prefix_sum[i-1] + temp;
    }
    int q;
    cin >>q;
    int l, r;
    while (q--) {
        cin >>l >>r;
        cout <<(prefix_sum[r] - prefix_sum[l-1]) <<"\n";
    }

    // O(N) + O(Q) = O(Q) or O(N)
}