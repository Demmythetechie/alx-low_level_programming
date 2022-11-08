#include<string.h>

/**
 * _strspn - This program returns number of matching character using s & accept
 * @s: The string that is being scanned for matching character by s
 * @accept: The aid for scanning the scanned
 *
 * Return: m_chr
 */

unsigned int _strspn(char *s, char *accept)
{
	int m_chr = strspn(s, accept);

	return (m_chr);
}
