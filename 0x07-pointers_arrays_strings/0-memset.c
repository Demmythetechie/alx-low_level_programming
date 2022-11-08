#include<string.h>

/**
 * _memset - 
 * @s: memory to be replaced
 * @b: memory that replaces s memory
 * @n: how many element to be replaced
 *
 * Return: 
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
