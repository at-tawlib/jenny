#include <stdio.h>
/**
 * main - formatted input functions
 * Return: always 0
 */
int main(void)
{
	int a, b, sum;
	float c;
	char d;

	printf("Enter two integers: \n");
	scanf("%d%d", &a, &b);
	sum = a + b;
	printf("%d + %d = %d\n", a, b, sum);

	printf("Enter float, int and char\n");
	scanf("%f%d", &c, &b);
	printf("float: %f integer: %d\n", c, b);
	return (0);
}
