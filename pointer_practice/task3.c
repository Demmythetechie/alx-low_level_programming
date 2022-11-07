#include<stdio.h>

/**
 * main - check your code
 *
 * Return: Always 0
 */

int main(void)
{
	int m = 300;
	float fx = 300.600006;
	char cht = 'z';

	int *pm = &m;
	float *pfx = &fx;
	char *pcht = &cht;

	printf("using & operator:\n\n");
	printf("Address of m: %p\n", &m);
	printf("Address of fx: %p\n", &fx);
	printf("Address of cht: %p\n\n", &cht);

	printf("using & and * operator\n\n");

	printf("value at address: %i\n", *(&m));
	printf("value at address: %f\n", *(&fx));
	printf("value at address: %c\n\n", *(&cht));

	printf("using only pointer variable:\n\n");

	printf("Address of m: %p\n", pm);
	printf("Address of m: %p\n", pfx);
	printf("Address of m: %p\n\n", pcht);

	printf("using only pointer operator: \n\n");

	printf("value of address of m: %i\n", *pm);
	printf("value of address of m: %f\n", *pfx);
	printf("value of address of m: %c\n", *pcht);

	return (0);
}
