#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator -  executes a function given as a parameter
 *                   on each element of an array
 * @array: the pointer of the array
 * @size: the size of the array
 * @action: the pointer of the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL && size > 0)
		for (i = 0; i < size; i++)
			(*action)(array[i]);
}
