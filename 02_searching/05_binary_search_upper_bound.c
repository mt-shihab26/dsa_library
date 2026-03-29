#include <stdio.h>

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
    int arr2[] = {10, 20, 30, 30, 30, 40, 50};

    printf("upper bound 30: %d\n", upper_bound(arr2, 7, 30));
    printf("upper bound 40: %d\n", upper_bound(arr2, 7, 40));
}
