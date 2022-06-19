#include <stdio.h>

int linear_search(int A[], int n, int x) {
    int i;

    for (i = 0; i < n; i++) {
        if (A[i] == x) {
            return i;
        }
    }
    i = -1;
    return i;
}

int main() {
    int arr[] = {10, 8, 4, 10, 7, 2, 7, 6, 9, 9};

    int x = 8;

    printf("%d\n", linear_search(arr, 10, x));
}