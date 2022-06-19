#include <bits/stdc++.h>
using namespace std;

// Insertion Sort Iterative Implementation
void insertion_sort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = i-1; j >= 0; j--) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
            else {
                break;
            }
        }
    }
}

// Insertion Sort Recursive Implementation
void go_back(int arr[], int i, int item) {
    if (arr[i] <= item || i == -1) {
        arr[i+1] = item;
        return;
    }
    arr[i+1] = arr[i];
    go_back(arr, i-1, item);
}
void insertion_sort_recursive(int arr[], int i, int n) {
    if (i == n) return;
    go_back(arr, i-1, arr[i]);
    insertion_sort_recursive(arr, i+1, n);
}

// Insertion Sort Recursive Implementation another way
void go_back(int arr[], int i, int item) {
    if (arr[i] <= item || i == -1) {
        arr[i+1] = item;
        return;
    }
    arr[i+1] = arr[i];
    go_back(arr, i-1, item);
}
void insertion_sort_recursive2(int arr[], int n) {
    if (n == 0) return;
    insertion_sort_recursive2(arr, n-1);
    go_back(arr, n-2, arr[n-1]);
}


int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    insertion_sort(arr, n);
    insertion_sort_recursive(arr, 0, n);
    insertion_sort_recursive2(arr, n);

    for (int ith : arr) {
        cout << ith << " ";
    }
    cout << "\n";
}