#include<string.h>
#include<ctype.h>

/**
 * cap_string - This capitalizes every word in the string s
 * @s: The string being capitalized
 *
 * Return: s
 */

char *cap_string(char *s)
{
	int len = strlen(s) - 1;
	int num = 0;

	while (num <= len)
	{
		*(s + 0) = toupper(*(s + 0));

		if (*(s + num) == ' ' || *(s + num) == ',' || *(s + num) == ';')
		{
			num++;
			*(s + num) = toupper(*(s + num));
		}
		else if (*(s + num) == '.' || *(s + num) == '!' || *(s + num) == '?')
		{
			num++;
			*(s + num) = toupper(*(s + num));
		}
		else if (*(s + num) == '"' || *(s + num) == '[' || *(s + num) == ']')
		{
			num++;
			*(s + num) = toupper(*(s + num));
		}
		else if (*(s + num) == '{' || *(s + num) == '}' || *(s + num) == '\n')
		{
			num++;
			*(s + num) = toupper(*(s + num));
		}
		else if (*(s + num) == '\t')
		{
			num++;
			*(s + num) = toupper(*(s + num));
		}
		else
		{
			num++;
		}
	}
	return (s);
}
