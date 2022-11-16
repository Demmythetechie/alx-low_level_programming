#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/**
 * main - This program prints the product of two command line argument
 * @argc: This parameter tells the number of command line argument.
 * @argv: This parameter store the name of command line arguments in it.
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int product = 1;

	if (argc <= 2 || atoi(argv[1]) == 0 || atoi(argv[2]) == 0)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		while (i < argc)
		{
			product = product * atoi(argv[i]);
			i++;
		}
		printf("%i\n", product);
		return (0);
	}
}
