#include <stdio.h>

int main() {
    char c;
    scanf("%*[ \t\n]%c", &c);

    printf("%c", c);
}