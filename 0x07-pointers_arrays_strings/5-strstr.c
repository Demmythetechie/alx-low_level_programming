#include<string.h>

/**
 * _strstr - This program returns a string pointer if needle matches haystack.
 * @haystack: This is the main string to be examined.
 * @needle: This is the sub-string to be searched in haystack string.
 *
 * Return: remain
 */

char *_strstr(char *haystack, char *needle)
{
	char *remain = strstr(haystack, needle);
	
	return (remain);
}
