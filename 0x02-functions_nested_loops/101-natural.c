#include<stdio.h>
#include<stdlib.h>

/**
 * main - This program prints the sum of 3 or 5 multiples below 1024
 *
 * Return: Always 0
 */

int main(void)
{
	int n = 5;
	if (n == 5)
	{
		int range = abs(1);
		while (range < 1024)
		{
			int multiples = range % n;
			if (multiples == 0)
			{
				int sum_multiples = abs(sum_multiples + range);
				if (range == 1023)
				{
					printf("%i\n", sum_multiples);
				}
			}
			range++;
		}
	}
	else
	{
	}
}
