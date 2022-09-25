#include <stdio.h>
/**
 * main - use of void pointers
 * Return: always 0
 */
int main(void)
{
	void *vp;
	int a = 5;
	float b = 1.56;
	char ch = 'c';

	vp = &a;
	printf("a = %d\n", *(int*)vp);

	vp = &b;
	printf("b = %f\n", *(float*)vp);

	vp = &ch;
	printf("ch = %c\n", *(char*)vp);
	return (0);
}
