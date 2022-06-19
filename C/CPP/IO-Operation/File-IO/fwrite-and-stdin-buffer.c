#include <stdio.h>

struct book
{
    int bookid;
    float price;
    char titile[30];
};

int main(void)
{
    struct book b1;
    FILE *fp;
    fp = fopen("myfile_temp.bi", "wb");
    printf("Enter bookid, title and price:\n");

    char c;
    scanf("%d", &b1.bookid);
    // scanf("%c", &c);
    c = getchar(); // get '\n' from stdin buffer
    gets(b1.titile);
    scanf("%f", &b1.price);

    printf("check up\n");
    printf("%c", c);
    printf("check down\n");

    fwrite(&b1, sizeof(b1), 1, fp);

    fclose(fp);
    return 0;
}