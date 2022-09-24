#include <stdio.h>
/**
 * main - pointer to pointer
 * Return: 0
 */
int main(void)
{
	int a = 10;
	int *p = &a;
	int **q = &p;  /** q points to p which points to a **/
	int ***r = &q;

	printf("a = %d\n", a);
	printf("a = %d\n", *p);
	printf("a = %d\n", **q);
	printf("a = %d\n", ***r);

	printf("address of a : %p\n", &a);
	printf("address of a : %p and p : %p\n", p, &p);
	printf("address of a : %p and q : %p\n", p, &q);
	printf("address of a : %p and r : %p\n", p, &r);

	printf("\nchange value *p to 12\n");
	*p = 12;
	printf("a = %d\n", a);
	printf("a = %d\n", *p);
	printf("a = %d\n", **q);
	printf("a = %d\n", ***r);

	printf("\nchange value **q to 17\n");
	**q = 17;
	printf("a = %d\n", a);
	printf("a = %d\n", *p);
	printf("a = %d\n", **q);
	printf("a = %d\n", ***r);

	printf("\nchange value ***r to 78\n");
	***r = 78;
	printf("a = %d\n", a);
	printf("a = %d\n", *p);
	printf("a = %d\n", **q);
	printf("a = %d\n", ***r);


	putchar(10);
	return (0);
}
