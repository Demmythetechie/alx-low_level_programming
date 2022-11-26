#include<stdlib.h>
#include<limits.h>

/**
 * malloc_checked - This program returns a * to the allocated memory.
 * @b: n byte
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	if (b == INT_MAX || b <= 0)
	{
		return (malloc(b));
		exit(98);
	}
	else
	{
		return (malloc(b));
	}
}
