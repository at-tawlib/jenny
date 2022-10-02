#include <stdio.h>
#include <stdlib.h>

/**
 * r+ mode is used to read and modify file
 * when file is not available, program exists (does not create new file)
 */
int main(void)
{
	FILE *fp = NULL;
	
	fp = fopen("abc.txt", "r+");
	if (fp == NULL)
	{
		printf("error");
		exit(1);
	}

	/** insert at beggining of file */
	fputs("jenny", fp);
	fputc('z', fp);
	fclose(fp);

	return (0);
}
