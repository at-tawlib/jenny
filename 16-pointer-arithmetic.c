#include <stdio.h>
/**
 * main - arithmetic operations on pointers
 * Return: always 0
 */
int main(void)
{
	int a[5] = {1, 4, 2, -8, 0};
	int *p = &a[0]; /** same as int *p = a; */

	printf("value is: %d\n", *p);
	printf("address of element : %p\n", p);

	p = p + 2; 
	printf("value is = %d\n", *p);
	printf("address of element : %p\n", p);
	
	*p = 34;
	printf("value is = %d\n", *p);
	printf("address of element : %p\n", p);

	putchar(10);
	int b[] = {2, 4, 3, 0, -7};
	int *q = b;
	int *r = &b[3];
	printf("r-q = %ld\n", r - q);
	printf("q-r = %ld\n", q - r);
	
	printf("value of r = %d\n", *r);
	r = r - 2;
	printf("value of r = %d\n", *r);

	printf("value of q = %d\n", *q);
	q = q + 2;
	printf("value of q = %d\n", *q);

	printf("value of r = %d\n", *r);
	r = r - 2;
	printf("value of r = %d\n", *r);


	putchar(10);
	return (0);
}
