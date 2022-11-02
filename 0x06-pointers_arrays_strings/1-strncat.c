#include<string.h>
#include"main.h"

/**
 * _strncat - This function concatenate the value in src to the dest using n.
 * @dest: The string where what is in src is added to.
 * @src: The string added to dest.
 * @n: The integer n determines how many character that will be added to dest
 *
 * Return: Always 0
 */

char *_strncat(char *dest, char *src, int n)
{
	char *str = strncat(dest, src, n);

	return (str);
}
