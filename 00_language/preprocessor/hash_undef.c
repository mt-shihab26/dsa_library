// c Program t oillustrate the use
// of #undef in a program
#include <stdio.h>

#define PI 3.14;
#undef PI

int main() {
    int r = 6;
    float a;
    a = PI * r * r;

    printf("area of circle is %f\n", a);

    return 0;
}