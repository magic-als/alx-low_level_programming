#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees up a 2 dimensional grid
 * @grid: The grid to be freed
 * @height: The heigt of the dimension
 * Return: A freed grid
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
