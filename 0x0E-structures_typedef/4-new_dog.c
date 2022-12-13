#include<stdio.h>
#include"dog.h"
#include<stdlib.h>

/**
 * new_dog - This function creates a new dog
 * @name: name of the dog
 * @age: The dog age
 * @owner: The owner of the dog
 *
 * Return: dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	if (name == NULL && age == 0 && owner == NULL)
	{
		exit(98);
	}
	else
	{
		dog_t *dog = malloc(sizeof(dog_t));
		dog->name = name;
		dog->age = age;
		dog->owner = owner;
		return (dog);
		free(dog);
	}
}
