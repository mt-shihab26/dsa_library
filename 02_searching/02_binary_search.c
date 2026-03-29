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

int binary_search_r(int arr[], int len, int low, int hight, int target) {
    if (low > hight)
        return -1;
    int mid = low + ((hight - low) / 2);
    if (arr[mid] == target)
        return mid;
    else if (arr[mid] < target)
        return binary_search_r(arr, len, mid + 1, hight, target);
    return binary_search_r(arr, len, low, mid - 1, target);
}

int binary_search_recursive(int arr[], int len, int target) {
    return binary_search_r(arr, len, 0, len - 1, target);
}

int lower_bound(int arr[], int len, int target) {
    int low = 0, hight = len - 1, ans = len, mid;
    while (low <= hight) {
        mid = low + (hight - low) / 2;
        if (arr[mid] >= target) {
            ans = mid;
            hight = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int upper_bound(int arr[], int len, int target) {
    int low = 0, hight = len - 1, ans = len, mid;
    while (low <= hight) {
        mid = low + (hight - low) / 2;
        if (arr[mid] > target) {
            ans = mid;
            hight = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    int arr[] = {1, 23, 13, 22, 55, 29};

    printf("index of 13: %d\n", binary_search(arr, 6, 13));

    printf("index of 13: %d\n", binary_search_recursive(arr, 6, 13));

    int arr2[] = {10, 20, 30, 30, 30, 40, 50};
    printf("lower bound 30: %d\n", lower_bound(arr2, 7, 30));
    printf("lower bound 40: %d\n", lower_bound(arr2, 7, 40));

    printf("upper bound 30: %d\n", upper_bound(arr2, 7, 30));
    printf("upper bound 40: %d\n", upper_bound(arr2, 7, 40));
}
