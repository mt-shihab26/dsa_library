#include <stdio.h>

int main(void)
{
	FILE *fp;
	char str[101];

	fp = fopen("05_file_temp.txt", "w");
	fprintf(fp, "File wite and read\n");
	fclose(fp);

	fp = fopen("05_file_temp.txt", "r");
	fscanf(fp, "%[^\n]", str);
	printf("%s\n", str);
	fclose(fp);

	return 0;
}
