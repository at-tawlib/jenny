#include <stdio.h>
#include <stdlib.h>

/**
 * realloc: resizes previous allocated memory block without losing its contents
 * program asks user to enter n whic is number of values -> values are printed -> user is asked to enter updated value n
 * -> memory is reallocated with n -> new and old pointer addresses are printed out -> old and new values are printed out
 *  test: try decreasing n value from the first prompt, you realise that the values are truncated
 */
int main(void)
{
	int n, i, *ptr;
	printf("enter total no of values: ");
	scanf("%d", &n);

	ptr = (int*)malloc(n * sizeof(int));

	printf("\nenter the values: ");
	for (i = 0; i < n; i++)
		scanf("%d", (ptr + i));

	printf("\nThe entered values are: ");
	for (i = 0; i < n; i++)
		printf("%d\t", *(ptr + i));


	printf("\nenter updated size of n: ");
	scanf("%d", &n);


	/** reallocate memory size */
	int *ptr1 = (int*)realloc(ptr, n * sizeof(int));

	printf("\nprevious address: %p, new address: %p\n", ptr, ptr1);

	printf("\nThe updated values are from ptr1: ");
	for (i = 0; i < n; i++)
		printf("%d\t", *(ptr1 + i));
	
	printf("\nThe updated values are from ptr: ");
	for (i = 0; i < n; i++)
		printf("%d\t", *(ptr + i));


	/** free memory, since both ptr and ptr1 points to the same location, freeing ptr1 also frees ptr */
	free(ptr1);
	ptr1 = NULL;
	ptr = NULL;

	putchar(10);
	return (0);
}
