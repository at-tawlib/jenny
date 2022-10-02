#include <stdio.h>
#include <stdlib.h>

/**
 * a+ mode use to open file for reading and appending texts
 */
int main(void)
{
	FILE *fp = NULL;
	char ch;

	fp = fopen("ace.txt", "a+");
	if (fp == NULL)
	{
		printf("no file");
		exit(1);
	}

	/** read file before appending */
	printf("... reading file before appending ..\n\n");
	while (!feof(fp))
	{
		ch =fgetc(fp);
		printf("%c", ch);
	}

	/** appending file */
	printf("\n\n .. appending ... \n");
	fputs("this is awesome", fp);

	/** reading after appending */
	printf("\n\n ... reading after appending...\n");
	rewind(fp);
	while (!feof(fp))
	{
		ch =fgetc(fp);
		printf("%c", ch);
	}
	fclose(fp);

	return (0);
}
