#include "main.h"

/**
 * print_line - Program prints underscore based on the argument in the function
 * @n: Argument acts as number of times the underscore should be printed.
 *
 * Return: void
 */

void print_line(int n)
{
	int n_times = 1;

	while (n_times <= n)
	{
		_putchar('_');
		n_times++;
	}
	_putchar('\n');
}
