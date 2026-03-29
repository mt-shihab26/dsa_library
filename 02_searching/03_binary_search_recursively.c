#include <stdio.h>

int internal_binary_search(int arr[], int len, int low, int hight, int target) {
    if (low > hight)
        return -1;
    int mid = low + ((hight - low) / 2);
    if (arr[mid] == target)
        return mid;
    else if (arr[mid] < target)
        return internal_binary_search(arr, len, mid + 1, hight, target);
    return internal_binary_search(arr, len, low, mid - 1, target);
}

int binary_search_recursive(int arr[], int len, int target) {
    return internal_binary_search(arr, len, 0, len - 1, target);
}

int main() {
    int arr[] = {1, 23, 13, 22, 55, 29};

    printf("index of 13: %d\n", binary_search_recursive(arr, 6, 13));
}
