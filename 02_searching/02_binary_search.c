#include <stdio.h>

int binary_search(int arr[], int len, int target) {
    int low = 0, high = len - 1, mid;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid;
        if (arr[mid] > target)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main() {
    int arr[] = {1, 23, 13, 22, 55, 29};

    printf("index of 13: %d\n", binary_search(arr, 6, 13));
}
