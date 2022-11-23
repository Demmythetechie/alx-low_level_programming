#include<string.h>
#include<stdlib.h>
#include<stdio.h>

/**
 * str_concat - This program concatenate two strings and returns a pointer.
 * @s1: destination for concatenation
 * @s2: src of concatenation
 *
 * Return: return NULL or concat int len2 = strlen(s2);
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	else if (s1 != NULL && s2 != NULL)
	{
		int i = 0;
		int n = 0;
		int len = strlen(s1) + strlen(s2);
		int len1 = strlen(s1);

		concat = malloc(sizeof(char) * len);

		while (i < len1)
		{
			*(concat + i) = *(s1 + i);
			i++;
		}
		while (i < len)
		{
			*(concat + i) = *(s2 + n);
			i++;
			n++;
		}
		return (concat);
	}
	else
	{
		if (s1 == NULL)
		{
			concat = strdup(s2);
		}
		else if (s2 == NULL)
		{
			concat = strdup(s1);
		}
		return (concat);
	}
}
