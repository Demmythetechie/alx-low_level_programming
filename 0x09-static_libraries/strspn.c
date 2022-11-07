#include<string.h>

unsigned int _strspn(char *s, char *accept)
{
	int n = strspn(s, accept);
	return(n);
}
