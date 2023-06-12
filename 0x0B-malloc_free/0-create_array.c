#include "main.h"

/**
 * create_array - allocates memory for an array of chars and initializes it
 * with a specific char
 * @size: size of array
 * @c: char
 *
 * Return: Pointer to the array, otherwise NULL if failure.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	if (size > 0)
	{
		array = (char *)malloc(size * sizeof(char));
	}
	
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}

