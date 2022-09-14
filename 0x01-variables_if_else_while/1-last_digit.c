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

	if (n > 5)
	{
		printf("Last digit of %i is %d and is greater than 5\n", n,n);
	}
	else if (n == 0)
	{
		printf("Last digit of %i is %d and is 0\n", n,n);
	}
	else
	{
		printf("Last digit of %i is %d and is less than 6 and not 0\n", n,n);
	}
	return (0);

}
