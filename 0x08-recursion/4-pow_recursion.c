#include <math.h>

/**
 * _pow_recursion - This program returns sqrt of x using y as floating number
 * @x: base number.
 * @y: floating number.
 *
 * Return: -1, 1 or sqrt of x
 */

int _pow_recursion(int x, int y)
{
	if (y <= 0)
	{
		if (y == 0)
		{
			return (1);
		}
		else
		{
			return (-1);

		}
	}
	return( x * _pow_recursion(x , y - 1));
}
