#include<stdio.h>

/**
 * modif_my_param =set the integer to 402
 * @m: a pointer the integer we want to set to 402
 *
 * Return: void
 */

void modif_my_char_param(char *cc, char ccc)
{
	*cc = 'o';

	printf("value of cc: %c\n", *cc);

	ccc = 'l';
	printf("value of ccc: %c\n", ccc);
}

int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';

	printf("Value of 'c' before the call: %c\n", c);

	modif_my_char_param(p, c);
	return (0);
}
