#include<stdlib.h>
#include "main.h"

/**
 * main - This program conduct a fizz buzz test with conditions of multiples.
 *
 * Return: Always 0
 */

int main(void)
{
	int i = abs(1);

	while (i <= 100)
	{
		int one_i = i / 10;
		int two_i = i % 10;
		int mul_3 = i % 3;
		int mul_5 = i % 5;

		if (mul_3 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
		}
		else if (mul_5 == 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else
		{
			if (i < 10)
			{
				_putchar(two_i + '0');
			}
			else
			{
				_putchar(one_i + '0');
				_putchar(two_i + '0');
			}
		}
		_putchar(' ');
		i++;
	}
	_putchar('\n');
	return (0);
}
