#include <stdio.h>

/*
The static modifier may also be applied to global variables. When this is done,
it causes that variable's scope to be restricted to the file in which it is declared.
*/

// Function declaration
void func(void);

static int count = 5; // global variable

int main(void) {
    while (count--) {
        func();
    }

    return 0;
}

// Function defination
void func(void) {
    static int i = 5; // local static variable
    i++;
    printf("i is %d and count is %d\n", i, count);
}