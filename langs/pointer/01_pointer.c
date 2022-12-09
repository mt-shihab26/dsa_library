#include <stdio.h>

int main()
{
    int x = 100;

    printf("Value of x is %d\n", x);
    printf("Address of x is %p\n", &x);

    int n = 100;

    int *p;

    p = &n;

    printf("Value of p is %p\n", p);

    printf("*p = %d\n", *p);

    double x2 = 10.428;

    double *p;

    p = &x2;

    printf("%lf\n", *p);
    printf("Address of x: %p\n", p);
    printf("Address of x: %p\n", &x2);

    int x3 = 100;
    int *p;

    p = &x3;

    *p = 20;

    printf("Value of x is %d\n", x3);

    x = 50;

    printf("Value of x is %d\n", x3);
    printf("Value of x is %d\n", *p);

    return 0;
}
