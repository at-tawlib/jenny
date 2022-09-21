#include <stdio.h>
/**
 * main - print sum of individual rows and columns
 * Return: always 0
 */
int main(void)
{
	int a[3][3], i, j, sum_row, sum_column;

	printf("enter matrix (3x3): ");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			scanf("%d", &a[i][j]);
	}

	printf("The matrix is:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d\t", a[i][j]);
		putchar(10);
	}

	/** sum of individual rows and columns **/
	for (i = 0; i < 3; i++)
	{
		sum_row = sum_column = 0;
		for (j = 0; j < 3; j++)
		{
			sum_row = sum_row + a[i][j];
			sum_column = sum_column + a[j][i];
		}
		printf("\n sumRow = %d, sumCol = %d", sum_row, sum_column);
	}
	putchar(10);

	return (0);
}
