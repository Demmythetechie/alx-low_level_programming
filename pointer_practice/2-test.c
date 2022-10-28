#include<stdio.h>

/**
 * main - pointer practice test 2
 *
 * Return: Always 0
 */

int main(void)
{
	int class = 8;
	int age = 20;
	char grade = 'B';

	int *ptr_class = &class;
	int *ptr_age = &age;
	char *ptr_grade = &grade;

	int n_age = 21;
	ptr_age = &n_age;

	printf("%p\n", ptr_class);
	printf("%p\n", ptr_age);
	printf("%p\n", ptr_grade);
	return (0);
}
