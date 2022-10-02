#include <stdio.h>

/**
 * Demo of structures
 */
struct student
{
	int rollno;
	char name[20];
	float marks;
}s3 = {2};

struct student s5 = {5, "youyo", 87};
struct student s6;

int main(void)
{
	struct student s1 = {1, "jenny", 90};
	struct student s2;
	struct student s4;

	/** getting input into a struct */
	printf("enter info for s2 ");
	scanf("%d %s %f", &s2.rollno, s2.name, &s2.marks);

	printf("info for s1");
	printf("\n%d %s %f", s1.rollno, s1.name, s1.marks);
	printf("\ninfo for s2");
	printf("\n%d %s %f", s2.rollno, s2.name, s2.marks);
	printf("\ninfo for s3");
	printf("\n%d %s %f", s3.rollno, s3.name, s3.marks);

	s4 = s1;
	printf("\ninfo for s4");
	printf("\n%d %s %f", s4.rollno, s4.name, s4.marks);

	/** struct pointers */
	printf("\n\nStructure pointers\n");
	struct student *ptr = &s2;
	printf("Info of s2 from pointer\n");
	printf("%d %s %f", ptr->rollno, ptr->name, ptr->marks);


	putchar(10);
	return (0);
}
