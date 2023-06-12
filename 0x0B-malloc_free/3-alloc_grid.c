#include "main.h"

/**
 * alloc_grid - returns ptr to a 2d array of ints
 * @width - width of grid
 * @height - height of grid
 *
 * Return: ptr to 2d array, NULL if parameters are 0.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	grid = (int **)calloc(width, sizeof(int));

	for (i = 0; i < width; i++)
	{
		grid[i] = (int *)calloc(height, sizeof(int));
	}

	return (grid);
}
