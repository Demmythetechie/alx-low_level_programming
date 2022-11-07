#include<stdio.h>

/**
 * main - check your code
 *
 * Return: Always 0
 */

int main(void)
{
	int m = 10;
	int n;
	int o;

	int *z;
	z = &m;
	*z = 10;

	printf("Address of m: %p\n", &m);
	printf("Address of n: %p\n", &n);
	printf("Address of o: %p\n", &o);
	printf("Address of z: %p\n", &z);

	return (0);
}
