#include <stdio.h>
#include <stdlib.h>

/**
 * read contents of file
 * NB: abc.txt has contents of 3 lines
 */
int main(void)
{
	FILE *fp = NULL;
	char ch;
	char str[50];

	fp = fopen("abc.txt", "r");
	if (fp == NULL)
	{
		printf("error");
		exit(1);
	}

	/** read character */
	ch = fgetc(fp);
	printf("Read single character: %c\n",ch);
	fclose(fp);

	/** read string with fgetc */
	fp = fopen("abc.txt", "r");
	if (fp == NULL)
	{
		printf("error");
		exit(1);
	}
	printf("\nRead whole text with fgetc\n");
	while (!feof(fp))
	{
		ch = fgetc(fp);
		printf("%c", ch);
	}
	fclose(fp);

	/** read string with fgets() */
	fp = fopen("abc.txt", "r");
	if (fp == NULL)
	{
		printf("error");
		exit(1);
	}
	printf("\n\nRead with fgets()\n");
	fgets(str, 45, fp);
	printf("%s\n", str);
	fclose(fp);

	/** read whole file with fgets() */
	fp = fopen("abc.txt", "r");
	if (fp == NULL)
	{
		printf("error");
		exit(1);
	}
	printf("\nRead whole file with fgets()\n");
	while (!feof(fp))
	{
		fgets(str, 45, fp);
		printf("%s", str);
	}


	putchar(10);
	return (0);
}
