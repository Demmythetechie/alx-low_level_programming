#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/**
 * main - This program prints the sum of all positive number in argv.
 * @argc: This parameter tells the number of command line argument.
 * @argv: This parameter store the name of command line arguments in it.
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	if (argc != 1)
	{
		while (i < argc)
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
				break;
			}
			else
			{
				sum = sum + atoi(argv[i]);
				if (i == argc - 1)
				{
					printf("%i\n", sum);
					return (0);
				}
			}
			i++;
		}
	}
	else
	{
		printf("%i\n", sum);
	}
	return (0);
}
