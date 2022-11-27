#include<stdlib.h>

/**
 * _calloc - This function allocates memmory using an array of element and size
 * @nmemb: the number of element
 * @size: the size of the data type
 *
 * Return: alloc
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb != 0 && size != 0)
	{
		void *alloc;

		alloc = calloc(nmemb, size);
		return (alloc);
	}
	else if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	else
	{
		return (NULL);
	}
}
