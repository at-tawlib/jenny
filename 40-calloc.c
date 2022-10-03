#include <stdio.h>
#include <stdlib.h>

/**
 * calloc: similar to malloc but this initializes all values to 0 before actual initialization
 */
int main(void)
{
	int n, i, *ptr;
	printf("enter total no of values: ");
	scanf("%d", &n);

	ptr = (int*)calloc(n, sizeof(int));

	printf("\nBefore initialization: ");
	for (i = 0; i < n; i++)
		printf("%d\t", *(ptr + 1));


	printf("\nenter the values: ");
	for (i = 0; i < n; i++)
		scanf("%d", (ptr + i));

	printf("\nThe entered values are: ");
	for (i = 0; i < n; i++)
		printf("%d\t", *(ptr + i));

	free(ptr);
	ptr = NULL; /** prevent dangling pointers */

	putchar(10);
	return (0);
}
