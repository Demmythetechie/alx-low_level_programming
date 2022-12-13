#include<stdlib.h>
#include"dog.h"

/**
 * free_dogs - This function frees dog
 * @d: Dog variable
 *
 * Return: 0;
 */

void free_dog(dog_t *d)
{
	free(d);
}
