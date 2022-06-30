#include <bits/stdc++.h>
using namespace std;

void selection_sort(int ara[], int n) {
    int min_indx, i, j;
    for (i = 0; i < n-1; i++) {
        min_indx = i;
        for (j = i+1; j < n; j++) {
            if (ara[j] < ara[min_indx]) {
                min_indx = j;
            }
        }
        swap(ara[i], ara[min_indx]);
    }
}

// Selection Sort Recursively
int get_min_indx(int arr[], int i, int n) {
    if (i == n - 1) return i;
    int min_indx = get_min_indx(arr, i + 1, n);
    return arr[i] < arr[min_indx] ? i : min_indx;
}
void selection_sort_recursive(int arr[], int i, int n) {
    if (i == n) return;
    int min_indx = get_min_indx(arr, i, n);
    swap(arr[min_indx], arr[i]);
    selection_sort_recursive(arr, i + 1, n);
}

// Selection Sort Recursively Another Way
int get_min_indx(int arr[], int i, int n) {
    if (i == n - 1) return i;
    int min_indx = get_min_indx(arr, i + 1, n);
    return arr[i] < arr[min_indx] ? i : min_indx;
}
void sorting(int arr[], int n, int mx) {
    if (n == 0) return;
    sorting(arr, n-1, mx);
    int min_indx = get_min_indx(arr, n-1, mx);
    swap(arr[min_indx], arr[n-1]);
}
void selection_sort_recursive2(int arr[], int n) {
    sorting(arr, n, n);
}

// Reverse Selection Sort Recursively
int get_max_indx(vector<int> &arr, int i) {
    if (i == 0) return 0;
    int max_indx = get_max_indx(arr, i-1);
    return (arr[max_indx] > arr[i] ? max_indx : i);
}
void selection_sort_recursive_reverse(vector<int> &arr, int i) {
    if (i == 1) return;
    int max_indx = get_max_indx(arr, i-1);
    swap(arr[i-1], arr[max_indx]);
    selection_sort_recursive_reverse(arr, i-1);
}


int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selection_sort(arr, 5);
    selection_sort_recursive(arr, 0, n);
    selection_sort_recursive2(arr, n);

    for (int ith : arr) {
        cout << ith << " ";
    }
    cout << "\n";



    vector<int> arr2;
    int tmp;
    while (cin >> tmp) {
        arr2.push_back(tmp);
    }
    selection_sort_recursive_reverse(arr2, arr2.size());

    for (int ith : arr) {
        cout << ith << " ";
    }
    cout << "\n";
}

