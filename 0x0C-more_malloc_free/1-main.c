#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * main - check your code
 *
 * Return: Always 0
 */

int main(void)
{
	char *concat;

	concat = string_nconcat(NULL, NULL, 13);
	printf("%s\n", concat);
	free(concat);
	return (0);
}
