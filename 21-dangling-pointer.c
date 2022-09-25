#include <stdio.h>
#include <stdlib.h>
/**
 * main - dangling pointer: pointer that points to a free memory
 * Return: always 0
 */
int main(void)
{
	int *ptr = (int*) malloc(sizeof(int));
	*ptr = 10;  /** allocate memory */
	printf("%d\n", *ptr);
	/** free the memomry */
	free(ptr);
	printf("%d\n", *ptr); /** returns a garbage value */
	
	/** solve the dangling pointer by initilizing it to null */
	ptr = NULL;

	return (0);
}
