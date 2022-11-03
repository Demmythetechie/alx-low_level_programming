#include<stdio.h>

/**
 * reverse_array - This reverses an int array based on the size of the array.
 * @a: The array
 * @n: The size of the array
 *
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int n_times;
	int len;
	int n_a[200];
	int num;

	n = n - 1;
	len = n;
	n_times = 0;
	num = 0;

	while (n_times <= n)
	{
		n_a[n_times] = 0 + *(a + len);
		n_times++;
		len--;
	}

	while (num <= n)
	{
		*(a + num) = n_a[num];
		num++;
	}
}
