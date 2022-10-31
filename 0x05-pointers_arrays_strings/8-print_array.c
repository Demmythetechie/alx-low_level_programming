#include<stdio.h>

/**
 * print_array - This function prints the elements of an array depending int n.
 * @a: The pointer connected to the array in the main function
 * @n: The variable dependent on the printing of the array elements.
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int n_array = 0;

	while (n_array < n)
	{
		printf("%i",  *(a + n_array));

		if (n_array != n - 1)
		{
			printf(", ");
		}
		n_array++;
	}
	putchar('\n');
}
