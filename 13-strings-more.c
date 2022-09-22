#include <stdio.h>
#include <string.h>
/**
 * main - more string functions
 * Return: always 0
 */
int main(void)
{
	char name[30];
	int count = 0, i = 0;

	printf("enter name:");
	scanf("%s", name);
	count = strlen(name);
	printf("length of %s with stlen is : %d\n", name, count);

	/** without using strlen **/
	count = 0, i = 0;
	while (name[i] != '\0')
	{
		count++;
		i++;
	}
	printf("length of %s without stlen is : %d\n", name, count);

	/** concantenate strings **/
	char s1[30] = "jenny";
	char s2[] = "katri";
	printf("\nstring to concatenates are %s and %s", s1, s2);
	strcat(s1, s2);
	printf("\nstring after concatenation is %s\n", s1);
	printf("The other string is %s\n", s2);

	/** concat without using strcat() **/
	int l1, l2;
	char s3[30] = "jenny";
	char s4[] = "khatri";
	l1 = strlen(s3);
	l2 = strlen(s4);
	printf("\nConcatenate without strcat()\n");
	printf("string to concatenates are %s and %s", s3, s4);
	for (i = 0; i <= l2; i++)
	{
		s3[l1 + i] = s4[i];
	}
	printf("\nstring after concatenation is %s\n", s3);
	printf("The other string is %s\n", s4);

	printf("\nconcatenate specific length\n");
	char s5[30] = "jenny";
	char s6[] = "khatri";
	printf("string to concatenates are %s and %s", s5, s6);
	strncat(s5, s6, 3);
	printf("\nstring after concatenation is %s\n", s5);
	printf("The other string is %s\n", s6);


	return (0);
}
