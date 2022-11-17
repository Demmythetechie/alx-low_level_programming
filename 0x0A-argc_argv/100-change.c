#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * main - This program print the change in high denomination for argv[1]
 * @argc: This parameter tells the number of command line argument.
 * @argv: This parameter store the name of command line arguments in it.
 *
 * Return: 0
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	int n = 0;
	int argv1 = atoi(argv[1]);

	if (argv1 < 1)
	{
		printf("%i\n", 0);
	}
	else if (argv1 >= 1)
	{
		while (argv1 >= 1)
		{
			if (argv1 >= 25)
			{
				argv1 = argv1 - 25;
			}
			else if (argv1 >= 10 && argv1 <= 25)
			{
				argv1 = argv1 - 10;
			}
			else if (argv1 >= 5 && argv1 <= 10)
			{
				argv1 = argv1 - 5;
			}
			else if (argv1 >= 2 && argv1 <= 5)
			{
				argv1 = argv1 - 2;
			}
			else if (argv1 >= 1 && argv1 <= 2)
			{
				argv1 = argv1 - 1;
			}
			n = n + 1;
		}
		printf("%i\n", n);
	}
	return (0);
}
