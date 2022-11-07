#include<stdio.h>

/**
 * main - check your code
 *
 * Return: always 0
 */

int main(void)
{
	int a = 5;
	int b = 6;

	int *ptra = &a;
	int *ptrb = &b;

	printf("The sum of the entered numbers is: %i\n", *ptra + *ptrb);
	return (0);
}
