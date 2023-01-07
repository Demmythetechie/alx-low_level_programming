#include<stdio.h>
#include<string.h>
#include"lists.h"

/**
 * print_list - This function prints the data item and number of list
 * @h: The starting pointer of the linked list is stored in the argument
 *
 * Return: num
 */

size_t print_list(const list_t *h)
{
	size_t num = 0;

	if (h == NULL)
	{
	}
	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		num++;
		h = h->next;
	}
	printf("%lu\n", num);
	return (num);
}
