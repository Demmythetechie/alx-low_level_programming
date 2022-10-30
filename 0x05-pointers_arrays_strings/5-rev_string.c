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
	int len = strlen(s) - 1;
	int num = 0;
	int n_times = len;
	char str[len];
	int a[2];

	a[0] = 0;
	a[1] = 0;

	while (num <= len)
	{
		str[num] = *(s + num);
		num++;
	}

	while (n_times <= len)
	{
		if (n_times == -1)
		{
			break;
		}
		else
		{
			while (a[0] <= a[1])
			{
				*(s + a[0]) = str[n_times];
				a[0]++;
			}
			a[1]++;
			n_times--;
		}
	}
}
