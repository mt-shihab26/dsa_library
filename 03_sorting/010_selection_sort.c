#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void selection_sort(int ara[], int n) {
    int min_indx, i, j;
    for (i = 0; i < n - 1; i++) {
        min_indx = i;
        for (j = i + 1; j < n; j++) {
            if (ara[j] < ara[min_indx]) {
                min_indx = j;
            }
        }
        swap(&ara[i], &ara[min_indx]);
    }
}

// Selection Sort Recursively
int get_min_indx(int arr[], int i, int n) {
    if (i == n - 1)
        return i;
    int min_indx = get_min_indx(arr, i + 1, n);
    return arr[i] < arr[min_indx] ? i : min_indx;
}
void selection_sort_recursive(int arr[], int i, int n) {
    if (i == n)
        return;
    int min_indx = get_min_indx(arr, i, n);
    swap(&arr[min_indx], &arr[i]);
    selection_sort_recursive(arr, i + 1, n);
}

void sorting(int arr[], int n, int mx) {
    if (n == 0)
        return;
    sorting(arr, n - 1, mx);
    int min_indx = get_min_indx(arr, n - 1, mx);
    swap(&arr[min_indx], &arr[n - 1]);
}
void selection_sort_recursive2(int arr[], int n) { sorting(arr, n, n); }

// Reverse Selection Sort Recursively
int get_max_indx(int arr[], int len, int i) {
    if (i == 0)
        return 0;
    int max_indx = get_max_indx(arr, len, i - 1);
    return (arr[max_indx] > arr[i] ? max_indx : i);
}

void selection_sort_recursive_reverse(int arr[], int len, int i) {
    if (i == 1)
        return;
    int max_indx = get_max_indx(arr, len, i - 1);
    swap(&arr[i - 1], &arr[max_indx]);
    selection_sort_recursive_reverse(arr, len, i - 1);
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Example sort calls
    selection_sort(arr, n);
    selection_sort_recursive(arr, 0, n);
    selection_sort_recursive2(arr, n);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Dynamic input for reverse recursive selection sort
    printf(
        "Enter numbers for reverse recursive sort (end with EOF / Ctrl+D):\n");

    int *arr2 = NULL;
    int size = 0, cap = 10;
    arr2 = malloc(cap * sizeof(int));
    int tmp;

    while (scanf("%d", &tmp) == 1) {
        if (size == cap) {
            cap *= 2;
            arr2 = realloc(arr2, cap * sizeof(int));
        }
        arr2[size++] = tmp;
    }

    selection_sort_recursive_reverse(arr2, size, size);

    printf("Reverse recursively sorted array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    free(arr2);
    return 0;
}
