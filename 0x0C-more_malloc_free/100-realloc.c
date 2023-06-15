#include "main.h"

/**
 * _realloc - reallocates memory using malloc & free
 * @ptr: ptr to old memory block
 * @old_size: size in bytes of old memory block
 * @new_size: size in bytes of new memory block
 *
 * Return: ptr to newly allocated memory/NULL upon failure
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;
	unsigned int min;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	new = malloc(new_size);

	if (new == NULL)
	{
		return (NULL);
	}

	min = (old_size < new_size) ? old_size : new_size;
	memcpy(new, ptr, min);
	free(ptr);

	return (new);
}
