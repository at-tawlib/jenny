#include <stdio.h>
#define A 10
#define MUL(a, b) a * b
#define MAX(a, b) if(a > b) \
	printf("%d is maximum\n", a); \
	else \
	printf("%d is maximum\n", b);

/**
 * Define and use macros
 */
int main(void)
{
	int x = A;

	printf("%d\n", x);

	printf("multiplication is = %d\n", MUL(5, 2));

	MAX(3, 4);

	#undef MAX

	return (0);
}
