#include<stdio.h>

/**
 * main - prints alphabet a-z with an exception of e and q using loops.
 *
 * Return: 0
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet == 'e' || alphabet == 'q')
		{
			alphabet++;
			continue;
		} else
		{
			putchar(alphabet);
			alphabet++;
		}
	}
	putchar('\n');
	return (0);
}



