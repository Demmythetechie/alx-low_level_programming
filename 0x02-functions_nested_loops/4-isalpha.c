#include<ctype.h>

/**
 * _isalpha - This program returns 1 if parameter is an alphabet, 0 otherwise.
 * @c: parameter to be checked.
 *
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
