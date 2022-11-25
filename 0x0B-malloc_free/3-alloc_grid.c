#include<stdlib.h>

/**
 * alloc_grid - This program returns a pointer to a 2d array.
 * @width: row of the array
 * @height: column of the array
 *
 * Return: grid
 */

int **alloc_grid(int width, int height)
{
	int *matrix = (int *)malloc(width * height * sizeof(int));

	int r = 0;
	int c = 0;

	while (r < width)
	{
		while (c < height)
		{
			*(matrix + r * height + c) = 0;
			c++;
		}
		r++
	}
}
