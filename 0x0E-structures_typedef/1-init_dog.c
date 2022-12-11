#include "dog.h"
#include<stddef.h>
#include<stdio.h>

/**
 * init_dog - This functions assigns variable to a struct variable
 * @d: structure name
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of dog
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		 d->age = age;
		 d->owner = owner;
	}
	else
	{
		printf("Ok\n");
	}
}
