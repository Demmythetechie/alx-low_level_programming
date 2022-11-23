#include<stdio.h>
#include"main.h"
#include<stdlib.h>

/**
 * main - check your code
 *
 * Return: Always 0
 */

int main(void)
{
	char *s;

	s = str_concat(NULL, NULL);
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
