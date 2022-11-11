#include<string.h>
#include"main.h"

/**
 * _print_rev_recursion - This program prints the string s in reverse.
 * @s: The string being printed in reverse
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
