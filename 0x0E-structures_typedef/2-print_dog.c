#include<stdio.h>
#include "dog.h"

/**
 * print_dog - This function prints out the variable in struct dog
 * @d: The structure being printed
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if ((*d).name != NULL && d->age != 0 && (*d).owner != NULL)
	{
		printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner);
	}
	else if (d == NULL)
	{
	}
	else if (d->name == NULL && d->age == 0)
	{
		printf("Name: (nil)\n");
		printf("Age: %d\n", 0);
		printf("Owner: %s\n", (*d).owner);
	}
	else if (d->name == NULL && d->owner == NULL)
	{
		printf("Name: (nil)\n");
		printf("Age: %f\n", (*d).age);
		printf("Owner: (nil)\n");
	}
	else if (d->age == 0 && d->owner == NULL)
	{
		printf("Name: %s\n", (*d).name)
		printf("Age: %d\n", 0);
		printf("Owner: (nil)\n");
	}
}
