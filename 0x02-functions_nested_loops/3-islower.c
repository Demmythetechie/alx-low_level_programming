#include<ctype.h>

/**
 * _islower - This program returns 1 if the int c is lowercase, 0 if otherwise.
 * @c: the parameter being checked
 *
 * Return: 0 or 1
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
