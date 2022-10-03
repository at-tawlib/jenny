#include <stdio.h>
#include <stdlib.h>

/**
 * use of malloc functions
 * difference between malloc and calloc is that malloc intializes values with garbage value before initialization
 */
int main(void)
{
	int n, i, *ptr;
	printf("enter total no of values: ");
	scanf("%d", &n);

	/** dynamically allocating the memory */
	ptr = (int*)malloc(n * sizeof(int));

	/** before initialization, returns garbage values */
	printf("/nBefore entering values :");
	for (i = 0; i < n; i++)
		printf("%d\t", *(ptr + i));


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
