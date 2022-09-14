#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - print whether variable n is greater than 5, is 0 or is less than 6.
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	printf("Last digit of %i is ", n);

	if (last_digit > 5)
	{
		printf("%i and is greater than 5\n", last_digit);
	}
	else if (last_digit == 0)
	{
		printf("%i and is 0\n", last_digit);
	}
	else if (last_digit < 6)
	{
		printf("%i and is less than 6 and not 0\n", last_digit);
	}
	return (0);

}
