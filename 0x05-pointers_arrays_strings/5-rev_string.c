#include<string.h>
#include<stdio.h>

/**
 * rev_string - This function returns the string passed into it in reverse.
 * @s: The string passed into this function
 *
 * Return: void
 */

void rev_string(char *s)
{
	char str[500];
	int len = strlen(s) - 1;
	int len2 = strlen(s) - 1;
	int i = 0;

	while (i <= len)
	{
		str[i] = *(s + len2);
		i++;
		len2--;
	}
	str[i] = '\0';
	strcpy(s, str);
}
