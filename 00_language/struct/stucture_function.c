#include <stdio.h>

typedef struct
{
    int a, b, c;
} str_type;

void fun(str_type *v)
{
    v->a = 100;
    v->b = 230;
    v->c = 25334;
}

int main(void)
{
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    str_type var;

    fun(&var);

    printf("%d %d %d", var.a, var.b, var.c);

    return 0;
}