#include <stdio.h>
/**
 * main - initialize array at runtime and print value of arrays
 * Return: always 0
 */
int main(void)
{
	int a[5], i;

	printf("Enter five numbers: ");
	for (i = 0; i < 5; i++)
		scanf("%d", &a[i]);

	/** print values **/
	printf("array elements: ");
	for (i = 0; i < 5; i++)
		printf("%d ", a[i]);

	/** printing reverse **/
	printf("\narray elements reverse: ");
	for (i = 4; i >= 0; i--)
		printf("%d ", a[i]);
 
	putchar(10);

	return (0);

}
