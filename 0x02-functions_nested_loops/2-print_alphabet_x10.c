#include "main.h"

/**
 * print_alphabet_x10 - prints letter a - z in lowercase ten times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int n_times = 1;

	while (n_times <= 10)
	{
		char letter =  'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		n_times++;
		_putchar('\n');
	}
}
