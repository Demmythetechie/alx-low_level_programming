#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * _strdup - Returns a pointer to a allocated memory, containing a cpy of str.
 * @str: The string that is being duplicated.
 *
 * Return: result
 */

char *_strdup(char *str)
{
	int len = strlen(str);
	char *result;

	result = strdup(str);
	return (result);
	if (len == 0)
	{
		return (NULL);
	}
}
