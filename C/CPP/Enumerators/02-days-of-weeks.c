#include <stdio.h>

enum days_of_week {
    Sat, Sun, Mon, Tue, Wed, Thu, Fri
};

int main(void) {
    enum days_of_week day1, day2, day3;

    day1 = Sat;
    printf("Day1: %d\n", day1);
    day2 = Mon;
    printf("Day2: %d\n", day2);
    day3 = Fri;    
    printf("Day3: %d\n", day3);

    int dif = day3 - day2;
    printf("Dif: %d\n", dif);

    return 0;
}