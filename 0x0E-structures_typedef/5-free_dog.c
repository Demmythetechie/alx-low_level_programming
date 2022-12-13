#include<stdlib.h>
#include"dog.h"

/**
 * free_dog - This function frees dog
 * @d: dog variable
 *
 * Return: 0;
 */

void free_dog(dog_t *d)
{
	free(d);
	free(d->name);
	free(d->owner);
}
