#include <stdio.h>
#include <string.h>
/**
 * main - string functions
 * Return: always 0
 */
int main(void)
{
	char name[30] = {'j','e','n','n','y','\0'};
	printf("%s\n", name);

	printf("enter name: ");
	scanf("%s", name);  /** does not read string after whitespace **/
	printf("Name entered is: %s\n", name);

	printf("\n--- use scanf for multiple string --\n");
	char fname[30], lname[30];
	printf("enter first and last name:");
	scanf("%s %s", fname, lname);
	printf("Your name is : %s %s\n", fname, lname);
	
	/** print first five characters **/
	printf("\nenter name: ");
	scanf("%s", name); 
	printf("First five chars of your name is %.5s\n", name);
	/** print first five chars of your name,and align to right with a total count of 10 (5 spaces, 5 cahrs **/
	printf("First five char of your name aligned is %10.5s\n", name);
	puts(name);
	puts(name);  /** puts adds new line automatically **/

	printf("\nGet only five chars from input --\n");
	printf("enter your name: ");
	scanf("%5s", name);
	puts(name);

	printf("\n---- Get string from a particular index --\n");
	char name3[] = "Azindo";
	scanf("%s", name); 
	printf("%s\n", &name3[2]); /** get name from second index **/

	return (0);
}
