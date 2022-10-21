#include<ctype.h>

/**
 * _isupper - This function checks if the argument passed is uppercase.
 * @c: The argument(int c) being checked
 *
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
