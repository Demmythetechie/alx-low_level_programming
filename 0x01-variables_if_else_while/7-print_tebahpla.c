#include<stdio.h>

/**
 * main - This program prints in reverse alphabet in lowercase.
 *
 * Return: 0
 */

int main(void)
{
	char alphabet =  'z';
	char new_line = '\n';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar(new_line);
	return (0);
}
