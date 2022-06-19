#include <stdio.h>

int main(void)
{
    FILE *fp;
    int number;

    fp = fopen("04_file_read_mode.txt", "w");
    fscanf(fp, "%d", &number);
    printf("%d\n", number);
    fclose(fp);

    return 0;
}
