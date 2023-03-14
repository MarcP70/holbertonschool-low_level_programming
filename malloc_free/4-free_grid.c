#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - this function frees a 2 dimensional grid
 *  of integers
 *
 * @grid: the 2D array
 * @height: the number of rows
 *
 */

void free_grid(int **grid, int height)
{
	int i;
	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			if (grid[i] != NULL)
				free(grid[i]);
		}
		free(grid);
	}
}
