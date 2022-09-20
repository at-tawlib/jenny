#include <stdio.h>
/**
 * main - read an array of 10 integers and count total of even and odd elements
 * Return: always 0
 */
int main(void)
{
	int numbers[10];
	int even, odd, i;
	even = 0;
	odd = 0;

	printf("Enter 10 intger values: ");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &numbers[i]);

		if (numbers[i] % 2 == 0)
			even ++;
		else
			odd++;
	}

	printf("Total even = %d\n", even);
	printf("Total odd = %d\n", odd);
	return (0);
}
