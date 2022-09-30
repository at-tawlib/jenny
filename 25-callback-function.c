#include <stdio.h>

/**
 * call back function: passing address of a function to a function
 */

void sum(int a, int b)
{
	printf("sum = %d\n", a + b);
}

void sub(int a, int b)
{
	printf("sub = %d\n", a - b);
}

void display(void (*fptr)(int, int))
{
	fptr(5, 1);
}

int main(void)
{
	display(sum);
	display(sub);

	return (0);
}
