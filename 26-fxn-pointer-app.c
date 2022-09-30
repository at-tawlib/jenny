#include <stdio.h>
/**
 * program asks user to selecte a choice (add, subtract, multiply or divide). The operation is run after the choice. Ideally a switch statement is used, but we are using function pointers instead
 */

void add(int a, int b)
{
	printf("addition is : %d\n", a + b);
}

void sub(int a, int b)
{
	printf("subtractionis : %d\n", a - b);
}

void mult(int a, int b)
{
	printf("Multiplication is : %d\n", a * b);
}

void div(int a, int b)
{
	printf("Division is %d\n", a / b);
}


int main(void)
{
	int ch, a, b;
	/** using function pointer */
	int (*fptr[10])(int, int) = {add, sub, mult, div};

	printf(" 0 for add\n 1 for sub \n 2 for multiply \n 3 for divide:\n");
	printf("enter choice: ");
	scanf("%d", &ch);
	printf("enter two numbers: ");
	scanf("%d %d", &a, &b);

	(*fptr[ch])(a,b);
	/**
	switch(ch)
	{
		case 0: add(a,b); break;
		case 1: sub(a,b); break;
		case 2: mult(a,b); break;
		case 3: div(a,b); break;
		default: printf("enter valid choice\n");
	}
	*/


	return (0);
}
