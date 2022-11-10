#include<string.h>
#include<stdio.h>

/**
 * print_diagsums - This program prints the sum of two diagonal of a square int
 * @a: The 2d array that makes a square int matrix
 * @size: The size of the two dimensional array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int r = 0;
	int r2 = 0;
	int c = 0;
	int c2 = 0;
	int n_times = 0;
	int n_times2 = 0;
	int s = size - 1;
	int n = 0;
	int n2 = 0;

	while (c < size)
	{
		while (r <= n_times)
		{
			n = n + *(a + c * size + r);
			r++;
		}
		n_times++;
		c++;
	}
	printf("%i, ", n);

	while (s >= c2)
	{
		while (r2 <= n_times2)
		{
			n2 = n2 + *(a + s * size + r2);
			r2++;
		}
		n_times2++;
		s--;
	}
	printf("%i\n", n2);
}
