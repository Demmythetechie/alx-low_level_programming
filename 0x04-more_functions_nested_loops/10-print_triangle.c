#include "main.h"

/**
 * print_triangle - This program prints a triangle based on the argument(size)
 * @size: This argument determeines the size of the triangle being printed
 *
 * Return: void
 */

void print_triangle(int size)
{
	int column = 1;
	int row_s = 1;
	int count = 0 + size;

	while (column <= size)
	{
		int row = 1;
		int space = 2;

		while (space <= count)
		{
			_putchar(' ');
			space++;
		}
		count--;

		while (row <= row_s)
		{
			_putchar('#');
			row++;
		}
		row_s++;
		_putchar('\n');
		column++;
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
