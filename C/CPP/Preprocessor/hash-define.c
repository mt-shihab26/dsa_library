// C program illustrating the use of
// #define

#include <stdio.h>
#define PI 3.14
#define PRODUCT(a, b) a * b

int main() {
    int r = 4;
    float a;

    a = PI * r * r;
    printf("area of circle is %f\n", a);

    printf("product of a and b is %d\n", PRODUCT(3, 4));

    return 0;
}