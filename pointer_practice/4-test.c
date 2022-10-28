#include<stdio.h>

/**
 * main - pointer practice 4
 *
 * Return: Always 
 */

int main(void)
{
	int age = 20;
	int *ptr_age;
	ptr_age = &age;

	*ptr_age = 21;

	printf("%i\n", *ptr_age);
	printf("%p\n", ptr_age);
	printf("%li\n", sizeof(&age));
	putchar('\n');
	return (0);
}
