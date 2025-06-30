#include <stdio.h>
#include <stdlib.h>

void pointer_to_pointer_example() {
    int a = 5;
    int *p = &a;
    printf("value of the pointer: %p\n", p);
    printf("dereference value of p pointer %d\n", *p);

    *p = 10;
    printf("manupulate value of a through p pointer: %d\n", a);
}

void manage_heap_memory() {
    // manage run time memory (heap memory)
    int *arr = (int *)malloc(5 * sizeof(int));

    arr[0] = 10;
    arr[1] = 50;
    arr[2] = 70;
    arr[3] = 90;
    arr[4] = 99;

    printf("0: %d, %d, %p\n", arr[0], *arr, arr);
    printf("1: %d, %d, %p\n", arr[1], *(arr + 1),
           (void *)arr + 1); // pointer arithmetic
    printf("1: %d, %d, %p\n", arr[2], *(arr + 2),
           (void *)arr + 2); // pointer arithmetic
    printf("\n");

    int *ptr = arr;
    for (int i = 0; i < 5; i++) {
        printf("%d: %d, %d, %p\n", i, ptr[i], *(ptr), (void *)ptr);
        ptr++;
    }

    free(arr);
}

void void_pointer() {
    // void pointer
    int x = 32;
    float y = 3.14;

    void *vptr;

    vptr = &x;
    printf("The value of x is: %d\n", *(int *)vptr);

    vptr = &y;
    printf("The value of y is: %lf\n", *(float *)vptr);
}

int main() {
    pointer_to_pointer_example();
    manage_heap_memory();
    void_pointer();
}
