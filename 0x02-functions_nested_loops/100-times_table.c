#include"main.h"

/**
 * print_times_table - this program print the n times table starting from 0.
 * @n: this parameter determines the number of times table.
 *
 * Return: void
 */

void print_times_table(int n)
{
	if (n <= 15)
	{
		int multiplier = 0;

		while (multiplier <= n)
		{
			int n_times = 0;

			while (n_times <= n)
			{
				int multiplied = multiplier * n_times;
				int one_m = multiplied / 10;
				int two_m = multiplied % 10;

				if (multiplied <= 9)
				{
					if (n_times == 0)
					{
						_putchar(two_m + '0');
					}
					else
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(two_m + '0');
					}
				}
				else if (multiplied < 100 && multiplied > 9)
				{
					_putchar(' ');
					_putchar(one_m + '0');
					_putchar(two_m + '0');
				}
				else if (multiplied > 99)
				{
					int one_h = multiplied / 100;
					int two_h = multiplied / 10;
					int two_h2 = two_h % 10;
					int three_h = multiplied % 10;

					_putchar(one_h + '0');
					_putchar(two_h2 + '0');
					_putchar(three_h + '0');
				}

				if (n_times != n)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
				{
				}
				n_times++;
			}
			multiplier++;
			_putchar('\n');
		}
	}
	else
	{
	}
}
