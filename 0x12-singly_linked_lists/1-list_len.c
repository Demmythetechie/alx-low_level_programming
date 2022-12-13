#include<stdlib.h>
#include"lists.h"

/**
 * list_len - This function returns the number of element in the linked list
 * @h: The head of the linked list
 *
 * Return: num
 */

size_t list_len(const list_t *h)
{
	size_t num;

	num = 0;
	if (h == NULL)
	{
	}

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
