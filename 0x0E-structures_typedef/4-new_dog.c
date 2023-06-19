#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: NULL upon failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int lenname, lenowner;

	dog_t *newdog = (dog_t *)malloc(sizeof(dog_t));

	if (newdog == NULL)
	{
		return (NULL);
	}

	lenname = strlen(name);
	lenowner = strlen(owner);

	newdog->name = (char *)malloc(lenname + 1);
	newdog->owner = (char *)malloc(lenowner + 1);

	if (newdog->name == NULL || newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}

	strcpy(newdog->name, name);
	strcpy(newdog->owner, owner);

	newdog->age = age;

	return (newdog);
}

