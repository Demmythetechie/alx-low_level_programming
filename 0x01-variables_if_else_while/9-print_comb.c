#include<stdio.h>

/**
 * main - This program prints all single digit numbers with a comma and space.
 *
 * Return: 0
 */

int main(void)
{
	int n;

	while (n < 10)
	{
		putchar(n + '0');
		if (n == 9)
		{
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
