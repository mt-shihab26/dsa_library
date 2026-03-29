#include <stdio.h>

int main()
{
    char str[50];
    int t;

    printf("Enter a string : ");
    gets(str);
    scanf("%d", &t);

    printf("You entered: %s", str);
    printf("%d", t);

    return (0);
}