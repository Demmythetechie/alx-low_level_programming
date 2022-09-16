#include<stdio.h>

/**
 * main - This program prints all number of base 16 in lowercase.
 *
 * Return: 0
 */

int main(void)
{
	int n;
	char n_hex = 'a';
	char new_line = '\n';

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}

	while (n_hex <= 'e')
	{
		putchar(n_hex);
		n_hex++;
	}
	putchar(new_line);
	return (0);
}
