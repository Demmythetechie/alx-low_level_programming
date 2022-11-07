#include<stdio.h>

/**
 * main - check your code
 *
 * Return: Always 0
 */

int main(void)
{
	int n[5];
	n[0] = 5;
	n[1] = 7;
	n[2] = 2;
	n[3] = 9;
	n[4] = 8;

	int *ptr;
	ptr = n;

	for (int i = 0; i < 5; i++)
	{
		printf("element - 0 : %i\n", *(ptr + i));
	}
	return (0);
}
