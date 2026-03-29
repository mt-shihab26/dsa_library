#include <stdio.h>

enum boolean {
    false, true
};

enum boolean is_even(int x) {
    if (x % 2 == 0)
        return true;
    else 
        return false;
}

int main(void) {
    int num = 7;

    enum boolean res;
    res = is_even(num);
    if (res == true)
        printf("%d is Even number\n", num);
    else 
        printf("%d is Odd number\n", num);
    return 0;
}