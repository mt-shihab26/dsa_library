#include <stdio.h>

typedef struct Student {
    int id;
    char name[20];
} Student;

typedef struct Data {
    int i;
    float f;
    char str[20];
} Data;

int main() {
    Student s1 = {1, "Jhon"};
    Student s2 = {.id = 1, .name = "Jhon"};

    printf("Student 1: ID = %d, Name = %s\n", s1.id, s1.name);
    printf("Student 2: ID = %d, Name = %s\n", s2.id, s2.name);

    printf("--- Union Example ---\n");
    Data data;

    data.i = 10;
    printf("After assigning int: data.i = %d\n", data.i);

    data.f = 3.14;
    printf("After assigning float: data.f = %.2f\n", data.f);
    printf("Value of data.i now (overwritten): %d\n", data.i); // likely garbage

    snprintf(data.str, 20, "Hello");

    printf("After assigning string: data.str = %s\n", data.str);
    printf("Value of data.f now (overwritten): %.2f\n",
           data.f); // likely garbage

    return 0;
}
