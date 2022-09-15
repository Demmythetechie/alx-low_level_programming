#include<stdio.h>

/**
 * main - prints alphabet in lowercase and uppercase using a while loop.
 *
 * Return: 0
 */

int main(void)
{
	char s_letter = 'a';
	char b_letter = 'A';

	while (s_letter <= 'z')
	{
		putchar(s_letter);
		s_letter++;
	}

	while (b_letter <= 'Z')
	{
		putchar(b_letter);
		b_letter++;
	}
	putchar('\n');

	return (0);
}
