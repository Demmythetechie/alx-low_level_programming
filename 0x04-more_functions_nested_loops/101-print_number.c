#include "main.h"
#include<stdlib.h>

/**
 * print_number - This program prints an integer based on the n in the function
 * @n: integer n
 *
 * Return: void
 */

void print_number(int n)
{
	int num = abs(n);
	int n_first = num / 10;
	int n_last = num % 10;
	int n_100f = num / 100;
	int n_100m = num % 100 / 10;
	int n_1000f = num / 1000;
	int n_1000 = num / 100 % 10;

	if (n < 0)
	{
		_putchar('-');
	}

	if (num < 10)
	{
		_putchar(n_first + '0');
	}
	else if (num > 9 && num < 100)
	{
		_putchar(n_first + '0');
		_putchar(n_last + '0');
	}
	else if (num > 99 && num < 1000)
	{
		_putchar(n_100f + '0');
		_putchar(n_100m + '0');
		_putchar(n_last + '0');
	}
	else if (num > 999 && num < 10000)
	{
		_putchar(n_1000f + '0');
		_putchar(n_1000 + '0');
		_putchar(n_100m + '0');
		_putchar(n_last + '0');
	}
}
