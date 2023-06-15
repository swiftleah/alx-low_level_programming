#include "main.h"

/**
 * _calloc - allocates memory for array using malloc
 * @nmemb: array to allocate memory for
 * @size: elements of 'size' bytes
 *
 * Return: pointer to allocated memory or NULL if failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	size_t total;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}

	total = nmemb * size;

	ptr = malloc(total);

	if (ptr != NULL)
	{
		memset(ptr, 0, total);
	}

	return (ptr);
}
