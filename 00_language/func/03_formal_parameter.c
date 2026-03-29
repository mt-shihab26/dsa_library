#include <stdio.h>

void test(int value) { // formal parameter scope
    printf("%d\n", value);
}


int main(void) {
    test(100);
}