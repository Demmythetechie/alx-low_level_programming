#include "main.h"

/**
 * print_alphabet - This displays alphabets in lowercase.
 *
 * Return: void
 */

void print_alphabet(void)
{
	char letters = 'a';

	while (letters <= 'z')
	{
		_putchar(letters);
		letters++;
	}
	_putchar('\n');

}
