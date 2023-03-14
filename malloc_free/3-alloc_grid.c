#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - this function returns a pointer to a 2 dimensional array
 *  of integers
 *
 * @width: the number of columns
 * @height: the number of rows
 *
 * Return: the 2D tableau
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **tableau2d;

	tableau2d = malloc(height * sizeof(int));
	if (tableau2d == NULL)
		return (NULL);

	if (width <= 0 || height <= 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		tableau2d[i] = malloc(width * sizeof(int));
		if (tableau2d[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(tableau2d[i]);
			}
			free(tableau2d);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			tableau2d[i][j] = 0;

	return (tableau2d);
}
