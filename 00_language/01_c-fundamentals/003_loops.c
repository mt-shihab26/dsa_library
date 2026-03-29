#include <stdio.h>

int main() {
    int i = 0;

    while (i <= 10) {
        printf("index: %d\n", i);
        i++;
        if (i == 5) {
            continue;
        }
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break;
        }
        printf("index: %d\n", i);
    }
    printf("\n");

    int j = 0;
    do {
        printf("index: %d\n", j);
        j++;
    } while (j < 10);

    return 0;
}
