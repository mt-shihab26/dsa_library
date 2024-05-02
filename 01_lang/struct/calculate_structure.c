#include <stdio.h>

struct s2 {
    char c1;
    char c2;
    int n;
    char c3;
    char c4;
    double d;

} s_var;

int main(void)
{
    printf("%ld\n", sizeof(s_var));

    return 0;
}