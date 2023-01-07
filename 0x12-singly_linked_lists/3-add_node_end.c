#include<stdlib.h>
#include"lists.h"
#include<string.h>
#include<stdio.h>

/**
 * add_node_end - This function adds a node to the end of the list
 * @head: the starting pointer of the linked list
 * @str: The string elements in the list
 *
 * Return: The data item being added
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add = malloc(sizeof(list_t));
	while ((*head) != NULL)
	{
		(*head) = (*head)->next;
	}
	add->str = strdup(str);
	add->len = strlen(str);
	add->next = NULL;
	(*head) = add;
	return(add);
}
