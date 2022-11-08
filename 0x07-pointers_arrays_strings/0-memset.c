#include<string.h>

/**
 * _memset - This program fills memory with a constant byte
 * @s: memory to be replaced
 * @b: memory that replaces s memory
 * @n: how many element to be replaced
 *
 * Return: (memset(s, b, n)
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
