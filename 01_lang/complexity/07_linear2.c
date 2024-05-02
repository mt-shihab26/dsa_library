#include <stdio.h>

int main()
{
    int i, n;

    scanf("%d", &n);

    int even[n];

    for (i = 0; i < n; i++)
    {
        even[i] = 0;
    }
    for (i = 0; i < n; i += 2)
    {
        even[i] = 1;
    }

    if (even[n])
    {
        printf("%d is even number.\n", n);
    }
    else
    {
        printf("%d is odd number.\n", n);
    }

    // Space Complexity: O(n)

    return 0;
}