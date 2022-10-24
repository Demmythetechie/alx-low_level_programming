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
		int mul_3 = i % 3;
		int mul_5 = i % 5;

		if (mul_3 == 0)
		{
			printf("Fizz");
		}
		else if (mul_5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
