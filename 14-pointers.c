#include <stdio.h>
/**
 * main - intro to pointers
 * Return: always 0
 */
int main(void)
{
	int a = 10, b = 9, c;
	int *p, *q;

	p = &a;
	q = &b;
	c = *p;

	printf("value of a = %d\n", a);
	printf("value of a = %d\n", *p);
	printf("address of a : %p\n", &a);
	printf("address of a : %p\n", p);
	printf("address of p : %p\n", &p);
	printf("value of c = %d\n", c);
	
	putchar(10);
	int d = 10, e = 5;
	int *r, *s;
	r = &d;
	s = r;
	printf("d = %d %d %d\n", d, *r, *s);
	printf("addresses of d : %p %p %p\n", &d, r, s);

	putchar(10);
	int *u, *v;
	u = &d;
	printf("d = %d %d %d\n", d, *r, *s);
	printf("addresses of d : %p %p %p\n", &d, r, s);

*v = *u;

	putchar(10);
	return (0);
}
