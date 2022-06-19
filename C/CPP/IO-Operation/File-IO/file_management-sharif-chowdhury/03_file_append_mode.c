#include <stdio.h>

int main(void)
{
    FILE *fp;

    fp = fopen("03_file_append_mode.txt", "a");
    fprintf(fp, "\nFile append mode");
    fclose(fp);

    return 0;
}