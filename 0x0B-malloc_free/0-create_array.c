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
	int n_times = 0;
	char *str;

	str = (char *)malloc(sizeof(char) * size);

	if (size != 0)
	{
		while (n_times < size)
		{
			*(str + i) = c;
			i++;
		}
		return (str);
	}
	else
	{
		return (NULL);
	}
}
