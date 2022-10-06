#include "main.h"

/**
 * print_last_digit - Prints and return the last digit of the parameter x.
 * @x: parameter x
 *
 * Return: last_digit
 */

int print_last_digit(int digit)
{
	int last_digit;

	last_digit = digit % 10;
	return (last_digit);
	_putchar(last_digit + '0');
}
