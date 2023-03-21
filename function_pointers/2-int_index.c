#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the pointer of the array
 * @size: the size of the array
 * @cmp: the pointer of the function
 * Return: the index of the ingeger
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
		for (i = 0; i < size; i++)
			if ((*cmp)(array[i]) == 1)
				return (i);
	return (-1);
}
