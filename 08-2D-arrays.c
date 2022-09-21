#include <stdio.h>
/**
 * main - 2Dimensional arrays to print Matrix and calculate the sum
 * Return: always 0
 */
int main(void)
{
	int a[2][3], i, j, sum = 0;

	printf("enter elements of Matrix: ");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
			scanf("%d", &a[i][j]);
	}

	printf("Matrix is:\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", a[i][j]);
			sum = sum + a[i][j];
		}
		printf("\n");
	}
	printf("\nsum = %d\n", sum);
	return (0);
}
