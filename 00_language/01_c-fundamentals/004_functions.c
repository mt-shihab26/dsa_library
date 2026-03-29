#include <stdio.h>

int add(int x, int y) {
    //
    return x + y;
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return factorial(n - 1) * n;
}

int main() {
    printf("Sum of 5 + 8 = %d\n", add(5, 8));
    printf("Factorial of 5: %d\n", factorial(5));
}
