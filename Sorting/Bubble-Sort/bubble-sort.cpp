#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Optimized Bubble Sort Implementation
void bubble_sort2(int arr[], int n) {
    int i, j;
    bool swapped;
    for (i = 0; i < n-1; i++) {
        swapped = false;
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if (swapped = false) break;
    }
}

// Bubble Sort Recursive Implementation
void bubble_sort_recursive(int arr[], int i, int n) {
    if (i == n - 1)
        return;
    for (int j = 0; j < n - i - 1; j++) {
        if (arr[j] > arr[j + 1]) {
            swap(arr[j], arr[j + 1]);
        }
    }
    bubble_sort_recursive(arr, i + 1, n);
}

// Bubble Sort Recursive Implementation another way
bool sort_n(int arr[], int n) {
    if (n == 1)
        return false;
    bool rt = sort_n(arr, n - 1);
    if (arr[n - 2] > arr[n - 1]) {
        swap(arr[n - 2], arr[n - 1]);
        rt = true;
    }
    return rt;
}
void bubble_sort_recursive2(int arr[], int n) {
    if (sort_n(arr, n) == false)
        return;
    bubble_sort_recursive2(arr, n);
}


int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubble_sort(arr, n);
    bubble_sort2(arr, n);
    bubble_sort_recursive(arr, 0, n);
    bubble_sort_recursive2(arr, n);

    for (int a : arr) {
        cout << a << " ";
    }
    cout << "\n";
}
