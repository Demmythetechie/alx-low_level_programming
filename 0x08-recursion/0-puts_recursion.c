#include<stdio.h>

/**
 * _puts_recursion - This program prints a string using puts.
 * @s: The string that is printed.
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	int n = 0;
	puts(s);
	puts("\n");
	if (n < 3)
	{
		n++;
		_puts_recursion(s);
	}
}
