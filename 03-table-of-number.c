#include <stdio.h>
/**
 * main - print table of a number
 * Return: always 0
 */
int main(void)
{
	int number, i, a;

	printf("Enter a number: ");
	scanf("%d", &number);
	
	for (i = 1; i <= 10; i++)
	{
		a = number * i;
		printf("%d\n", a);
	}
	return (0);
}
