#include <bits/stdc++.h>
using namespace std;


int binary_search(const vector<int> A, int tg) {
    int low = 0, high = A.size() - 1, mid;

    while (low <= high) {
        mid = low + (high - low) / 2;
        if (A[mid] == tg) {
            return mid;
        }
        if (A[mid] > tg) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return -1;
}


int main() {
    vector<int> a = {1, 2, 3, 5, 6, 8, 9, 10};
    cout << binary_search(a, 3) << endl;
    cout << binary_search(a, 4) << endl;
    cout << binary_search(a, 10) << endl;
}