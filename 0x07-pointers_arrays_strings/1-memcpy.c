#include<string.h>

/**
 * _memcpy - this program copies memory area.
 * @dest: destination(pasting occurs here)
 * @src: source(copying occurs here)
 * @n: number of element to be src will be pasted in.
 *
 * Return: Always 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
