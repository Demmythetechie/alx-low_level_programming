#include<string.h>
#include"main.h"

/**
 * _strncpy - This function copys chracter from src to dest using n.
 * @dest: The string where src paste it characters.
 * @src: The string that kis beinhg copied.
 * @n: The number of character to be copied from src.
 *
 * Return: Always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *str = strncpy(dest, src, n);
:wq
	return (str);
}
