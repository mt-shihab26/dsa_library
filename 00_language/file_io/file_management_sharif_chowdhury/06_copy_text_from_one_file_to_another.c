#include <stdio.h>

int main(void)
{
	FILE *fp, *fp1;
	char ch[101];

	fp = fopen("06_in_temp.txt", "w");
	scanf("%s", ch);
	fprintf(fp, "%s", ch);
	fclose(fp);

	fp = fopen("06_in_temp.txt", "r");
	fp1 = fopen("06_out_temp.txt", "w");
	fscanf(fp, "%s", ch);
	fprintf(fp1, "%s", ch);
	fclose(fp);
	fclose(fp1);

}
