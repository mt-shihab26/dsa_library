#include <stdio.h>
#include <stdlib.h>

int main() {
    int len = 5;
    int arr[] = {12, 30, 50, 12, 30};

    for (int i = 0; i < len; i++) {
        printf("%d\n", arr[i]);
    }
    printf("\n");

    // allocate array in heap
    int len2 = 5;
    int *arr2 = malloc(sizeof(int) * len2);

    arr2[0] = 10;
    arr2[1] = 20;
    arr2[2] = 30;
    arr2[3] = 40;
    arr2[4] = 50;

    for (int i = 0; i < len2; i++) {
        printf("%d\n", arr2[i]);
    }

    free(arr2);

    return 0;
}
