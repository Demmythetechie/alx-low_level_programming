#include"main.h"
#include<string.h>

/**
 * puts2 - This function prints one character and skip one over and over.
 * @str: charcter being printed from the string.
 *
 * Return: void
 */

void puts2(char *str)
{
	int len = strlen(str) - 1;
	int n_times = 0;

	while (n_times <= len)
	{
		int result = n_times % 2;

		if (result == 0)
		{
			_putchar(*(str + n_times));
		}
		n_times++;
	}
	_putchar('\n');
}
