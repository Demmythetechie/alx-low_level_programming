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
	char *str = s;
	int l = strlen(s) - 1;
	int n_times = l;
	int a[2];
	a[0] = 0;
	a[1] = 0;

	while (n_times <= l)
	{
		if (n_times == -1)
		{
			break;
		}
		else
		{
			while (a[0] <= a[1])
			{
				*(str + a[0]) = *(s + n_times);
				a[0]++;
			}
			a[1]++;
			n_times--;
		}
	}
	s = str;
}
