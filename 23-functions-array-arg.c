#include <stdio.h>
/**
 * avg - calculates the average of numbers
 * Return: average
 */
int avg(int[], int);

int main(void)
{
	int marks[5] = {10, 20, 30, 40, 50}, size, average;
	size = sizeof(marks) / sizeof(marks[0]);
	average = avg(marks, size);
	printf("average = %d\n", average);
	printf("inside main size of array is(in bytes): %ld\n)", sizeof(marks));

	return (0);
}

int avg(int marks[], int size)
{
	int i, sum = 0, average = 0;
	
	for (i = 0; i < size; i++)
	{
		sum = sum + marks[i];
	}
	average = sum / size;
	printf("inside avg function size or array is (in bytes): %ld\n", sizeof(marks));

	return average;
}
