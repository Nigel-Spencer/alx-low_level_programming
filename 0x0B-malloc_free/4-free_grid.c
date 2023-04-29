#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees the memory in a grid
 * @grid: The grid
 * @height: Shows the height
 *
 * Return: On success always 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
