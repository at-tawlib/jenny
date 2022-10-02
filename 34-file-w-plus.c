#include <stdio.h>
#include <stdlib.h>

/**
 * w+ mode is for writing and reading written files.
 * creates a new file if file does not exist
 * clears contents of old file and writes new contents in it
 */
int main(void)
{
	FILE *fp = NULL;
	char ch;
	char str[30];
	
	fp = fopen("ace.txt", "w+");
	if (fp == NULL)
	{
		printf("error");
		exit(1);
	}

	/** write to file */
	fputs("jenny", fp);

	/** read written file */
	printf("\n...reading file ..\n");
	rewind(fp);
	while (!feof(fp))
	{
		ch = fgetc(fp);
		printf("%c", ch);
	}
	fclose(fp);

	return (0);
}
