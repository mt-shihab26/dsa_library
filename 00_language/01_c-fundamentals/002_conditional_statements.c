#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    // if else statements
    if (number % 2 == 0) {
        printf("The %d is even number\n", number);
    } else if (number % 5 == 0) {
        printf("The %d is divisable by 5\n", number);
    } else {
        printf("The number is also odd and not divisable by 5\n");
    }

    // ----

    int day;

    printf("Enter a day number (Ex: 1, 2, 3, 4, 5, 6, 7): ");
    scanf("%d", &day);

    // switch statement
    switch (number) {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Thuesday\n");
        break;
    default:
        printf("Other day\n");
    }
}
