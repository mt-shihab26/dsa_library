#include <stdio.h>

int main(void)
{
    FILE *fp;

    fp = fopen("02_file_write_temp.txt", "w");
    fprintf(fp, "File writing mode");
    fclose(fp);

    return 0;
}