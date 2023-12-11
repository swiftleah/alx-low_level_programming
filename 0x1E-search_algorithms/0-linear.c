#include "search_algos.h"

/**
 * linear_search - searches for a value(int) in array(*array) using
 * linear search algorithm
 * @array: array of integers to search through
 * @size: number of elements in array
 * @value: value to look for in array
 * Return: int value or -1 if array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
