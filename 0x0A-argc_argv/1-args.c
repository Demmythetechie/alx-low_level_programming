#include<stdio.h>
#include"main.h"

/**
 * main - This program prints the number of argument passed when launching.
 * @argc: This parameter tells the number of command line argument.
 * @argv: This parameter store the name of command line arguments in it.
 *
 * Return: Always 0
 */

int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%i\n", argc - 1);
	return (0);
}
