#include<stdio.h>

/**
 * main -check your code
 *
 * Return: 0
 */

int main(void)
{
	int a = 5;
	int b = 6;

	int *ptra = &a;
	int *ptrb = &b;

	if (*ptra > *ptrb)
	{
		printf("%i is the maximum number\n", *ptra);
	}
	else
	{
		printf("%i is the maximum number\n", *ptrb);
	}
	return (0);
}
