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
	size_t left = 0;
	size_t right, i;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	right = (size - 1);

	while (left <= right)
	{
		size_t mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; ++i)
		{
			if (i != left)
			{
				printf(", ");
			}
			printf("%d", array[i]);
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return (-1);
}
