#include <stdio.h>

int main() {
    int n, result;

    scanf("%d", &n);

    result = n * (n + 1) / 2;

    printf("result = %d\n", result);

    return 0;

    // O(1)
}