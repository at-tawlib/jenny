#include <stdio.h>
/**
 * main - pointer excercise
 * Return: always 0
 */
int main(void)
{
	int a[] = {10, 11, -1, 56, 67, 5, 4};
	int *p, *q;
	p = a;
	
	printf("%d\n", *p);
	/** below executes from right to left because of operator precedence
	 * *++p = increment p then access the value(p=a[0+1] = a[1] = 11
	 * *p++ = access value then increment p (a[1] = 11 then p=a[1+1]=a[2]
	 * (*p)++ : get value then increase the value itself (p=a[2] = -1 =>a[2]=-1+1 =0
	 */ 
	printf("%d %d %d\n", (*p)++, *p++, *++p);
	printf("%d\n", *p); /** *p = a[2] now 0 instead 0f -1 */

	q = p + 3; 
	printf("%d\n", *q - 3);
	printf("%d\n", *--p + 5);
	printf("%d\n", *p + *q);

	return (0);
}
