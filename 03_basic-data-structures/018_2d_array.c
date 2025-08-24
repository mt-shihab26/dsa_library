#include <stdio.h>
#include <stdlib.h>

int main() {
    int len_x = 5;
    int len_y = 3;
    int arr[5][3] = {
        {1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}, {13, 14, 15},
    };

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    int len_x2 = 5;
    int len_y2 = 3;

    int **arr2 = malloc(len_x2 * sizeof(int *));
    if (arr2 == NULL) {
        perror("Memory allocation failed");
        return 1;
    }

    for (int i = 0; i < len_x2; i++) {
        arr2[i] = malloc(len_y2 * sizeof(int));
        if (arr2[i] == NULL) {
            perror("Memory allocation failed");
            return 1;
        }
    }

    for (int i = 0; i < len_x2; i++) {
        for (int j = 0; j < len_y2; j++) {
            arr2[i][j] = (i * len_y2) + j + 1;
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < len_x2; i++) {
        free(arr2[i]);
    }
    free(arr2);

    return 0;
}
