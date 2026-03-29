#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    while (n > 0)
    {
        n = n / 2;
    }
}
//    O(1) + O(1) + O(log(n))
// => O(log(n))
