#include "search_algos.h"

/**
* jump_search - This function searches for a value in a sorted array of
*                 integers using the Jump search algorithm
* @array: is a pointer to the first element of the array to search in
* @size: is the number of elements in array
* @value: is the value to search for
*
* Return: the first index where value is located, -1 otherwize
*/

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;
	size_t end = step;

	if (array == NULL)
		return (-1);

	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	while (end < size && array[end] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", end, array[end]);
		prev = end;
		end += step;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev, end);

	while (prev < size && array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev++;
	}

	if (prev < size && array[prev] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		return (prev);
	}

	return (-1);
}
