#ifndef _DOG_H_

#define _DOG_H_

/**
 * struct dog - This holds information about a dog
 * @name: name of a dog
 * @age: age of a dog
 * @owner: owner of the dog
 *
 * Description: This holds all information about a dog and can be used
 * for any dog, basically like a template
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* _DOG_H_ */
