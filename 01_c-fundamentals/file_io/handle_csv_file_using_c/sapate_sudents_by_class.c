#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

int main(void)
{
    // Create Dirctory
    char *name = "students-classes";
    int result = mkdir(name, 0777);
    if (result)
        printf("%s Directory is Created\n", name);
    else
        printf("Unable create the %s Directory\n", name);

    // now
    FILE *fp_csv, *fp_class_1, *fp_class_2, *fp_class_3, *fp_class_4, *fp_class_5, *fp_class_6, *fp_class_7, *fp_class_8, *fp_class_9,  *fp_class_10;

    int i;

    if ((fp_csv = fopen("students.csv", "r")) == NULL) {
        perror("Cann't open students.csv file");
        return 1;
    }

    char line[120];
    int j, len, k, class;

    fscanf(fp_csv," %[^\n]", line);
    
    // open all class file
    fp_class_1 = fopen("students-classes/class-01.csv", "w");
    fp_class_2 = fopen("students-classes/class-02.csv", "w");
    fp_class_3 = fopen("students-classes/class-03.csv", "w");
    fp_class_4 = fopen("students-classes/class-04.csv", "w");
    fp_class_5 = fopen("students-classes/class-05.csv", "w");
    fp_class_6 = fopen("students-classes/class-06.csv", "w");
    fp_class_7 = fopen("students-classes/class-07.csv", "w");
    fp_class_8 = fopen("students-classes/class-08.csv", "w");
    fp_class_9 = fopen("students-classes/class-09.csv", "w");
    fp_class_10 = fopen("students-classes/class-10.csv", "w");
    
    // write the first filed
    fprintf(fp_class_1, "%s\n", line);
    fprintf(fp_class_2, "%s\n", line);
    fprintf(fp_class_3, "%s\n", line);
    fprintf(fp_class_4, "%s\n", line);
    fprintf(fp_class_5, "%s\n", line);
    fprintf(fp_class_6, "%s\n", line);
    fprintf(fp_class_7, "%s\n", line);
    fprintf(fp_class_8, "%s\n", line);
    fprintf(fp_class_9, "%s\n", line);
    fprintf(fp_class_10, "%s\n", line);

    while (!feof(fp_csv)) {
        fscanf(fp_csv," %[^\n]", line);
        len = strlen(line);
        sscanf(line, "%d", &class);
        printf("%d\n", class);
        switch (class){
            case 1:
                fprintf(fp_class_1, "%s\n", line);
                break;
            case 2:
                fprintf(fp_class_2, "%s\n", line);
                break;
            case 3:
                fprintf(fp_class_3, "%s\n", line);
                break;
            case 4:
                fprintf(fp_class_4, "%s\n", line);
                break;
            case 5:
                fprintf(fp_class_5, "%s\n", line);
                break;
            case 6:
                fprintf(fp_class_6, "%s\n", line);
                break;
            case 7:
                fprintf(fp_class_7, "%s\n", line);
                break;
            case 8:
                fprintf(fp_class_8, "%s\n", line);
                break;
            case 9:
                fprintf(fp_class_9, "%s\n", line);
                break;
            case 10:
                fprintf(fp_class_10, "%s\n", line);
                break;
        }     
    }

    fclose(fp_class_1);
    fclose(fp_class_2);
    fclose(fp_class_3);
    fclose(fp_class_4);
    fclose(fp_class_5);
    fclose(fp_class_6);
    fclose(fp_class_7);
    fclose(fp_class_8);
    fclose(fp_class_9);
    fclose(fp_class_10);

    return 0;
}