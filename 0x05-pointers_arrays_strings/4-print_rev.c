#include"main.h"
#include<string.h>

/**
 * print_rev - This program prints the string passed in it in reverse order.
 * @s: string passed into the function
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len =  strlen(s) - 1;
	int num = len;

	while (num <= len)
	{
		if (num == -1)
		{
			break;
		}
		else
		{
			_putchar(*(s + num));
			num--;
		}
	}
	_putchar('\n');
}
