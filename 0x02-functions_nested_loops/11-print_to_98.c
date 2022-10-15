#include "main.h"
#include<stdlib.h>

/**
 * print_to_98 - This program prints all natural numbers from n to 98.
 * @n: parameter
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n == 98)
	{
		int one_n = n / 10;
		int two_n = n % 10;

		_putchar(one_n + '0');
		_putchar(two_n + '0');
		_putchar('\n');
	}
	else if (n <= 98)
	{
		while (n <= 98)
		{
			int nw = abs(n);
			int one_n = nw / 10;
			int two_n = nw % 10;

			if (n < 0)
			{
				_putchar('-');
			}

			if (n < 10)
			{
				if (n < -9 && n > -100)
				{
					_putchar(one_n + '0');
					_putchar(two_n + '0');
				}
				else if (n < -99)
				{
					int one_h = nw / 100;
					int two_h = nw / 10;
					int two_h2 = two_h % 10;
					int three_h = nw % 10;

					_putchar(one_h + '0');
					_putchar(two_h2 + '0');
					_putchar(three_h + '0');
				}
				else
				{
					_putchar(two_n + '0');
				}

			}
			else if (n < 100 && n >= 10)
			{
				_putchar(one_n + '0');
				_putchar(two_n + '0');
			}

			if (n == 98)
			{
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
		_putchar('\n');
	}
	else
	{
		while (n >= 98)
		{
			int nw = abs(n);
			int one_n = nw / 10;
			int two_n = nw % 10;

			if (n < 100)
			{
				_putchar(one_n + '0');
				_putchar(two_n + '0');
			}
			else
			{
				int one_h = nw / 100;
				int two_h = nw / 10;
				int two_h2 = two_h % 10;
				int three_h = nw % 10;

				_putchar(one_h + '0');
				_putchar(two_h2 + '0');
				_putchar(three_h + '0');
			}

			if (n == 98)
			{
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
		_putchar('\n');
	}
}
