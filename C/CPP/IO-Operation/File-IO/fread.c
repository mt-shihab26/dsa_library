#include <stdio.h>

struct book{
    int bookid;
    float price;
    char title[30];
};

int main(void)
{
    struct book b1;
    FILE *fp;
    fp = fopen("myfile_temp.bi", "rb");
    if (fp == NULL) {
        printf("Can't open file\n");
    }

    while (fread(&b1, sizeof(b1), 1, fp) > 0) {
        printf("%d %s %.2f\n", b1.bookid, b1.title, b1.price);
    }   

    fclose(fp);
    return 0;
}