#include<stdio.h>
#include "main.h"

/**
 * main - check your code
 *
 * Return: 0
 */

int main(void)
{
	char *s0 = NULL;
	char *s1 = "Robert Allen";

	printf("%s, %s\n", s0, s1);
	set_string(&s1, s0);
	printf("%s, %s\n", s0, s1);
	return (0);
}
