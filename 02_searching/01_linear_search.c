#include <stdio.h>

int linear_search(int arr[], int len, int x) {
    for (int i = 0; i < len; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 23, 13, 22, 55, 29};

    printf("index of 13: %d\n", linear_search(arr, 6, 13));
}
