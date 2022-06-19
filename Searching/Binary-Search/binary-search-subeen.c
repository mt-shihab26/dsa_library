#include <stdio.h>

int binary_search(int A[], int n, int x) {
    int left, right, mid;
    left = 0;
    right = n-1;

    while (left <= right) {
        mid = (left + right) / 2;
        if (A[mid] == x) return mid;
        
        if (A[mid] < x) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}

int main(void) {
    int arr[] = {1, 3, 4, 5, 6};
    printf("%d", binary_search(arr, 5, 4));
    return 0;
}