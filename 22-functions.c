#include <stdio.h>
/**
 * sum - function to add two numbers
 */
void sum(void); /** function declaration */

/**
 * main - functions
 * Return: always 0
 */
int main(void)
{
	sum(); /** function calling */

	return (0);
}

void sum(void)  /** function definition */
{
	int a, b, sum = 0;
	printf("enter two numbers: ");
	scanf("%d%d", &a, &b);
	sum = a + b;
	printf("sum = %d\n", sum);
}
