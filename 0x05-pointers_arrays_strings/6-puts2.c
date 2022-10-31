#include"main.h"
#include<string.h>

/**
 * puts2 - This function prints the all character divisible by 2.
 * @str: The chracter being divisible.
 *
 * Return: void
 */

void puts2(char *str)
{
	int len = strlen(str) - 1;
	int n_times = 0;

	while (n_times <= len)
	{
		int result = *(str + n_times) % 2;

		if (result == 0)
		{
			_putchar(*(str + n_times));
		}
		n_times++;
	}
	_putchar('\n');
}
