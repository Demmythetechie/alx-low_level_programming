#include<string.h>
#include<stdlib.h>
#include<stdio.h>

/**
 * str_concat - This program concatenate two strings and returns a pointer.
 * @s1: destination for concatenation
 * @s2: src of concatenation
 *
 * Return: return NULL or concat
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	char *string;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	else
	{
		string = strcat(s1, s2);
		concat = strdup(string);
		return (concat);
	}
}
