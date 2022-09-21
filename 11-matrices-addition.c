#include <stdio.h>
/**
 * main - addition of two metrices
 * Return: always 0
 */
int main(void)
{
	int a[2][3], b[2][3], c[2][3], i, j;

	printf("enter first matrix (2x3): ");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
			scanf("%d", &a[i][j]);
	}

	printf("enter second matrix (2x3): ");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
			scanf("%d", &b[i][j]);
	}

	/** first matrix **/
	printf("\nThe first matrix is:\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d\t", a[i][j]);
		putchar(10);
	}

	printf("\nThe second matrix is:\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d\t", b[i][j]);
		putchar(10);
	}

	/** addtion of matrices **/
	printf("\nThe sum of matrices is:\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			printf("%d\t", c[i][j]);
		}
		putchar(10);
	}


	return (0);
}
