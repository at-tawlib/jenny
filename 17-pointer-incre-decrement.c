#include <stdio.h>
/**
 * main - increment and decrement of pointers
 * Return: always 0
 */
int main(void)
{
	int a[] = {3, 2, 67, 0, 56};
	int *p;

	p = a;
	printf("%d with address: %p\n", *p, p);
	printf("%d with address: %p\n", *(p++), p);
	printf("%d with address: %p\n", *p, p);
	printf("%d with address: %p\n", *++p, p);

	printf("%d\n", *p);
	p = &a[3];
	printf("%d\n", *p);
	printf("%d %d\n", *--p, *--p);
	printf("%d", *p);

	putchar(10);
	return (0);
}
