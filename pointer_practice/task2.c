#include<stdio.h>

/**
 * main - check your code
 *
 * Return: Always 0
 */

int main(void)
{
	int m = 29;

	printf("Address of m: %p\n", &m);
	printf("value of m: %i\n", m);

	int *ab;
	ab = &m;

	printf("Address of ab: %p\n", ab);
	printf("value of ab: %i\n", *ab);

	m = 34;
	
	printf("Address of ab: %p\n", ab);
	printf("value of ab: %i\n", *ab);

	*ab = 7;
	printf("Address of m: %p\n", &m);
	printf("value of m: %i\n", m);

	return (0);
}
