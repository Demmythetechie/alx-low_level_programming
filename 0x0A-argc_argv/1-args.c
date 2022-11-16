#include<stdio.h>

/**
 * main - This program prints the number of argument passed when launching.
 * @argc: This parameter tells the number of command line argument.
 * @argv: This parameter store the name of command line arguments in it.
 *
 * Return: Always 0
 */

int main(int argc, __attribute__((unused))char *argv[])
{
	int unit = argc / 10;
	int tenths = argc % 10;
	int hundred = argc / 100 % 10;

	if (argc > 9 && argc < 100)
	{
		putchar(unit + '0');
		putchar(tenths + '0');
	}
	else if (argc > 99 && argc < 1000)
	{
		putchar(unit + '0');
		putchar(tenths + '0');
		putchar(hundred + '0');
	}
	else
	{
		putchar(argc + '0');
	}
	putchar('\n');
	return (0);
}
