#include "search_algos.h"

/**
 * binary_search - searches for a value in array(*array) of ints
 * using binary search algorithm
 * @array: array of ints to search through
 * @size: size of array
 * @value: value to look for in array
 * Return: int or -1 if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, right, left;

	if (array == NULL)
	{
		return (-1);
	}

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("searching in array:");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;

		if (array[i] == value)
		{
			return (i);
		}
		if (array[i] > value)
		{
			right = i - 1;
		}
		else
			left = i + 1;

	}
	return (-1);
}
