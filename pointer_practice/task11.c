#include<stdio.h>

/**
 * main -check your code
 *
 * Return: Always 0
 */

void swap(int *n)
{
	int a = *n;
	int b = *n + 1;

	*n = *(n + 2);
	*(n + 1) = a;
	*(n + 2) = b;
}

int main(void)
{
	int num[3];

	for (int i = 0; i < 3; i++)
	{
		printf("input the value:\n");
		scanf("%i", &num[i]);
	}

	for (int m = 0; m < 3; m++)
	{
		 printf("element %i = %i\n", m, num[m]);
	}
	putchar('\n');

	swap(num);
	
	for (int m = 0; m < 3; m++)
	{
		printf("element %i = %i\n", m, num[m]);
	}
	return (0);
}
