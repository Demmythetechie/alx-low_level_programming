#include<stdio.h>
#include<stdlib.h>

/**
 * main - This program prints the largest prime factor of number 612852475143
 *
 * Return: Always 0
 */

int main(void)
{
	int divisor = 2;
	long int pf = 612852475143;
	int large = 0;

	while (divisor <= pf)
	{
		int quotient = pf % divisor;

		if (quotient == 0)
		{
			if (divisor > large)
			{
				large = 0 + divisor;
			}
			pf = pf / divisor;
			divisor = 2;
		}
		else
		{
			divisor++;
		}
	}
	printf("%i\n", large);
	return (0);
}
