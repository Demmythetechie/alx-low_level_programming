#include<ctype.h>

/**
 * _isdigit - This program returns 1 if the argument is a digit else 0.
 * @c: The argument being checked.
 *
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
