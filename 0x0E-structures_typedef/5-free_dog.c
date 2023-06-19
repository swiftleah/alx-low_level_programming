#include "dog.h"

/**
 * free_dog - free's dogs
 * @d: pointer to dog struct
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);

		free(d);
	}
}
