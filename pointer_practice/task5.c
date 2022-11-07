#include<stdio.h>

/**
 * main - check your code
 *
 * Return: Always 0
 */

int sum(int *x, int *y)
{
	return (*x + *y);
}

int main(void)
{
	int a = 5;
	int b = 6;

	printf("The sum of 5 and 6 is %i\n", sum(&a, &b));
	return (0);
}
