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

	printf("\nString compare\n");
	int value;
	char st1[30], st2[30];
	printf("enter string 1: ");
	scanf("%s", st1);
	printf("enter string 2: ");
	scanf("%s", st2);
	value = strcmp(st1, st2);
	if (value == 0)
		printf("string are the same");
	else
		printf("string are not same");
	putchar(10);

	printf("compare string without strcmp()\n");
	int flag = 0;
	for (i = 0; st1[i] != '\0' || st2[i] != '\0'; i++)
	{
		if (st1[i] != st2[i])
		{
			flag = 1;  /** flag to 1 if string is not equal **/
			break;
		}
	}
	if (flag == 0)
		printf("string are the same");
	else
		printf("string are not the same");
	putchar(10);

	printf("\nreverse string\n");
	int length;
	char rev_str[30], a;
	printf("enter string: ");
	scanf("%s", rev_str);
	length = strlen(rev_str);
	printf("string is : %s\n", rev_str);
	for (i = 0; i < length / 2; i++)
	{
		a = rev_str[i];
		rev_str[i] = rev_str[length -1 - i];
		rev_str[length - 1 - i] = a;
	}
	printf("reverse string: %s\n", rev_str);

	printf("\nConvert string to lower\n");
	char lower[30];
	printf("enter string to convert : ");
	scanf("%s", lower);
	printf("The string is :%s\n", lower);
	for (i = 0; lower[i] != '\0'; i++)
	{
		if (lower[i] >= 'A' && lower[i] <= 'Z')
		{
			lower[i] = lower[i] + 32;
		}
	}
	printf("string to lower is : %s\n", lower);
	putchar(10);

	return (0);
}
