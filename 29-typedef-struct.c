#include <stdio.h>

/**
 * typedef is used as alias
 * in the bellow code, we are giving "struct student" an alias of stu, hence anytime we need to call the struct, we just use the alias i.e. stu
 */
typedef struct student
{
	int rollno;
	char name[20];
	float marks;
} stu;

int main(void)
{
	stu a = {1, "jenny", 76};

	printf("%d %s %f\n", a.rollno, a.name, a.marks);
	return (0);
}
