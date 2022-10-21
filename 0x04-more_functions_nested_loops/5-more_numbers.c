#include "main.h"

/**
 * more_numbers - This program prints number 1 - 14 x10
 *
 * Return: void
 */

void more_numbers(void)
{
	int n_times = 1;
	while (n_times <= 10)
	{
		int num = 0;
		while (num <= 14)
		{
			int num1 = num / 10;
			int num2 = num % 10;

			if (num > 9 && num <= 14)
			{
				_putchar(num1 + '0');
			}
			_putchar(num2 + '0');
			num++;
		}
		_putchar('\n');
		n_times++;
	}
}
