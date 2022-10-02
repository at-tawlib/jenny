#include <stdio.h>
#include <stdlib.h>

/**
 * program to count number of lines in a file
 */
int main(void)
{
	FILE *fp = NULL;
	char c;
	int n = 1;

	fp = fopen("abc.txt", "r");
	if (fp == NULL)
	{
		printf("no file");
		exit(1);
	}

	while((c = fgetc(fp)) != EOF)
	{
		if (c == '\n')
			n = n + 1;
	}

	fclose(fp);

	printf("\nlines are: %d\n",n);

	return (0);
}
