#include<string.h>

/**
 * _strpbrk - This program returns a string when a char from accept matches s
 * @s: The string that scans the string accept for matching character
 * @accept: the string being scanned
 *
 * Return: remain
 */

char *_strpbrk(char *s, char *accept)
{
	char *remain = "result";
	char *result = strpbrk(s, accept);

	return (strcpy(remain, result));
}
