#include "function_pointers.h"

/**
 * int_index - searches for specific int
 * @array: array
 * @size: size of array (number of elements)
 * @cmp: function pointer that takes int as arg and returns int
 *
 * Return: -1 if no element matches or size 0 or less
 * index of element if element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
		{
			return (i);
		}
	}
	return (-1);
}
