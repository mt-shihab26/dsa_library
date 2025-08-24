#include <stdio.h>

enum color {
    RED = 4,
    BLUE,
    YELLOW
};

typedef enum color Color;

int main(void) {
    Color c = YELLOW;

    printf("%d\n", YELLOW);

    return 0;
}