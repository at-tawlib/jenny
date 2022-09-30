#include <stdio.h>
/**
 * Pointers to functions i.e. the pointer hold the address of the function 
 */

int sum(int, int);

int main(void)
{
	int s = 0;
	int (*ptr)(int, int) = &sum;
	s = (*ptr)(1, 2);
	printf("sum = %d\n", s);

	return (0);
}

/**
 * sum - calculates the sum of two numbers
 */
int sum(int a,int b)
{
	return a + b;
}
