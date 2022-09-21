#include <stdio.h>
/**
 * main - calculate of sum of corresponding elements of two arrays and storing result in corresponding third array
 * Return: always 0
 */
int main(void)
{
	int i, array1[5], array2[5], sum_array[5];

	printf("Enter first array elements:\n");
	for (i = 0; i < 5; i++)
		scanf("%d", &array1[i]);

	printf("Enter second array elements:\n");
	for (i = 0; i < 5; i++)
		scanf("%d", &array2[i]);
	
	for (i = 0; i < 5; i++)
	{
		sum_array[i] = array1[i] + array2[i];
		printf("Sum Array element at index %d is %d\n", i, sum_array[i]);
	}
	
	return (0);
}
