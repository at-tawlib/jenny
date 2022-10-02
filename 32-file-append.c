#include <stdio.h>
#include <stdlib.h>

/**
 * appending text to file
 */
int main(void)
{
	FILE *fp = NULL;
	char str[50];

	fp = fopen("abc.txt", "a");
	if (fp == NULL)
	{
		printf("error");
		exit(1);
	}

	printf("enter the content you want to append: ");
	gets(str);

	//fputs(str, fp);

	fprintf(fp, "\n%s\n",str);

	printf("\nsuccessfully appended\n");
	fclose(fp);

	return (0);
}
