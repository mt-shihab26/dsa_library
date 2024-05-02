#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", a[i]);
    }
}

//    O(1) + O(1) + O(n) + O(n) + O(n) + O(n)
// => O(n)
