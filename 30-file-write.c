#include <stdio.h>
#include <stdlib.h>

/**
 * write into a file.
 * first create a pointer, open the file, write into the file then close the file.
 * we can use fprintf(), fputs() and fputc()
 */
int main(void)
{
	FILE *fp = NULL;
	char ch = 'a';
	char str[50];
	int a = 10;

	fp = fopen("abc.txt", "w");

	if (fp == NULL)
	{
		printf("error");
		exit(1);
	}

	/** using fputc */
	fputc(ch, fp);

	printf("enter the string: ");

	/** using fputs */
	scanf("%s", str);
	fputs(str, fp);

	/** using fpritf() */
	fprintf(fp, "\n%d %s %c\n", a, str, ch);

	fclose(fp);

	return (0);
}
