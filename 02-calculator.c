#include <stdio.h>
/**
 * main - calculator app
 * Return: always return 0
 */
int main(void)
{
	int a, b, sum, sub, div, mul;
	char operator;

	printf("Enter operator: ");
	scanf("%c", &operator);
	printf("Enter two operands: ");
	scanf("%d %d", &a, &b);

	switch(operator)
	{
		case '+':
			sum = a + b;
			printf("Sum = %d\n", sum);
			break;
		case '-':
			sub = a - b;
			printf("Sub = %d\n", sub);
			break;
		case '/':
			div = a / b;
			printf("Div = %d\n", div);
			break;
		case '*':
			mul = a * b;
			printf("Mul = %d\n", mul);
			break;
	}


	return (0);
}
