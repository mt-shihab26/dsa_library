#include <stdio.h>

int partition(int A[], int low, int high)
{
    int pivot = low - 1;
    for (int i = low; i <= high - 1; i++)
    {
        if (A[i] < A[high])
        {
            pivot += 1;
            int tmp = A[i];
            A[i] = A[pivot];
            A[pivot] = tmp;
        }
    }
    pivot += 1;
    int tmp = A[pivot];
    A[pivot] = A[high];
    A[high] = tmp;

    return pivot;
}

void quick_sort(int A[], int low, int high)
{
    if (low >= high)
    {
        return;
    }

    int p;
    p = partition(A, low, high);

    quick_sort(A, low, p - 1);
    quick_sort(A, p + 1, high);
}

int main()
{
    int n = 8;
    int A[] = {1, 5, 6, 3, 5, 8, 7, 2, 9};

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    quick_sort(A, 0, n);

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}