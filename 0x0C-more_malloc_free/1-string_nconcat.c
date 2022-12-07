#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * test1 - This program returns a malloced string holding s1 and n byte of s2
 * @s1: string_1
 * @s2: string_2
 * @n: number of byte to add
 *
 * Return: str
 */

char *test1(char *s1, char *s2, unsigned int n)
{
	int i = 0;
	unsigned int num = 0;
	int len = strlen(s1) + n + 2;
	int len1 = strlen(s1);
	char *str = malloc(len * sizeof(char));

	while (i < len1)
	{
		*(str + i) = s1[i];
		i++;
	}
	while (num <= n)
	{
		*(str + i) = s2[num];
		num++;
		i++;
	}
	*(str + i) = '\0';
	return (str);
}

/**
 * test2 - This program returns a malloced string holding s1 and s2
 * @s1: string_1
 * @s2: string_2
 * @n: number of byte to add
 *
 * Return: str
 */

char *test2(char *s1, char *s2, __attribute__((unused)) unsigned int n)
{
	int i = 0;
	int num = 0;
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	char *str = malloc((len1 + len2 + 1) * sizeof(char));

	while (i < len1)
	{
		*(str + i) = s1[i];
		i++;
	}
	while (num < len2)
	{
		*(str + i) = s2[num];
		num++;
		i++;
	}
	*(str + i) = '\0';
	return (str);
}

/**
 * test3 - This program returns a malloced string holding s1 and s2
 * @s1: string_1
 * @s2: string_2
 * @n: number of byte to add
 *
 * Return: str
 */

char *test3(char *s1, char *s2, __attribute__((unused)) unsigned int n)
{
	int i = 0;

	int __attribute__((unused)) len2 = strlen(s2);
	int len1 = strlen(s1) + 1;
	char *str = malloc(len1 * sizeof(char));

	while (i < len1)
	{
		*(str + i) = s1[i];
		i++;
	}
	*(str + i) = '\0';
	return (str);
}

/**
 * test4 - This program returns a malloced string holding s1 and s2
 * @s1: string_1
 * @s2: string_2
 * @n: number of byte to add
 *
 * Return: str
 */

char *test4(__attribute__((unused)) char *s1, char *s2, unsigned int n)
{
	int i = 0;
	unsigned int num = 0;
	unsigned int len2_1 = strlen(s2);
	int len2 = strlen(s2) + 1;
	char *str;

	if (n >= len2_1)
	{
		str = malloc(len2 * sizeof(char));
		while (i < len2)
		{
			*(str + i) = s2[i];
			i++;
		}
		*(str + i) = '\0';
	}
	else
	{
		str = malloc((n + 2) * sizeof(char));
		while (num <= n)
		{
			*(str + num) = s2[num];
			num++;
		}
		*(str + num) = '\0';
	}
	return (str);
}

/**
 * string_nconcat - This program concatenates two string.
 * @s1: destination for concatenation
 * @s2: source of concatenation
 * @n: number of byte to add
 *
 * Return: string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	if (s1 != NULL && s2 != NULL)
	{
		return (test1(s1, s2, n));
	}
	else if ((s1 != NULL && s2 != NULL) &&  n >= strlen(s2))
	{
		return (test2(s1, s2, n));
	}
	else if (s1 == NULL && s2 != NULL)
	{
		return (test4(s1, s2, n));
	}
	else if (s1 != NULL && s2 == NULL)
	{
		return (test3(s1, s2, n));
	}
	else
	{
		exit(4);
	}
}
