#include <stdio.h>
#include <stdlib.h>

int main() {
    // data types
    int age = 23;        // integer
    float height = 5.4;  // floating-point number
    double rating = 9.5; // double precision float
    char grade = 'A';    // character
    void *hello = NULL;  // void // absence of data

    printf("Data Types:\n");
    printf("age = %d, height = %f, rating = %lf, grade = %c, hello = %p\n\n",
           age, height, rating, grade, hello);

    // Operators
    // Arithmetic Operators
    int a = 10, b = 3;
    printf("Arithmetic Operators:\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n\n", a % b); // %% to escape %

    // Relational Operators
    printf("Relational Operators:\n");
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n\n", a <= b);

    // Logical Operators
    int x = 1, y = 0;
    printf("Logical Operators:\n");
    printf("x && y: %d\n", x && y);
    printf("x || y: %d\n", x || y);
    printf("!x: %d\n", !x);
    printf("!y: %d\n\n", !y);

    // Assignment Operators
    int num = 5;
    printf("Assignment Operators:\n");
    printf("num = %d\n", num);
    num += 2;
    printf("num += 2 => %d\n", num);
    num -= 1;
    printf("num -= 1 => %d\n", num);
    num *= 3;
    printf("num *= 3 => %d\n", num);
    num /= 2;
    printf("num /= 2 => %d\n", num);
    num %= 4;
    printf("num %%= 4 => %d\n", num);

    return 0;
}
