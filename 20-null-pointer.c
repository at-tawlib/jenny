#include <stdio.h>
/**
 * main - null pointer
 * Return: always 0
 */
int main(void)
{
	int a =3;
	int *ptr1 = NULL;
	int *ptr2;

	printf("%d\n", ptr1); /** returns 0 */
	printf("%d\n", ptr2); /** returns a garbage value */	

	if (ptr1 == NULL)
		printf("this is a null pointer\n");
	else
		printf("%d\n", *ptr1);
	return (0);
}
