#include<stdio.h>

/**
 * main - The program prints all single digit of base 10.
 *
 * Return: 0
 */

int main(void)
{
	int n;

	while (n < 10)
	{
		printf("%i", n);
		n++;
	}
	putchar('\n');
	return (0);
}
