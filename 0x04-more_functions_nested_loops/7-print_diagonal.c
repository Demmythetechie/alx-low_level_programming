#include "main.h"

/**
 * print_diagonal - This function prints diagonal line on the terminal.
 * @n: Argument used to determine how many diagonal line would be written.
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int n_times = 1;
	int num = 1;

	while (n_times <= n)
	{
		int s_times = 2;

		while (s_times <= num)
		{
			if (n == 1)
			{
			}
			else
			{
				_putchar(' ');
			}
			s_times++;
		}
		num++;

		_putchar('\\');
		if (n_times != n)
		{
			_putchar('\n');
		}
		n_times++;
	}
	_putchar('\n');
}
