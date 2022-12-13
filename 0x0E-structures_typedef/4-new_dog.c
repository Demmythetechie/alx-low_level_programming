#include<stdio.h>
#include"dog.h"
#include<stdlib.h>
#include<string.h>

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
		char *nam;
		char *owne;
		dog_t *dog = malloc(sizeof(dog_t));

		nam = strdup(name);
		owne = strdup(owner);
		dog->name = nam;
		dog->age = age;
		dog->owner = owne;
		return (dog);
		free(dog);
		free(nam);
		free(owne);
	}
}
