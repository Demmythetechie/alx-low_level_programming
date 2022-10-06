#include "main.h"

/**
 * jack_bauer - Prints every minute of the day, starting from 00:00 to 23:59
 *
 * Return: void
 */

void jack_bauer(void)
{
	int hours = 0;

	while (hours < 24)
	{
		int seconds = 0;

		while (seconds <= 59)
		{
			int one_h = hours / 10;
			int two_h = hours % 10;
			int one_s = seconds / 10;
			int two_s = seconds % 10;

			_putchar(one_h + '0');
			_putchar(two_h + '0');
			_putchar(':');
			_putchar(one_s + '0');
			_putchar(two_s + '0');
			_putchar('\n');
			seconds++;
		}
		hours++;
	}
}
