#include <stdio.h>
/**
 * main - print transpose of a Matrix
 * Transpose is changing rows into columns and columns into rows
 * Return: always 0
 */
int main(void)
{
	int a[2][3], i, j;

	/** get matrix from stdin **/
	printf("enter matrix: ");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
			scanf("%d", &a[i][j]);
	}

	/** print out the matrix **/
	printf("The matrix you entered is:\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d\t", a[i][j]);
		putchar(10);
	}

	/** print tanspose of matrix **/
	printf("The transpose matrix is: \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
			printf("%d\t", a[j][i]);
		putchar(10);
	}

	return (0);
}
