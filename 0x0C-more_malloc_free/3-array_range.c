#include "main.h"

/**
 * array_range - creates array of integers within specified limits
 * @min: min value of array
 * @max: max value of array
 *
 * Return: pointer to array/NULL upon failure
 */

int *array_range(int min, int max)
{
	int *array;
	int size;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	size = (max - min) + 1;

	array = (int *)malloc(size * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = min;
		min++;
	}

	return (array);
}
