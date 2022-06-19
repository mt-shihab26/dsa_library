#include <stdio.h>
#include "support.c"

int count;
// extern void write_extern();

int main(void) {
    count = 5;
    write_extern();
}