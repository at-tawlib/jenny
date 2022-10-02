#include <stdio.h>
#include <stdlib.h>

/**
 * fseek() used to move file cursor to a specific position
 * ftell() used to get the position of cursor
 */
int main(void)
{
	FILE *fp = NULL;
	char ch;
	char str[50];

	fp = fopen("ace.txt", "r");
	if (fp == NULL)
	{
		printf("error");
		exit(1);
	}

	/** get cursor position */
	printf("position of cursor: %ld\n", ftell(fp));


	/** get char at 6th position from current position */
	fseek(fp, 8, SEEK_SET);
	ch = fgetc(fp);
	printf("%c\n", ch);

	printf("position of cursor: %ld\n", ftell(fp));

	/** get char backwards 3 byte from current postion */
	fseek(fp, -7, SEEK_CUR);
	ch = fgetc(fp);
	printf("%c\n", ch);

	printf("position of cursor: %ld\n", ftell(fp));

	/** get char from end */
	fseek(fp, -3, SEEK_END);
	ch = fgetc(fp);
	printf("%c\n", ch);

	printf("position of cursor: %ld\n", ftell(fp));

	/** get length of file */
	fseek(fp, 0, SEEK_END);
	printf("Length of file: %ld\n", ftell(fp));

	fclose(fp);

	return (0);
}

