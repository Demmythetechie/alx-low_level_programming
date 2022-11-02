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
	char str[1000];
	int len = strlen(s);
	int n_times = len;
	int num = 0;

	while (num < len)
	{
		str[n_times] = *(s + num);
		num++;
		n_times--;
	}
	s = str;
}
