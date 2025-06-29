#include <stdio.h>

int main()
{
	FILE *fp, *fp1;
	char ch[101];
	fp = fopen("07_is_found_temp.txt", "r");
	if (fp == NULL) {
		printf("File not found!\n");
		return 1;
	}
	fp1 = fopen("07_out_temp.txt", "w");

	fscanf(fp, "%s", ch);
	fprintf(fp1, "%s", ch);
	fclose(fp);
	fclose(fp1);

	return 0;
}
