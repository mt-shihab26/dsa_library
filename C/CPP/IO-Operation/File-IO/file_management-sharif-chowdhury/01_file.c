#include <stdio.h>

int main(void)
{
    FILE *fp;
    fp = fopen("01_test_file_docs_temp.txt", "w");
    fprintf(fp, "this is a test fie created useing fprintf function\n");
    fclose(fp);

    return 0;
}