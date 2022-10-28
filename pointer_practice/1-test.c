#include<stdio.h>

/**
 * main - pointer practice one
 *
 * Return: Always 0
 */

int main(void)
{
	char c;
	int n;

	c = 'd';
	n = 157;

	printf("Address of variable c : %p\n", &c);
	printf("Address of variable n : %p\n", &n);
	return (0);
}
