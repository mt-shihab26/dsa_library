#include <bits/stdc++.h>
using namespace std;

// int sum(indx, a);
// sum(indx, a) = sum(indx - 1, a) + indx;

int sum(int indx, int a[]) {
    if (indx == 0)
        return a[indx];
    return sum(indx-1, a) + a[indx];
}

int main() {
    int arr[5] = {1, 3, 4, 5, 2};

    int sumation = sum(2, arr);
    cout << sumation << "\n";
}