#include <stdio.h>
#include <stdlib.h>

/**
 * free memory after using it with free()
 */

/**
 * diplay - returns a pointer of the allocated memory
 */
int *display()
{
	int n, i, *ptr;
	ptr = (int*)malloc(3 * sizeof(int));

	printf("\nenter the values: ");
	for (i = 0; i < 3; i++)
		scanf("%d", (ptr + i));

	return ptr;
}

int main(void)
{
	int i, *ptr1;
	ptr1 = display();

	free(ptr1);

	/** returns garbage value since the memory has been freed */
	printf("\nThe entered values are: ");
	for (i = 0; i < 3; i++)
		printf("%d\t", *(ptr1 + i));

	putchar(10);
	return (0);
}
