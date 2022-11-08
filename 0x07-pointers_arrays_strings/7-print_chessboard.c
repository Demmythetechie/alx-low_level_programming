#include"main.h"
#include<string.h>

/**
 * print_chessboard - Print the 2d array in the main() using putchar
 * @a: The array to be printed
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int len = 8;
	int c = 0;

	while (c < len)
	{
		int r = 0;

		while (r < len)
		{
			_putchar((*(a + c))[r]);
			r++;
		}
		_putchar('\n');
		c++;
	}
}
