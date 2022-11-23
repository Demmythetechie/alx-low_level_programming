#include<stdio.h>
#include<stdlib.h>

/**
 * create_array - This program creates a string and initializes it using c.
 * @size: The size of the string.
 * @c: The special character being inputed into the string.
 *
 * Return: str
 */

char *create_array(unsigned int size, char c)
{
	unsigned int n_times = 0;
	char *str;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		str = (char *)malloc(sizeof(char) * size);
		while (n_times <= size)
		{
			*(str + n_times) = c;
			n_times++;
		}
		return (str);
	}
}
