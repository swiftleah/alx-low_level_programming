#include "function_pointers.h"

/**
 * array_iterator - executes function given as a parameter
 * on each element of given array.
 * @array: array to iterate through
 * @size: size of array
 * @action: function pointer
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int long i;

	if (array != NULL && size != 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
