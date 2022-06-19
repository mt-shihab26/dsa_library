#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define intializes_random time_t t; srand((unsigned)time(&t))
#define random(s, e) (rand() % e + s)

int main(void)
{
    FILE *fp_name, *fp_csv;

    char first_name[40], last_name[40];
    // char first_name_a[40], last_name_a[40];

    if ((fp_name = fopen("first-names.txt", "r")) == NULL) {
        perror("Cann't open 'first-names.txt' file\n");
        return 1;
    }
    if ((fp_csv = fopen("students.csv", "w")) == NULL) {
        perror("Cann't open the csv file\n");
        return 1;
    }

    fprintf(fp_csv, "%s,%s,%s\n", "Class", "Roll", "Name");
    intializes_random;
    while (!feof(fp_name)) {
        fprintf(fp_csv, "%d,%d,", random(1, 10), random(1, 500));
        fscanf(fp_name, "%s%s", first_name, last_name);
        // fgets(first_name, 40, fp_name);
        // fgets(last_name, 40, fp_name);
        // strncpy(first_name_a, first_name, (strlen(first_name)-2));
        // strncpy(last_name_a, last_name, (strlen(last_name)-2));

        fprintf(fp_csv, "\"%s %s\"\n", first_name, last_name);
        
    }

    fclose(fp_name);
    fclose(fp_csv);
}