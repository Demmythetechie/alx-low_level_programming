#include"main.h"
#include<string.h>

/**
 * puts_half - This function prints the second half of the string str.
 * @str: The string being printed
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len = strlen(str) - 1;
	int n_times = 0;
	int result = len % 2;
	int half = len / 2;

	if (result == 0)
	{
		while (n_times < len)
		{
			if (n_times < half)
			{
			}
			else
			{
				_putchar(*(str + n_times));
			}
			n_times++;
		}
	}
	else
	{
		_putchar(*(str + len));
	}
	_putchar('\n');
}
