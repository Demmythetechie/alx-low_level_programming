#include "main.h"

/**
 * print_square - This program prints a square using the argument(size).
 * @size: The square is created using this argument.
 *
 * Return: void
 */

void print_square(int size)
{
	int column = 1;

	while (column <= size)
	{
		int row = 1;

		while (row <= size)
		{
			_putchar('#');
			row++;
		}
		_putchar('\n');
		column++;
	}

	if (size <= 0)
	{
		_putchar('\n');
	}

}
