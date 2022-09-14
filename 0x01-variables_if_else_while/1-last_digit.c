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

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int last_digit = n % 10;

	printf("Last digit of %i is ", n);

	if (n > 5)
	{
		printf("%i and is greater than 5\n", last_digit);
	}
	else if (n == 0)
	{
		printf("%i and is 0\n", last_digit);
	}
	else
	{
		printf("%i and is less than 6 and not 0\n", last_digit);
	}
	return (0);

}
