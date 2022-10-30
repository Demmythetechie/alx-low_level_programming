#include<stdio.h>
#include "main.h"

/**
 * main - check your code
 *
 * Return: Always 0
 */

int main(void)
{
	char str[18] = "My first strlen!\0";
	int len;

	len = _strlen(str);
	printf("%i\n", len);
	return (0);
}
