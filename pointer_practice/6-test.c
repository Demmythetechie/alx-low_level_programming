#include<stdio.h>

/**
 * main - pointer practice 6
 *
 * Return: Always 0
 */

int main(void)
{
	char _putchar[7];

	_putchar[0] = '_';
	_putchar[1] = 'p';
	_putchar[2] = 'u';
	_putchar[3] = 't';
	_putchar[4] = 'c';
	_putchar[5] = 'h';
	_putchar[6] = 'a';
	
	*(_putchar + 1) = 's';
	char *p;
	p = _putchar + 1;

	printf("%p\n", (_putchar + 1));
	printf("%li\n", sizeof(&_putchar[3]));
	
	char *ptr_5 = &_putchar[3];
	printf("%p\n", ptr_5);
	printf("%c\n", _putchar[1]);
	return (0);
}
