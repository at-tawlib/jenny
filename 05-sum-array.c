#include <stdio.h>
/**
 * main - read marks of 5 students
 * calculate sum and average using arrays
 * Return: always 0
 */
int main(void)
{
	int i;
	float marks[5], sum, avg;

	sum = 0;
	printf("Enter marks for five students: ");
	for (i = 0; i < 5; i++)
	{
		scanf("%f", &marks[i]);
	}

	/** display values **/
	printf("\nThe marks are: ");
	for (i = 0; i < 5; i++)
	{
		printf("%f ", marks[i]);
	}

	/** sum of marks **/
	for (i = 0; i < 5; i++)
	{
		sum += marks[i];
	}

	avg = sum / 5;
	printf("\nThe sum = %f and average = %f", sum, avg);

	putchar(10);
	return (0);
}
