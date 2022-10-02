#include <stdio.h>
#pragma pack(1)

/**
 * pragma is used for structure packing which reduces size
 * run code without pragma and compare the sizes of both
 */
struct abc
{
	char a;
	int b;
	char c;
};

int main(void)
{
	struct abc s;
	printf("%ld\n", sizeof(s));

	return (0);
}
