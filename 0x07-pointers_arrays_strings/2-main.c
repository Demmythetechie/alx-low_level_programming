#include"main.h"
#include<stdio.h>

/**
 * main - check your code
 *
 * Return: Always 0
 */

int main(void)
{
	char *s;
	char *f;

	s = "Hello";

	f = _strchr(s, 'l');

	if (f != NULL)
	{
		printf("%s\n", f);
	}
	return (0);
}
