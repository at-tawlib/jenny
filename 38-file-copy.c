#include <stdio.h>
#include <stdlib.h>

/**
 * copy contents of one file to another file
 * copy abc.txt into destination.txt
 */
int main(void)
{
	FILE *fptr1 = NULL, *fptr2 = NULL;
	char ch;

	fptr1 = fopen("abc.txt", "r");
	if (fptr1 == NULL)
	{
		printf("error");
		exit(1);
	}

	fptr2 = fopen("destination.txt", "w");
	if (fptr2 == NULL)
	{
		printf("no file");
		exit(1);
	}

	while((ch = fgetc(fptr1)) != EOF)
	{
		fputc(ch, fptr2);
	}

	fclose(fptr1);
	fclose(fptr2);

	return (0);
}
