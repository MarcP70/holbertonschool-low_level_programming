#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - This function creates an array of integers
 *  between min and max values
 * @min: number to start
 * @max: number to stop
 *
 * Return: a pointer to the allocated memory
 */

int *array_range(int min, int max)
{
	int *ar;
	int i;

	if (min > max)
		return (NULL);

	ar = malloc((max - min + 1) * sizeof(int));
	if (ar == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
	{
		ar[i] = min + i;
	}

	return (ar);
}
