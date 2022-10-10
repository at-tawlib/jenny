#include <stdio.h>

/**
 * using predefined macros
 */
int main(void)
{
	printf("date :%s", __DATE__);
	printf("\nTime :%s", __TIME__);
	printf("\nFILE :%s", __FILE__);
	printf("\nLINE :%d", __LINE__);
	printf("\nANSI :%d", __STDC__);

	return (0);
}
