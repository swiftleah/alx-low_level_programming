#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: int to assign memory for
 *
 * Return: pointer or exit with 98 if failure
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
