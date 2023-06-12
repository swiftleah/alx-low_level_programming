#include "main.h"

/**
 * free_grid - frees 2D grid created by alloc_grid func
 * @grid: grid
 * @height: height of grid
 *
 * Return: allocated memory
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
