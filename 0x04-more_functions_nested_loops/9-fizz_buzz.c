#include<stdlib.h>
#include <stdio.h>

/**
 * main - This program conduct a fizz buzz test with conditions of multiples.
 *
 * Return: Always 0
 */

int main(void)
{
	int i = abs(1);

	while (i <= 100)
	{
		int one_i = i / 10;
		int two_i = i % 10;
		int mul_3 = i % 3;
		int mul_5 = i % 5;

		if (mul_3 == 0)
		{
			putchar('F');
			putchar('i');
			putchar('z');
			putchar('z');
		}
		else if (mul_5 == 0)
		{
			putchar('B');
			putchar('u');
			putchar('z');
			putchar('z');
		}
		else
		{
			if (i < 10)
			{
				putchar(two_i + '0');
			}
			else
			{
				putchar(one_i + '0');
				putchar(two_i + '0');
			}
		}
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
