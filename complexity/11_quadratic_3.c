#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; i++)
        {
            printf("%d", a[i]);
        }
    }
}

//    O(1) + O(1) + O(n^2)
// => O(n^2)
