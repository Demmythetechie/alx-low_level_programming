#include "main.h"

/**
 * times_table - This program prints the nine times table, starting with zero.
 *
 * Return: void
 */

void times_table(void)
{
	int multiplier = 0;

	while (multiplier <= 9)
	{
		int n_times = 0;

		while (n_times <= 9)
		{
			int multiplied = multiplier * n_times;
			int one_m = multiplied / 10;
			int two_m = multiplied % 10;

			if (multiplied < 10)
			{
				_putchar(' ');
				_putchar(two_m + '0');
			}
			else
			{
				_putchar(one_m + '0');
				_putchar(two_m + '0');
			}

			if (n_times == 9)
			{
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
			n_times++;
		}
		multiplier++;
		_putchar('\n');
	}
}
