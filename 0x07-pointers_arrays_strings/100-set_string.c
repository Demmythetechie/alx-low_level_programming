#include<stdio.h>
#include<string.h>

/**
 * set_string - This program copys the string in char *to to **s.
 * @s: destination
 * @to: source
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	char str[500];
	char *string;
	int len = strlen(*s);
	int i = 0;

	if (to == NULL)
	{
		*s = NULL;
	}
	else
	{
		while (i < len)
		{
			str[i] = *(*s + i);
			i++;
		}
		string = str;
		strcpy(string, to);
		*s = str;
	}
}
