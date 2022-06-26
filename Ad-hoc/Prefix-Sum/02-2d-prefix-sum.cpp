/*
Given 2d array a of N*N integers. Given Q 
queries and in each query given a, b, c and d
print sum of square prepresented by (a, b) as
top left point and (c, d) as bottom right point

Constraints
1 <= N <= 10^3
1 <= a[i][j] <= 10^9
1 <= Q <= 10^5
1 <= a, b, c, d <= N
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+10;

int martix[N][N];

int main(void) {
    int n;
    cin >>n;
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            cin >>martix[i][j];
        }
    }

    int q, a, b, c, d;
    cin >>q;
    while (q--) {
        cin >>a >>b >>c >>d;
        long long int sum = 0;
        for (i = a; i <= c; i++) {
            for (j = b; j <= d; j++) {
                sum += martix[i][j];
            }
        }
        cout <<sum <<"\n";
    }

    // O(N^2) + O(Q*N^2) -> O(Q*N^2)  10^5 * 10 ^ 6 = 10 ^ 11

}


/*
Given 2d array a of N*N integers. Given Q 
queries and in each query given a, b, c and d
print sum of square prepresented by (a, b) as
top left point and (c, d) as bottom right point

Constraints
1 <= N <= 10^3
1 <= a[i][j] <= 10^9
1 <= Q <= 10^5
1 <= a, b, c, d <= N
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+10;
long long int prefix_sum[N][N];

int main(void) {
    int n;
    cin >>n;
    int i, j;
    int temp;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            cin >>temp; // 2 , 2
            prefix_sum[i][j] = temp + 
                (prefix_sum[i-1][j] + prefix_sum[i][j-1]) - prefix_sum[i-1][j-1]; 
        }
    }

    int q;
    cin >>q;
    int a, b, c, d;
    while (q--) {
        cin >> a >>b >>c >>d;
        cout <<prefix_sum[c][d] - prefix_sum[a-1][d] - prefix_sum[c][b-1] + prefix_sum[a-1][b-1];
        cout <<"\n";
    }
    // for (i = 1; i <= n; i++) {
    //     for (j = 1; j <= n; j++) {
    //         cout <<prefix_sum[i][j] <<" ";
    //     }
    //     cout <<"\n";
    // }

    // O(Q)

}