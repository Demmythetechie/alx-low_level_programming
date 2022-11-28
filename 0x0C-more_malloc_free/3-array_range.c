#include<stdlib.h>

/**
 * array_range - This function creates an array of integer using min and max
 * @min: The starting element of the array
 * @max: The ending number of an array
 *
 * Return: arr
 */

int *array_range(int min, int max)
{
	int *arr;
	int n = 0;
	int i = min;
	int max_min;
	if (min < 0)
	{
		max_min = max + min + 1;
	}
	else
	{
		max_min = max - min + 1;
	}

	if (max > min)
	{
		arr = calloc(max_min, sizeof(int));

		while (n < max_min)
		{
			*(arr + n) = i;
			n++;
			i++;
		}
		return (arr);
	}
	else if (min < max)
	{
		return (NULL);
	}
	else
	{
		return (NULL);
	}
}
