#include<ctype.h>
#include<string.h>

/**
 * string_toupper - This converts all lowercase of the string to uppercase.
 * @s: String that is being converted
 *
 * Return: s
 */

char *string_toupper(char *s)
{
	int len = strlen(s);
	int n_times = 0;

	while (n_times <= len - 1)
	{
		*(s + n_times) = toupper(*(s + n_times));
		n_times++;
	}
	return (s);
}

