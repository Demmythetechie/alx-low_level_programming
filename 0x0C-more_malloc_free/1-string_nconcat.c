#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * string_nconcat - This program concatenates two string.
 * @s1: destination for concatenation
 * @s2: source of concatenation
 * @n: number of byte to add
 *
 * Return: string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	int i = 0;
	int nm = n;
	int m = 0;
	int len1 = strlen(s1);
	int len2 = strlen(s2);

	if ((s1 != NULL && s2 != NULL) && nm <= len2)
	{
		string = malloc(len1 + nm);
		while (i < len1)
		{
			*(string + i) = *(s1 + i);
			i++;
		}
		while (m < nm)
		{
			*(string + i) = *(s2 + m);
			m++;
			i++;
		}
		return (string);
	}
	else if	(nm >= len2 || (s1 != NULL && s2 != NULL))
	{
		string = malloc(len1 + len2);
		while (i < len1)
		{
			*(string + i) = *(s1 + i);
			i++;
		}
		while (m <= len2)
		{
			*(string + i) = *(s2 + m);
			m++;
			i++;
		}
		return (string);
	}
	return (NULL);
}
